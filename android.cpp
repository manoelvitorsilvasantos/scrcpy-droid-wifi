#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "configs.h"

int main(int argc, char *argv[]) {
    
    const char * host;
    int port = 0;
    
	if (argc > 1) {
    	host = argv[1];
    	port = atoi(argv[2]);
    	printf("Starting server ADB\n");
    	printf("Device will connected by %s:%d", host, port);
    	system("adb devices");
    	system("scrcpy --serial=R9XN30CNS2D");
    	system(getCommand("scrcpy --serial=", host, port));
    	system(getPort("adb tcpip", port));
    	system(getHost("adb connect ", host));
    	system("scrcpy --select-tcpip");
    } else {
        printf("android <host> <port>\n");
    }
    return 0;
}

char * getCommand(const char * command, const char * host, int port){
	char * str = (char*)malloc(150 * sizeof(char));
	if(str == NULL){
		printf("Error ao alocar na memoria!\n");
		exit(1);
	}	
	sprintf(str, "%s %s:%d", command, host, port);
	return str;
}

char * getHost(const char * command, const char * host){
	char * str = (char*)malloc(150 * sizeof(char));
	if(str == NULL){
		printf("Erro ao alocar na memoria!\n");
		exit(1);
	}
	sprintf(str, "%s %s", command, host);
	return str;
}

char * getPort(const char * command, int port){
	char * str = (char*) malloc(150 * sizeof(char));
	if(str == NULL){
		printf("Erro ao alocar na memoria!\n");
		exit(1);
	}
	sprintf(str, "%s %d", command, port);
	return str;
}
