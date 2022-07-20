#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>

int digit_sum(int x)
{
    int sum = 0;
    while (x != 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main()
{
    int svrSocket;
    struct sockaddr_in svr_addr, cli_addr;
    char svr_msg[256], cli_msg[256];
    int cli_addr_len = sizeof(cli_addr);

    // Clean buffers:
    memset(svr_msg, '\0', sizeof(svr_msg));
    memset(cli_msg, '\0', sizeof(cli_msg));

    // Create UDP socket:
    svrSocket = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);

    if (svrSocket < 0)
    {
        printf("Error while creating socket\n");
        return -1;
    }
    printf("Socket created successfully\n");

    // Set port and IP:
    svr_addr.sin_family = AF_INET;
    svr_addr.sin_port = htons(2000);
    svr_addr.sin_addr.s_addr = INADDR_ANY;

    // Bind to the set port and IP:
    if (bind(svrSocket, (struct sockaddr *)&svr_addr, sizeof(svr_addr)) < 0)
    {
        printf("Couldn't bind to the port\n");
        return -1;
    }
    printf("Done with binding\n");

    printf("Listening for incoming messages...\n\n");

    // Receive cli_addr's message:
    recvfrom(svrSocket, cli_msg, sizeof(cli_msg), 0, (struct sockaddr *)&cli_addr, &cli_addr_len);


    printf("Msg from client: %s\n", cli_msg);

    // Respond to cli_addr:
    int s = digit_sum(atoi(cli_msg));
    sprintf(svr_msg, "%d", s);
    sendto(svrSocket, svr_msg, strlen(svr_msg), 0, (struct sockaddr *)&cli_addr, cli_addr_len);

    // Close the socket:
    close(svrSocket);

    return 0;
}