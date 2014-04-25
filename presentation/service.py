import select
import sys
import pybonjour
import os

name = "MobileHub"
regtype = "_ubiqhub._tcp"
port = int(sys.argv[1])

def register_callback(sdRef, flags, errorCode, name, regtype, domain):
    if errorCode == pybonjour.kDNSServiceErr_NoError:
        print 'Registered service:'
        print '  name    =', name
        print '  regtype =', regtype
        print '  domain  =', domain

os.popen("sudo launchctl unload -w /System/Library/LaunchDaemons/com.apple.mDNSResponder.plist", 'w').write("potterww")
os.popen("sudo launchctl load -w /System/Library/LaunchDaemons/com.apple.mDNSResponder.plist", 'w').write("potterww")

sdRef = pybonjour.DNSServiceRegister(name = name,
                                     regtype = regtype,
                                     port = port,
                                     callBack = register_callback)

try:
    try:
        while True:
            ready = select.select([sdRef], [], [])
            if sdRef in ready[0]:
                pybonjour.DNSServiceProcessResult(sdRef)
    except KeyboardInterrupt:
        pass
finally:
    sdRef.close()

