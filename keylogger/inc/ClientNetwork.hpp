#ifndef _CLIENTNETWORK_HPP_
# define _CLIENTNETWORK_HPP_

# include <iostream>
# include "APacket.hpp"
# include "ASocket.hpp"

class ClientNetwork
{
public:
	ClientNetwork();
	~ClientNetwork();

	bool connect(int port, std::string host);
	bool isConnected();

	ClientNetwork &operator<<(const APacket &packet);
	ClientNetwork &operator>>(APacket &packet);

private:
    ASocket *_socket;
    bool    _connect;
};

#endif