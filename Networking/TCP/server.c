#include<stdio.h>
#include<stdlib.h>
// socket libraries
#include<sys/types.h>
#include<sys/socket.h>
//  structure of address info
#include<netinet/in.h>


int main() {

    char server_message[256] = "you have recieved the message from server.";

    //create server socket
    int server_socket;
    server_socket = socket(AF_INET,SOCK_STREAM,0);

    //create the address
    struct sockaddr_in server_address;
    server_address.sin_family = AF_INET;
    server_address.sin_port = htons(9002);
    server_address.sin_addr.s_addr = htonl(INADDR_ANY);

    //bind the socket to our specific IP and port
    bind(server_socket,(struct sockaddr *) &server_address,sizeof(server_address));

    listen(server_socket, 5);

    int client_socket;
    client_socket = accept(server_socket, NULL, NULL);
    //send message
    send(client_socket, server_message, sizeof(server_message), 0);

    close(server_socket);
    return 0;
}

