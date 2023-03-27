#include <stdio.h>
#include "can.h"
#include "ble.h"


int main() {
    // Initialize the BLE and CAN modules
    init_ble();
    init_can();

    // Wait for a connection from the mobile phone
    while (!ble_is_connected()) {
        // TODO: implement BLE connection code
    }

    // Exchange messages with the mobile phone over BLE
    char message[256];
    while (1) {
        // Wait for a message from the mobile phone
        receive_ble_message(message);

        // If the message is a CAN request, send a CAN message and wait for a response
        if (strncmp(message, "CAN_REQUEST", strlen("CAN_REQUEST")) == 0) {
            can_message_t can_message;
            can_message.id = 0x1234;
            can_message.data[0] = 0x01;
            can_message.data[1] = 0x02;
            can_message.data[2] = 0x03;
            can_message.data[3] = 0x04;
            can_send_message(can_message);

            // Wait for a response to the CAN message and send it back over BLE
            can_message_t received_message;
            can_receive_message(&received_message);
            process_can_message(received_message);
        }
    }

    return 0;
}
