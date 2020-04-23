#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>

int main() {

    //create socket
    int net_socket;
    FILE *res_file;
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

    //recv data from server
    char server_res[300];
    recv(net_socket, &server_res, sizeof(server_res), 0);
    //ount of objects recieved
    int len = recv(net_socket, &server_res, sizeof(server_res), 0);

    res_file =fopen("recvfile.txt", "w");

    fwrite(server_res, sizeof(server_res),len,res_file);

    
    fclose(res_file);

    close(net_socket);

    return 0;
}
