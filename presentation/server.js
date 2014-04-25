var http = require("http");
var url = require("url");
var exec = require("child_process").exec;

function start(route, handle) {

	function onRequest(request, response) {
		var postData = "";
		var pathname = url.parse(request.url).pathname;

		console.log("Request for " + pathname + " received.");
		route(handle, pathname, response, request);
  	}
	function avport(port) {
  		http.createServer(onRequest).listen(port);
  		console.log("Server has started at port " + port);
		exec("python service.py " + port, function (error, stdout, stderr) {
			console.log(stdout);
		});
	}
	var portrange = 45032

	function getPort (cb) {
  		var port = portrange
  		portrange += 1

  		var server = http.createServer()
  		server.listen(port, function (err) {
    			server.once('close', function () {
      				cb(port)
    			})
    			server.close()
  		})
  		server.on('error', function (err) {
    			getPort(cb)
  		})
	}
	getPort(avport)
}
exports.start = start;
