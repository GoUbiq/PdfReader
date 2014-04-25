var server = require("./server");
var router = require("./router");
var requestHandlers = require("./requestHandlers");
var connect = require("./socket.io/server")
var handle = {}
handle["/"] = requestHandlers.start;
handle["/start"] = requestHandlers.start;
handle["/upload"] = requestHandlers.upload;
handle["/presentation"] = requestHandlers.presentation;
handle["/photos"] = requestHandlers.photos;
handle["/videos"] = requestHandlers.videos;
handle["/doc/open"] = requestHandlers.openDoc;
handle["/doc/close"] = requestHandlers.closeDoc;
handle["/presentation/open"] = requestHandlers.openPresentation;
handle["/presentation/next"] = requestHandlers.nextSlide;
handle["/presentation/previous"] = requestHandlers.previousSlide;
handle["/presentation/close"] = requestHandlers.closePresentation;
handle["/presentation/stop"] = requestHandlers.stopPresentation;
handle["/presentation/start"] = requestHandlers.startPresentation;
handle["/photos/open"] = requestHandlers.openPhoto;
handle["/photos/background"] = requestHandlers.setBackground;
handle["/photos/close"] = requestHandlers.closePhoto;
handle["/videos/open"] = requestHandlers.openVideo;
handle["/videos/open/nba"] = requestHandlers.openVideoNBA;
handle["/videos/open/nhl"] = requestHandlers.openVideoNHL;
handle["/videos/open/news"] = requestHandlers.openVideoNews;
handle["/videos/play"] = requestHandlers.playVideo;
handle["/videos/pause"] = requestHandlers.pauseVideo;
handle["/videos/close"] = requestHandlers.closeVideo;
handle["/videocall/start"] = requestHandlers.startVideoCall;
connect.start();
server.start(router.route, handle);


