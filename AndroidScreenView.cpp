#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	const char* frase1 = "Connected at IP";
	const char* frase2 = "Adb connected at "; 
	const char* adb_command = "adb tcpip ";
	const char* adb_command2 = "adb connect ";
	char host[11];
	char port[5];
	char * command1;
	char * command2;
	
	printf("Starting Server ADB\n");
	
	
	printf("Type your host {ip} >> \n");
	fflush(stdin);
	gets(host);
	
	printf("Type your port used {port}>> \n");
	fflush(stdin);
	gets(port);
	
	
	size_t tamanho1 = sizeof(adb_command);
	size_t num_elem1 = tamanho1/sizeof(adb_command[0]);
	
	size_t tamanho2 = sizeof(adb_command2);
	size_t num_elem2 = tamanho2/sizeof(adb_command2[0]);
	
	command1 = malloc(num_elem1 + port* sizeof(char));
	command2 = malloc(num_elem2 + url * sizeof(char));
	
	strcat(adb_command1, port);
	strcat(adb_command2, host);
	
	strcpy(command1, adb_command1);
	strcpy(command2, adb_command2);
	
	//system("start sndcpy.exe");
	system("adb devices");
	system("adb tcpip 5555");
	printf("Conectando ao IP %s:%s\n", host, port);
	system(command1);
	system(command2);
	//system("adb connect 192.168.0.110");
	//system("scrcpy --select-tcpip");
	return 0;
}