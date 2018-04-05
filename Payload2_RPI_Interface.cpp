//Payload 2 Command Interface Test
#include <errno.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <linux/i2c-dev.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <cstdint>
#include <iostream>
#include "command_lib.h"
#include "payload2.cpp"

int main()
{
	Payload2 P2;
	//std:: string commandString = "P2Comm::" + userInput; //string of EPS::+userInput 
	
	//need to convert commandString to unsigned int
	uint8_t command = static_cast<uint8_t>(P2Comm::QUERY_SUNSENSOR); 
    P2.cmd(command);  
	
}