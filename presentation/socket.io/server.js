function start() {
  var io = require('socket.io').listen(10000);


  io.sockets.on('connection', function (socket) {
    socket.emit('news', { hello: 'world' });
    socket.on('my other event', function (data) {
      console.log(data);
    });
    exports.globsock = socket;
    exports.connection = socket.connected;
  });
};

exports.start = start;
exports.globsock = 0;
exports.connection = false;


