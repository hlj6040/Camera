#include "tcpServer.h"

#include <stdio.h>
#include "lwip/socket.h"

void tcpServerStart()
{
    printf("tcp server start.\n");
    char addr_str[] = "10.233.133.175";
    
    struct sockaddr_in dest_addr;
    dest_addr.
    int sockFd = socket(AF_INET, SOCK_STREAM, IPPROTO_IP);

    if(sockFd < 0)
    {
        printf("Unable create socket: eerrno %d.\n", errno);
        return;
    }

    int err = connect(sockFd, (struct sockaddr*) &dest_arr, sizeof(dest_arr));
    printf("tcp server end.\n");
}