/*
 * can.h
 *
 *  Created on: Mar 27, 2023
 *      Author: eduardo.perez
 */

#ifndef CAN_H_
#define CAN_H_

void init_can(void);
void process_can_message(can_message_t message);

#endif /* CAN_H_ */
