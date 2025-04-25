#pragma once

class XoviMessageBroker;

namespace messagebroker {
    void addBroadcastListener(::XoviMessageBroker *ref);
    void removeBroadcastListener(::XoviMessageBroker *ref);
};

// Xovi export
extern "C" char *broadcast(const char *signal, const char *value);
