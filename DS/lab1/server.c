#include<stdio.h>
#include<stdlib.h>
// socket libraries
#include<sys/types.h>
#include<sys/socket.h>
//  structure of address info
#include<netinet/in.h>
#include<string.h>

int main() {

    char server_message[256] = "you have recieved the message from server.";
    char client_message[256];

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
    while(1){
        recv(client_socket,&client_message,sizeof(client_message),0);
        printf("client-> %s", client_message);
        if(strcmp(client_message,"Bye\n")==0)
        {
            break;
        }
        printf("server-> ");

        fgets(server_message, sizeof(server_message),stdin);
        send(client_socket, server_message, sizeof(server_message), 0);
        
        if(strcmp(server_message,"Bye\n")==0)
        {
            break;
        }
        
        

    }
    //send(client_socket, server_message, sizeof(server_message), 0)
    close(server_socket);
    return 0;
}

