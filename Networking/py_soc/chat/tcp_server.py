
import socket

def server_program():
    
    #get the hostname '127.0.0.1'
    host = socket.gethostname()
    port = 9000
    
    server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    server_socket.bind((host, port))
    
    #assign how may clients can listen 
    
    server_socket.listen(2)
    conc, addr = server_socket.accept()
    print("Connection from: " + str(addr))
    
    while True:
        data = conc.recv(1024).decode()
        if not data:
            #if no data then break out 
            break
        print("from connected user: " + str(data))
        data = input(' -> ')
        conc.send(data.encode())
    conc.close()
    
    
    #Driver 
    if __name__ == "__main__":
        server_program()