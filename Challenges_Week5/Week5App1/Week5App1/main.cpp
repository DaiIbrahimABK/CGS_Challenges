#include <enet/enet.h>
#include<iostream>
ENetAddress address;
ENetHost* server = nullptr;
ENetHost* client = nullptr;
bool CreateServer()
{
    address.host = ENET_HOST_ANY;
    address.port = 1234;
    server = enet_host_create(&address, 32, 2, 0, 0);
    return server != nullptr;
}
bool CreateClinet()
{
    client = enet_host_create(NULL /* create a client host */,
        1 /* only allow 1 outgoing connection */,
        2 /* allow up 2 channels to be used, 0 and 1 */,
        0 /* assume any amount of incoming bandwidth */,
        0 /* assume any amount of outgoing bandwidth */);

    return client != nullptr;
}
int main(int argc, char** argv)
{
    if (enet_initialize() != 0)
    {
        fprintf(stderr, "An error occurred while initializing ENet.\n");
        std::cout << "An error occurred while initializing ENet." << std::endl;
        return EXIT_FAILURE;
    }
    atexit(enet_deinitialize);
  

    std::cout << "1) Create a server " << std::endl;
    std::cout << "2) Create a client " << std::endl;
    int UserInput =1;
    std::cin >> UserInput;
    if (UserInput == 1)
    {
        if (!CreateServer())
        {
            fprintf(stderr, "An error occurred while initializing ENet host.\n");
            exit( EXIT_FAILURE);
        }
    }
    else if (UserInput == 2)
    {
        if (!CreateClinet())
        {
            fprintf(stderr,
                "An error occurred while trying to create an ENet client host.\n");
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        std::cout << "Invalid Input" << std::endl;
    }


   
   
    if (server != nullptr)
    {
        enet_host_destroy(server);

    }

    if (client != nullptr)
    {
        enet_host_destroy(client);

    }

    return EXIT_SUCCESS;
}