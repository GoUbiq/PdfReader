var connect = require('./socket.io/server');
var io = require('socket.io');

function route(handle, pathname, response, request) {
	console.log("About to route a request for " + pathname);
	
	if (typeof handle[pathname] === 'function' && connect.globsock && !connect.globsock.disconnected) {
		handle[pathname](response, request);
	} else {
		if (typeof handle[pathname] !== 'function' && (!connect.globsock || connect.globsock.disconnected)){
			console.log("No connection to client" + '\n' + "No request handler found for " + pathname);
		}
		else if (typeof handle[pathname] !== 'function') {
			console.log("No request handler found for " + pathname);
		}
		else{
			console.log("No connection to client");
		}
		response.writeHead(404, {"Content-Type": "text/plain"});
		response.write("404 Not found");
		response.end();
	}
}

exports.route = route;
