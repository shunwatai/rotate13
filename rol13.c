// Author: Tai Shun Wa
// Date: 05/06/2015
//
// This program is based on Peter Membrey's uppercaser codes:
// https://github.com/pmembrey/uppercaser
//
// This program will rotate the letter right
// to 13 of the message that the user entered
//
// how it works? c = (c-65+13)%26+65
// e.g: the ascii code of big letter A is 65, 
//      first minus 65, then add 13 to shift,
//      next modulus 26 in case it beyond letter Z,
//      last add back 65 to make it to coordinate ascii code.
//      for small 'a' is just similar to minus 97

/*
 * Note: This approach works because of the way
 * ASCII lays out the character set - this will
 * work with most text, but be warned about UTF-8
 * or non ASCII characters..
 */


#include <stdio.h>

char c;

int main() {
    do {
        // Read a character from stdin
        c = fgetc(stdin);
        // End of file? Nothing left to read...
        if (feof(stdin)) {
            // Exit loop
            break;
        }

        // Is the character lower case?
        if ((c >= 'a') && (c <= 'z')) {
            // Yes, let's rotate it right 13
            c = (c-97+13)%26+97;
        }

        // Is the character upper case?
        if ((c >= 'A') && (c <= 'Z')) {
            // Yes, let's rotate it right 13
            c = (c-65+13)%26+65;
        }

        // Print the character to stdout (default)
        printf("%c", c);
    } while (1);
    // Exit cleanly
    return 0;
}

