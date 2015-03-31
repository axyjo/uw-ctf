# uw-ctf
CTF created for my friends.

## Level descriptions

###Level 0

ping test, make sure email stack is working

###Level 1

image analysis -- simple (just rotate the image to get the key)

###Level 2
document analysis - font in white

### Level ??

file inserted into docx zip, not present in document
file inserted as a pdf object stream
corrupt disk image containing file (recoverable with testdisk/photorec or something)
browser memory dump analysis (teach them to deal with unicode)
find the password (direct string cmp)
find the password (string to compare is generated based username or something, not stored in memory)
find the password (active gdb blocking using PTRACE_TRACEME)
SQL injection (easy, textbook version)
jpeg exif data (straight forward)
jpeg end of file extension
jpeg stego
weak RSA keys (RSA-100 perhaps?)
session fixation with cookies
HEARTBLEED POC (this one should be easy to solve, POC code exists everywhere on the internet)
Weak password hashing (no salt, hash is easily googlable)
Weak password hashing (same salt for every user)
PHP extract() ‘exploit’
X-Forwarded-For invalid check == authorization (thanks Tyson)
email headers? nobody ever looks at those. could be level 0/1 X-The-Password: 123456 (thanks Tyson)
FTP transaction PCAP, find the password
HTTP transaction PCAP, Basic auth (yay base64), find the password
WAV file, RIFF header intact, just not named as a .wav (should be easily detectable by `file`)
PCM encoded audio (one of the harder levels)
Java program at the end of a picture, making an http request (reach in to the cookie jar)
crappy-cryptolocker (CBC-XOR-like-thing with a standard IV for every file)

### Tyson’s silly ideas:

dummy program (.exe) that contains the password as a resource (decompress), but does hello world when actually launched


