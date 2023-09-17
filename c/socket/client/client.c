#include <stdio.h>

#include <sys/types.h>
#include <sys/socket.h>

#include <arpa/inet.h>

#include <unistd.h>


#define SERVER_ADDRESS "10.0.2.15"
#define PORT 8000

int main(int argc, char **argv)
{
    int client_sock_fd;
    int return_status;
    struct sockaddr_in server_address;

    client_sock_fd = socket(AF_INET, SOCK_STREAM, 0);
    if(client_sock_fd < 0)
    {
        // sock error
    }

    server_address.sin_family = AF_INET;
    server_address.sin_port = htons(PORT);

    return_status = inet_pton(AF_INET, SERVER_ADDRESS, &server_address.sin_addr);
    if(return_status < 0)
    {
        // address error (or) address not supported
    }
    
    return_status = connect(client_sock_fd, (struct sockaddr*)&server_address, sizeof(server_address));
    if(return_status < 0)
    {
        // connection failed
    }

    close(client_sock_fd);

    return 0;
}
