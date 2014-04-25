
//socket.io - the install that connects to the extraneous devices

var socket = io.connect('http://localhost:10000/');

socket.on('news', function (data) {
    console.log(data);
    socket.emit('my other event', { my: 'data' });
});

//flow control for commands of the viewer

socket.on('move', function (action){
  switch(action.type){

    case 'start':           
      var t = whoBdat(action.array);
      document.getElementById('sidebar').innerHTML = t;
      break;

    case 'open':
      $(document).ready(function() {
        $('#sidebar').animate({width:'toggle'}, function() {
          $('#canvas').fadeOut(500, function() {
            $('#canvas').css('width','100%');
            $('#the-canvas').css('margin-top','-1%');
            $('body').css('background','black');
            open(action.location);
            $('#canvas').delay(1000).fadeIn(500);
            //});
          });
        });
      });

      
      
      break;

    case 'next':
      goNext();
      break;

    case 'previous':
      goPrevious();
      break;

    default:
      break;
  };
});

//
// NOTE:
// Modifying the URL below to another server will likely *NOT* work. Because of browser
// security restrictions, we have to use a file server with special headers
// (CORS) - most servers don't support cross-origin browser requests.
//

var url = 'files/communitech_logo.pdf';

//var jq = $.noConflict();

//
// Disable workers to avoid yet another cross-origin issue (workers need the URL of
// the script to be loaded, and currently do not allow cross-origin scripts)
//
PDFJS.disableWorker = true;

var pdfDoc = null,
    pageNum = 1,
    scale = 1,
    canvas = document.getElementById('the-canvas'),
    ctx = canvas.getContext('2d');

//
// Get page info from document, resize canvas accordingly, and render page
//
function renderPage(num) {
  // Using promise to fetch the page
  pdfDoc.getPage(num).then(function(page) {
    var viewport = page.getViewport(scale);
    
    canvas.height = viewport.height;
    canvas.width = viewport.width;

    // Render PDF page into canvas context
    var renderContext = {
      canvasContext: ctx,
      viewport: viewport
    };
    page.render(renderContext);
  });

  // Update page counters
  document.getElementById('page_num').textContent = pageNum;
  document.getElementById('page_count').textContent = pdfDoc.numPages;
}

function open(location){ 
  url = location;
  PDFJS.getDocument(url).then(function getPdfHelloWorld(_pdfDoc) {
    pdfDoc = _pdfDoc;
    pageNum = 1;
    renderPage(pageNum);
  }); 
}

//
// Go to previous page
//
function goPrevious() {
  if (pageNum <= 1)
    return;
  pageNum--;
  renderPage(pageNum);
}

//
// Go to next page
//
function goNext() {
  if (pageNum >= pdfDoc.numPages)
    return;
  pageNum++;
  renderPage(pageNum);
}

function whoBdat(data){
  var html = '<table id="sideItem">';
  
  for (var i = 0; i < data.length; i++){
    html += '<tr>'
    html += '<td>';
    html += data[i];
    html += '</td>';
    html += '</tr>'
  }
  html += '</table>';
  return html;
}
//
// Asynchronously download PDF as an ArrayBuffer
//
PDFJS.getDocument(url).then(function getPdfHelloWorld(_pdfDoc) {
  pdfDoc = _pdfDoc;
  renderPage(pageNum);
});