/*
 * can.c
 *
 *  Created on: Mar 27, 2023
 *      Author: eduardo.perez
 */

//Prototypes
void init_can(void);
void process_can_message(can_message_t message);


// Initialize the CAN module
void init_can(void) {
    // TODO: implement CAN initialization code
}

// Process a received CAN message and send it over BLE to the mobile phone
void process_can_message(can_message_t message) {
    // TODO: implement CAN message processing code
    char message_string[256];
    sprintf(message_string, "CAN message received: ID=%x, data=%s", message.id, message.data);
    send_ble_message(message_string);
}
