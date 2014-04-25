var FormData = require('form-data');
var fs = require('fs');
var http = require('http');

var form = new FormData();
form.append('field', 'post');
form.append('buffer', new Buffer(10));
form.append('my_file', fs.createReadStream('/Users/geoffreyheath/ubiq/mobilehub/projections/1.pdf'));


form.submit('http://localhost:45032/presentation/open', function(err, res) {
  console.log('submitted');
  // res – response object (http.IncomingMessage)  //
  //res.resume(); // for node-0.10.x
});


