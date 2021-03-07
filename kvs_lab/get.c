#include "kvs.h"

char* get(kvs_t* kvs, const char* key)
{
	/* do program here */

	char* value = (char*)malloc(sizeof(char)*10);

	if(!value){
		printf("Failed to malloc\n");
		return NULL;
	}

	strcpy(value, "deadbeaf");
	return value;

}
