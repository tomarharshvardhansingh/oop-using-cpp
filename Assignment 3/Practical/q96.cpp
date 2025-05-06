#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Network {
private:
    vector<string> sentPackets;
    vector<string> receivedPackets;

public:
    void sendPacket(const string& packet) {
        if (packet.size() > 1024) {
            cout << "Error: Packet size exceeds maximum limit of 1024 bytes.\n";
            return;
        }
        sentPackets.push_back(packet);
        cout << "Packet sent: " << packet << endl;
    }

    void receivePacket() {
        if (sentPackets.empty()) {
            cout << "No packets to receive.\n";
            return;
        }

        string packet = sentPackets.back();
        sentPackets.pop_back();
        receivedPackets.push_back(packet);

        cout << "Packet received: " << packet << endl;
    }

    void displayReceivedPackets() {
        if (receivedPackets.empty()) {
            cout << "No received packets.\n";
            return;
        }

        cout << "Received packets:\n";
        for (const auto& packet : receivedPackets) {
            cout << packet << endl;
        }
    }

    void displaySentPackets() {
        if (sentPackets.empty()) {
            cout << "No sent packets.\n";
            return;
        }

        cout << "Sent packets:\n";
        for (const auto& packet : sentPackets) {
            cout << packet << endl;
        }
    }
};

int main() {
    Network network;

    network.sendPacket("Packet1: Hello, this is a test message.");
    network.sendPacket("Packet2: Another test message.");

    network.displaySentPackets();

    network.receivePacket();
    network.receivePacket();

    network.displayReceivedPackets();

    return 0;
}

