//============================================================================
// Name        : time.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;

int main()
{
    char buffer [20];

    time_t t = time(NULL);

    strftime (buffer,20,"%F:%T",gmtime ( &t ));

    string timestamp = "today is ";
    timestamp += ':';
    timestamp += string(buffer);

    printf("%s", timestamp.c_str());

    return 0;
}
