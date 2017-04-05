#include "Communicator.hpp"
#include <iostream>

Communicator::Communicator() {
  WSAStartup(MAKEWORD(2,2), &WSAData);
  sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
  sin.sin_addr.s_addr = INADDR_ANY;
  sin.sin_family = AF_INET;
  sin.sin_port = htons(30001); //listening port
  bind(sock, (SOCKADDR *)&sin, sizeof(sin));
  listen(sock, 0);
  sinsize = sizeof(csin);
  if((csock = accept(sock, (SOCKADDR *)&csin, &sinsize)) != INVALID_SOCKET) {
    std::cout << "Connected to client" << '\n';
  }
}

Communicator::~Communicator(){
  closesocket(sock);
  WSACleanup();
}

int Communicator::sendData(char *data) {
  return send(csock, data, sizeof(data), 0);
}
