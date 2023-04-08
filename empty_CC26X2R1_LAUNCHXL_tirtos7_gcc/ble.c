//#include <ti/drivers/PIN.h>
//#include <ti/drivers/UART.h>
#include <ti/drivers/GPIO.h>
#include <ti/drivers/SPI.h>
#include <ti/drivers/Watchdog.h>

/*
#include "Board.h"
#include "ble_user_config.h"
#include "ti_ble_config.h"
#include "icall_ble_api.h"
#include "util.h"
*/

//Prototypes
void init_ble(void);
void send_ble_message(char* message);
void receive_ble_message(char* message);


void SimpleBLECentral_init() {
    uint8 scanRes = DEFAULT_MAX_SCAN_RES;
    GAPCentralRole_SetPAramenter( GAPCENTRALROLE_MAC_SCAN_RES, sizeof(uint8), &scanRes);
}

// Initialize the BLE module
void BLE_Init(void)
{
  // Set the maximum data length
  HCI_EXT_SetMaxDataLenCmd(251);

  // Set the transmit power level
  HCI_EXT_SetTxPowerCmd(7);

  // Initialize the default parameters for the BLE stack
  GAP_ParamsInit();

  // Define the advertising parameters
  gapAdvertisingParams_t advParams;
  advParams.eventType = GAP_ADTYPE_ADV_IND;
  advParams.intervalMin = 160;
  advParams.intervalMax = 160;
  advParams.channelMap = GAP_ADVCHAN_ALL;

  // Set the advertising data
  uint8_t advData[] = {0x02, 0x01, 0x06, 0x0A, 0x09, 'H', 'e', 'l', 'l', 'o', '!'};
  GAP_SetParamValue(TGAP_ADVERT_DATA, sizeof(advData), advData);

  // Set the scan response data
  uint8_t scanData[] = {0x03, 0x03, 0xFF, 0x01, 0x02};
  GAP_SetParamValue(TGAP_SCAN_RSP_DATA, sizeof(scanData), scanData);

  // Start advertising
  GAPRole_StartAdvertising(&advParams);
}

// Send a message over BLE to the mobile phone
void send_ble_message(char* message) {
    // TODO: implement BLE send message code
}

// Receive a message over BLE from the mobile phone
void receive_ble_message(char* message) {
    // TODO: implement BLE receive message code
}
