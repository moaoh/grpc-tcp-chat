#pragma once

#include <iostream>
#include <fstream>
#include <cstring>
#include <unistd.h>

#include <arpa/inet.h>
#include <sys/socket.h>
#include <netinet/in.h>

int file_server(int port);