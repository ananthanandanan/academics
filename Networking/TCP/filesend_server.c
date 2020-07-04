#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<netdb.h>   

int main() {

    // create socket 
    int server_socket;

    server_socket = socket(AF_INET, SOCK_STREAM, 0);

    // structure 

    struct sockaddr_in socket_address;
    socket_address.sin_family = AF_INET;
    socket_address.sin_port = htons(9002);
    socket_address.sin_addr.s_addr = htonl(INADDR_ANY);

    //bind the port and IP 
    bind(server_socket, (struct sockaddr *) &socket_address, sizeof(socket_address));

    listen(server_socket, 5);
    int client_socket;

   client_socket =  accept(server_socket, NULL, NULL );

    //creata a file
    FILE *file;

    char words[200], hello[20];

    printf("say: Hello, to write a file and send to client\n");
    scanf("%s",hello);
    if(strcmp(hello, "Hello")==0)
    {
        file = fopen("hello.txt", "r");
        fgets(words, 200, file);
        send(client_socket, &words,sizeof(words),0);
        if((send(client_socket, &words,sizeof(words),0)) == -1)
        {
            printf("file not send !!!");
        }
        
        printf("text send succesfully");

    }

    fclose(file);



    
    close(server_socket);

    return 0;
}
