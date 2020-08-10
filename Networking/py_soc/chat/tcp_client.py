
import socket


def client_program():

    host = socket.gethostname()
    port = 9000

    client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    client_socket.connect((host, port))  # connection is set up

    message = input(' -> ')

    while message.lower().strip() != 'bye':

        client_socket.send(message.encode())

        data = client_socket.recv(1024).decode()
        print("the data recieved is " + str(data))

        message = input(' -> ')
    client_socket.close()


#Driver
if __name__ == "__main__":
    client_program()
