#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
#include <arpa/inet.h>
#include <sys/socket.h>

const std::string host  = "81.19.81.199"; // IP of overpass.osm.rambler.ru
const int port          = 80;
const std::string query = "GET /cgi/interpreter?data=node%5Bname%3DGielgen%5D%3Bout%3B HTTP/1.1\r\n"
        "Host: overpass.osm.rambler.ru\r\n"
        "User-Agent: SteveC\r\n"
        "Accept: */*\r\n"
        "Connection: close\r\n"
        "\r\n";

int main(int argc, char* argv[]) {
    int sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock == -1) {
        perror("error opening socket"); return -1;
    }

    struct sockaddr_in sin;
    sin.sin_port = htons(port);
    sin.sin_addr.s_addr = inet_addr(host.c_str());
    sin.sin_family = AF_INET;

    if (connect(sock, (struct sockaddr *)&sin, sizeof(sin)) == -1) {
        perror("error connecting to host"); return -1;
    }

    const int query_len = query.length() + 1; // trailing '\0'
    if (send(sock, query.c_str(), query_len, 0) != query_len) {
        perror("error sending query"); return -1;
    }

    const int buf_size = 1024 * 1024;
    while (true) {
        std::vector<char> buf(buf_size, '\0');
        const int recv_len = recv(sock, &buf[0], buf_size - 1, 0);

        if (recv_len == -1) {
            perror("error receiving response"); return -1;
        } else if (recv_len == 0) {
            std::cout << std::endl; break;
        } else {
            std::cout << &buf[0];
        }
    }

    return 0;
}



