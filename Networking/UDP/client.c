#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>

int main(void)
{
    int cliSocket;
    struct sockaddr_in svr_addr;
    char svr_msg[256], cli_msg[256];
    int svr_addr_len = sizeof(svr_addr);

    // Clean buffers:
    memset(svr_msg, '\0', sizeof(svr_msg));
    memset(cli_msg, '\0', sizeof(cli_msg));

    // Create socket:
    cliSocket = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);

    if (cliSocket < 0)
    {
        printf("Error while creating socket\n");
        return -1;
    }
    printf("Socket created successfully\n");

    // Set port and IP:
    svr_addr.sin_family = AF_INET;
    svr_addr.sin_port = htons(2000);
    svr_addr.sin_addr.s_addr = INADDR_ANY;

    // Get input from the user:
    printf("Enter message: ");
    gets(cli_msg);

    // Send the message to server:
    if (sendto(cliSocket, cli_msg, strlen(cli_msg), 0,
               (struct sockaddr *)&svr_addr, svr_addr_len) < 0)
    {
        printf("Unable to send message\n");
        return -1;
    }

    // Receive the server's response:
    if (recvfrom(cliSocket, svr_msg, sizeof(svr_msg), 0,
                 (struct sockaddr *)&svr_addr, &svr_addr_len) < 0)
    {
        printf("Error while receiving server's msg\n");
        return -1;
    }

    printf("Server's response: %s\n", svr_msg);

    // Close the socket:
    close(cliSocket);

    return 0;
}