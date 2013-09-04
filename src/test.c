/*
 * test.c
 *
 *  Created on: 2013-9-3
 *      Author: liyong
 */

#include <stdio.h>
#include <stdlib.h>
#include "sds.h"

int main(int argc,char **argv){
	printf("hello world");
	sds h = sdsnew("heelo");
	printf("%s\n",h);
	return 0;
}


