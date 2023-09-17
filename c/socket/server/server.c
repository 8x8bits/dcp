#include <stdio.h>

#include <sys/types.h>
#include <sys/socket.h>

#include <arpa/inet.h>

#include <unistd.h>

#define PORT 8000


int main(int argc, char **argv)
{
    int listening_socket_fd;
    int connection_socket_fd;
    int opt = 1;
    int return_status;

    struct sockaddr_in server_address;
    struct sockaddr_in client_address;

    socklen_t address_len;

    listening_socket_fd = socket(AF_INET, SOCK_STREAM, 0);
    if(listening_socket_fd < 0)
    {
        // socket error
    }

    if(setsockopt(listening_socket_fd, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT, &opt, sizeof(opt)))
    {
        // socket option error
    }

    server_address.sin_family = AF_INET;
    server_address.sin_addr.s_addr = INADDR_ANY;
    server_address.sin_port = htons(PORT);

    return_status = bind(listening_socket_fd, (struct sockaddr*)&server_address, sizeof(server_address));
    if(return_status < 0)
    {
        // bind error
    }

    return_status = listen(listening_socket_fd, 5);
    if(return_status < 0)
    {
        // listen error
    }

    connection_socket_fd = accept(listening_socket_fd, (struct sockaddr*)&client_address, (socklen_t*)&address_len);

    close(connection_socket_fd);
    shutdown(listening_socket_fd, SHUT_RDWR);

    return 0;
}
