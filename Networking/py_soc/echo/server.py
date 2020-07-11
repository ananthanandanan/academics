import socket

HOST = '127.0.0.1'
PORT = 9000

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:  ## create a sokcet object 
    """Bind expects a tuple for IPv4 """
    s.bind((HOST, PORT))  ##  bind the port and host to create a socket for listening.
    s.listen() ## listen for a client side request
    conn, addr = s.accept()  ## if so accept the client_socket and addr
    with conn:
        print('Connected by', addr)
        while True:
            data = conn.recv(1024)
            if not data:
                break
            conn.sendall(data)