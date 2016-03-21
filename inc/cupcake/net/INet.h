
#ifndef CUPCAKE_INET_H
#define CUPCAKE_INET_H

#include "cupcake/net/SocketError.h"
#include "cupcake/text/String.h"

#include <tuple>

namespace Cupcake {

namespace INet {

// Generic enum for "IPv4 or IPv6" distinctions
enum class Protocol
{
    Unknown,
    Ipv4,
    Ipv6
};

std::tuple<String, SocketError> getHostName();

};

}

#endif // CUPCAKE_INET_H
