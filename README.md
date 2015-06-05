This program is based on Peter Membrey's uppercaser codes:
https://github.com/pmembrey/uppercaser

This program will rotate the letter right
to 13 of the message that the user entered

how it works? c = (c-65+13)%26+65
e.g: the ascii code of big letter A is 65,
     first minus 65, then add 13 to shift,
     next modulus 26 in case it beyond letter Z,
     last add back 65 to make it to coordinate ascii code.
     for small 'a' is just similar to minus 97

