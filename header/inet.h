#ifndef _INET_H_
#define _INET_H_

#include <netinet/in.h>
#include <sys/socket.h>

/* 
 * 基本所有的东西都是模仿POSIX的实现
 */

#include <stdint.h>
typedef uint16_t in_port_t;
typedef uint32_t in_addr_t;
typedef unsigned short sa_family_t;


/* 
 * 32位IPv4地址，之所以要加个结构体是因为早期的实现（现在的WinSock中似乎也是）中
 * struct in_addr里包含了一个union
 * 在当初使用分类编址时这样便于访问地址中的适当字节
 * 但是随着无类别域间路由选择（CIDR）的出现而渐渐不再使用
 */
struct in_addr
{
	in_addr_t s_addr;
};

struct sockaddr
{
	sa_family_t sa_family;
	uint8_t sa_data[14];
};

/*
 * IPv4套接字地址
 */
struct sockaddr_in
{
	// uint8_t sin_len;			// 本结构体的长度, 在本机的环境中没有这一项，同时地址族为16位
	sa_family_t sin_family;		// 地址族，IPv4为AF_INET
	in_port_t sin_port;			// 16位端口号，网络字节序
	struct in_addr sin_addr;	// 32位IPv4地址，网络字节序
	char zero[8];				// 好像是凑数的，使整个结构体长度为16字节
};






#endif