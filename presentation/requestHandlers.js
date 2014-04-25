var exec = require("child_process").exec;
var formidable = require('formidable'),
    http = require('http'),
    util = require('util');
var fs = require("fs");
var sys = require('sys');
var multiparty = require('multiparty');



var io = require('socket.io');
var connect = require('./socket.io/server');




function start(response, request) {
	console.log("Request handler 'start' was called.");
	exec("ls -lah", function (error, stdout, stderr) {
		response.writeHead(200, {"Content-Type": "text/plain"});
		response.write(stdout);
		response.end();

    var data = ['George', 'Stephanie', 'Christina', 'Dannie', 'Sumit', 'Geoffrey'];
    connect.globsock.emit('move', {'type':'start', 'array':data});
	});
}

function upload(response, request) {
	console.log("Request handler 'upload' was called.");
	response.writeHead(200, {"Content-Type": "text/plain"});
	response.write("Hello Upload");
	response.end();
}
function presentation (response, data) {
	console.log("Request handler presentation was called.");
}

function photos (response, data) {
	console.log("Request handler photos was called.");
}

function videos (response, data) {
	console.log("Request handler videos was called.");
}

function openDoc(response, request) {
	    console.log("Open Doc was called");
    if(request.method.toLowerCase() == 'post') {
            var form = new multiparty.Form();

            // form.parse analyzes the incoming stream data, picking apart the different fields and files for you.

            form.parse(request, function(err, fields, files) {
            if(!files) {
                return;
            }
            console.log('in if condition'+util.inspect({fields: fields, files: files}));
            //fs.rename(files.test.path, '/Users/sumitpasupalak/tmp/test.docx','utf8', function (err1) {
            //    if(err1) {
            //    console.log("error writing file " + err1.message); }
            //});
                if (err) {
                    // Check for and handle any errors here.
                    console.error(err.message);
                    return;
                }
            exec("osascript opendoc.scpt openfile " + files.test.path , function (error, stdout, stderr) {
                console.log("Opened Doc file");
                if(error) {
                    console.log(error, stdout, stderr);
                }
            });


                response.writeHead(200, {"Content-Type": "text/plain"});
                response.write("Hello Upload");
                response.end();
            });

    }else {

        response.writeHead(200, {"Content-Type": "text/plain"});
        response.write("Hello Upload");
        response.end();
    }
}

function closeDoc(response, request) {
	console.log("Close Doc requested");
    exec("osascript opendoc.scpt close" , function (error, stdout, stderr) {
                                console.log("Close Presentation");
                        });


        response.writeHead(200, {"Content-Type": "text/plain"});
        response.write("Hello Upload");
        response.end();
}

function openPresentation(response, request) {
	console.log("Open Presentation was called");
	if(request.method.toLowerCase() == 'post')
  {
    console.log('Step 1');
    var form = new multiparty.Form();

    // form.parse analyzes the incoming stream data, picking apart the different fields and files for you.

    form.parse(request, function(err, fields, files)
    {
      console.log ( 'Step 1' );
      if(!files)
      {
        return;
      }

      console.log('in if condition'+util.inspect({fields: fields}));

      /*fs.rename(files.my_file.path, '/Users/geoffreyheath/Ubiq/MobileHub/pdf.js/web/files/','utf8', function (err1) {
        if (err) {
        // Check for and handle any errors here.
          console.error(err.message);
          return;
        }
      }*/

      response.writeHead(200, {'content-type': 'text/plain'});

      fs.createReadStream(files.my_file.path).pipe(fs.createWriteStream('/Users/geoffreyheath/Ubiq/MobileHub/pdf.js/web/files/1.pdf'));

      response.write('received upload:\n\n');
      response.end(util.inspect({fields: fields, files: files}));
    });

    //response.writeHead(200, {"Content-Type": "text/plain"});
    //response.write("Hello Upload");
    //response.end();


	}

  else {

        response.writeHead(200, {"Content-Type": "text/plain"});
        response.write("Hello Upload");
        response.end();
	}
  connect.globsock.emit('move', {'type' : 'open', 'location' : 'files/1.pdf'});

}

function nextSlide(response, request) {
	console.log("Next slide requested");
	exec("osascript openpresentation.scpt next" , function (error, stdout, stderr) {
                                console.log("Next Slide");
                        });

        response.writeHead(200, {"Content-Type": "text/plain"});
        response.write("Hello Upload");
        response.end();
        connect.globsock.emit('move', {'type' : 'next', 'location' : ''});
}

function previousSlide(response, request) {
	console.log("Previous Slide requested");
        exec("osascript openpresentation.scpt previous" , function (error, stdout, stderr) {
                                console.log("Previous Slide");
                        });

        response.writeHead(200, {"Content-Type": "text/plain"});
        response.write("Hello Upload");
        response.end();
        connect.globsock.emit('move', {'type' : 'previous', 'location' : ''});
}

function closePresentation(response, request) {
	console.log("Close Presentation requested");
	exec("osascript openpresentation.scpt close" , function (error, stdout, stderr) {
                                console.log("Close Presentation");
                        });


        response.writeHead(200, {"Content-Type": "text/plain"});
        response.write("Hello Upload");
        response.end();
}

function stopPresentation(response, request) {
    console.log("Stop Presentation requested");
    exec("osascript openpresentation.scpt exit" , function (error, stdout, stderr) {
                                console.log("Close Presentation");
                        });


        response.writeHead(200, {"Content-Type": "text/plain"});
        response.write("Hello Upload");
        response.end();
}

function startPresentation(response, request) {
    console.log("Start Presentation requested");
    exec("osascript openpresentation.scpt start" , function (error, stdout, stderr) {
                                console.log("Close Presentation");
                        });


        response.writeHead(200, {"Content-Type": "text/plain"});
        response.write("Hello Upload");
        response.end();
}


function openVideo(response, request) {
	console.log("Open Video Requested");
	data = "";
	if(request.method.toLowerCase() == 'post') {
		request.addListener('data', function(chunk) {
			data+=chunk;
		});
		request.on('end', function () {
			console.log("Data received is " + data);
			var content = data.toString();
			if(content == 'nhl') {
				console.log('NHL requested');
				exec("osascript ../videos/videocontrol.scpt openfile /Users/sumitpasupalak/Services/Files/nhl/2013finals.mp4" , function (error, stdout, stderr) {
                                	console.log("Opening NHL finals");
                        	});
			}
			else if(content == 'nba') {
				console.log('NBA requested');
				exec("osascript ../videos/videocontrol.scpt openfile /Users/sumitpasupalak/Services/Files/nba/2013Finals.avi" , function (error, stdout, stderr) {
                                        console.log("Opening NBA finals");
                                });
			}
			else {
				console.log('Unknown request');
			}
		});
	}
}

function openVideoNBA(response, request) {
	console.log("NBA requested");
	exec("osascript ../videos/videocontrol.scpt openfile /Users/sumitpasupalak/Services/Files/nba/2013Finals.avi" , function (error, stdout, stderr) {
                                        console.log("Opening NBA finals");
                                });

        response.writeHead(200, {"Content-Type": "text/plain"});
        response.write("Hello Upload");
        response.end();
}

function openVideoNHL(response, request) {
	console.log("NHL requested");
	 exec("osascript ../videos/videocontrol.scpt openfile /Users/sumitpasupalak/Services/Files/nhl/2013finals.mp4" , function (error, stdout, stderr) {
                                        console.log("Opening NHL finals");
                                });

        response.writeHead(200, {"Content-Type": "text/plain"});
        response.write("Hello Upload");
        response.end();
}

function openVideoNews(response, request) {
    console.log("News requested");
     exec("osascript ../videos/videocontrol.scpt openfile /Users/sumitpasupalak/Services/Files/news/news.flv" , function (error, stdout, stderr) {
                                        console.log("Opening NHL finals");
                                });

        response.writeHead(200, {"Content-Type": "text/plain"});
        response.write("Hello Upload");
        response.end();
}

function playVideo(response, request) {
	console.log("Close Video Requested");
	 exec("osascript ../videos/videocontrol.scpt play" , function (error, stdout, stderr) {
                                        console.log("Playing video");
                                });

        response.writeHead(200, {"Content-Type": "text/plain"});
        response.write("Hello Upload");
        response.end();
}

function pauseVideo(response, request) {
	console.log("Pause Video requested");
	exec("osascript ../videos/videocontrol.scpt play" , function (error, stdout, stderr) {
                                        console.log("Pausing video");
                                });


        response.writeHead(200, {"Content-Type": "text/plain"});
        response.write("Hello Upload");
        response.end();

}

function closeVideo(response, request) {
	console.log("Close Video requested");
	exec("osascript ../videos/videocontrol.scpt close" , function (error, stdout, stderr) {
                                        console.log("Closing video");
                                });


        response.writeHead(200, {"Content-Type": "text/plain"});
        response.write("Hello Upload");
        response.end();
}

function openPhoto(response, request) {
        console.log("Open Photo was called");
        if(request.method.toLowerCase() == 'post') {
                var form = new multiparty.Form();

                // form.parse analyzes the incoming stream data, picking apart the different fields and files for you.

                form.parse(request, function(err, fields, files) {
                        if(!files) {
                                return;
                        }
                        console.log('in if condition'+util.inspect({fields: fields, files: files}));
                       // fs.rename(files.photo.path, '/Users/sumitpasupalak/photo.jpeg','utf8', function (err1) {
                       //         if(err1) {
                       //         console.log("error writing file " + err1.message); }
                       // });
                        if (err) {
                                // Check for and handle any errors here.
                                console.error(err.message);
                                return;
                        }
			console.log("Opening photo");
                        exec("osascript ../photos/photocontrol.scpt openfile " + files.photo.path , function (error, stdout, stderr) {
                                console.log("Opened photo");
                        });

                });

        }

        response.writeHead(200, {"Content-Type": "text/plain"});
        response.write("Hello Upload");
        response.end();

}

function setBackground(response, request) {
	console.log("Set Background was called");
	exec("osascript ../photos/photocontrol.scpt background " + '\"/Users/sumitpasupalak/photo.jpeg\"' , function (error, stdout, stderr) {
                                console.log("Set Background" + stdout + stderr);
                        });

        response.writeHead(200, {"Content-Type": "text/plain"});
        response.write("Hello Upload");
        response.end();
}

function closePhoto(response, request) {
	console.log("Close Photo was requested");
	 exec("osascript ../photos/photocontrol.scpt close" , function (error, stdout, stderr) {
                                console.log("Close Background");
                        });

        response.writeHead(200, {"Content-Type": "text/plain"});
        response.write("Hello Upload");
        response.end();
}

function startVideoCall(response, request) {
	console.log("Start Video call was requested");
	response.writeHead(200, {"Content-Type": "text/plain"});
        response.write("Hello Upload");
        response.end();
	exec("osascript ../weblink/openweblink.scpt openlink localhost:20002", function(error, stdout, stderr) {

		console.log("Starting Video call");
	});
}

exports.start = start;
exports.upload = upload;
exports.presentation = presentation;
exports.photos = photos;
exports.videos = videos;
exports.openDoc = openDoc;
exports.closeDoc = closeDoc;
exports.openPresentation = openPresentation;
exports.nextSlide = nextSlide;
exports.previousSlide = previousSlide;
exports.closePresentation = closePresentation;
exports.stopPresentation = stopPresentation;
exports.startPresentation = startPresentation;
exports.openVideo = openVideo;
exports.openVideoNBA = openVideoNBA;
exports.openVideoNHL = openVideoNHL;
exports.openVideoNews = openVideoNews;
exports.playVideo = playVideo;
exports.pauseVideo = pauseVideo;
exports.closeVideo = closeVideo;
exports.openPhoto = openPhoto;
exports.setBackground = setBackground;
exports.closePhoto = closePhoto;
exports.startVideoCall = startVideoCall;
