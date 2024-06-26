#ifndef RETRIEVE_H
#define RETRIEVE_H

#include "login.h"
#include "helperfunctions.h"

void retrieve(int sockfd, char *tag, inputs_t *inputs);

#endif

/*
    some useful links:
    https://www.atmail.com/blog/imap-commands/
    https://datatracker.ietf.org/doc/html/rfc3501/
    https://datatracker.ietf.org/doc/rfc5092/
*/