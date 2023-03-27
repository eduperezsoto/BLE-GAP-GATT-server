/*
 * ble.h
 *
 *  Created on: Mar 27, 2023
 *      Author: eduardo.perez
 */

#ifndef BLE_H_
#define BLE_H_

void init_ble(void);
void send_ble_message(char* message);
void receive_ble_message(char* message);

#endif /* BLE_H_ */
