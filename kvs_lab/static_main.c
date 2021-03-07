#include "kvs.h"

int main()
{
	kvs_t* kvs = open();

	if(!kvs) {
		printf("Failed to open kvs\n");
		return -1;
	}

	// KVS created.  
	char key[100]; 
	char* value = (char*) malloc (sizeof(char)* 300);
	char* rvalue;

	strcpy(key, "Eunji");
	strcpy(value, "Seoul");

	if(put(kvs, key, value) < 0){
		printf("Failed to put data\n");
		exit(-1);
	}


	if(!(rvalue = get(kvs, key))){
		printf("Failed to get data\n");
		exit(-1);
	}

	printf("get: %s, %s\n", key, rvalue);
	
	return 0;
}
