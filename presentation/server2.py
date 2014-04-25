import SocketServer
import json
import pickle

class EchoRequestHandler(SocketServer.BaseRequestHandler ):
    def setup(self):
        print self.client_address, 'connected!'
        self.request.send('hi ' + str(self.client_address) + '\n')

    def recv_ppt():
	print 'Receiving file'
	total_data = []
	return 'a'
	

    def handle(self):
	print 'HANDLING COCKS'
	data = 'dummy'
	file_data=''
        while True:
            data = self.request.recv(1024)
	    try:
	    	request = json.loads(data)
		print 'Good json request %s', data
		if( request['action'] == 'open' and request['type'] == 'presentation'):
			filename = request['name']
			size = request['size']
			print 'A'
			f = open('test.pptx','w+')
			print 'B'
			print "Downloading file", (filename)
			End = "\r\n\r\n"
			total_data=[];file_data=''
    			while True:
            			file_data=self.request.recv(8192)
            			if End in file_data:
                			total_data.append(file_data[:file_data.find(End)])
                			break
            			total_data.append(file_data)
            			if len(total_data)>1:
                			#check if end_of_data was split
                			last_pair=total_data[-2]+total_data[-1]
                			if End in last_pair:
                    				total_data[-2]=last_pair[:last_pair.find(End)]
                    				total_data.pop()
                    				break
			
			pickle.dump(total_data, outfile)
			print 'C'
			f.close()
			print 'D'
            except Exception, e: 
            	print ' Error is', str(e)
		print 'Error JSON request'
		pass

    def finish(self):
        print self.client_address, 'disconnected!'
        self.request.send('bye ' + str(self.client_address) + '\n')

    #server host is a tuple ('host', port)

def get_open_port():
        import socket
        s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        s.bind(("",0))
        s.listen(1)
        port = s.getsockname()[1]
        s.close()
        return port

port = get_open_port()
print 'Port is', port
server = SocketServer.ThreadingTCPServer(('',port), EchoRequestHandler)
server.serve_forever()
