#include<stdio.h>
#include<stdlib.h>
// socket libraries
#include<sys/types.h>
#include<sys/socket.h>
//  structure of address info
#include<netinet/in.h>
#include<string.h>

int main() {

    //create socket
    int net_socket;
    net_socket = socket(AF_INET,SOCK_STREAM,0);

    //specify address to connect to.
    struct sockaddr_in server_address;
    server_address.sin_family = AF_INET;
    server_address.sin_port = htons(9002);
    server_address.sin_addr.s_addr = htonl(INADDR_ANY); // actual adress to connect in system ip - 0.0.0.0 -> INADDR_ANY

    int connect_status = connect(net_socket, (struct sockaddr *) &server_address, sizeof(server_address)); // used to connect to server  
    
    if(connect_status == -1)
    {
        printf("there were some errors while connecting\n");
    }
    //printf("connect %d", connect_status);

    //recv data from server
    char server_res[256], client_message[256];
    //int cnct = (connect(net_socket, (struct sockaddr *) &server_address, sizeof(server_address)));
    while(1){

    printf("client-> ");
    fgets(client_message, sizeof(client_message),stdin);
    send(net_socket, client_message, sizeof(client_message), 0);

    if(strcmp(client_message, "Bye\n")==0)
    {
        break;
    }

    recv(net_socket, &server_res, sizeof(server_res), 0);
    printf("server-> %s", server_res);
    if(strcmp(server_res, "Bye\n")==0)
    {
        break;
    }

    }
    close(net_socket);

    return 0;
}
