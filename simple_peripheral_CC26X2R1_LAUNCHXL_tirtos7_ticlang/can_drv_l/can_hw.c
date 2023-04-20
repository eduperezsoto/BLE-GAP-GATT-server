/* --COPYRIGHT--,TI
 *Source and Object Code Software License Agreement
 *
 *
 **IMPORTANT - PLEASE CAREFULLY READ THE FOLLOWING LICENSE AGREEMENT, WHICH IS LEGALLY BINDING.  AFTER YOU READ IT, YOU WILL BE ASKED WHETHER YOU ACCEPT AND AGREE TO ITS TERMS.  DO NOT CLICK  "I ACCEPT" UNLESS: (1) YOU WILL USE THE LICENSED MATERIALS FOR YOUR OWN BENEFIT AND PERSONALLY ACCEPT, AGREE TO AND INTEND TO BE BOUND BY THESE TERMS; OR (2) YOU ARE AUTHORIZED TO, AND INTEND TO BE BOUND BY, THESE TERMS ON BEHALF OF YOUR COMPANY.
 *
 *
 **Important - Read carefully: This Source and Object Code Software License Agreement ("Agreement") is a legal agreement between you and Texas Instruments Incorporated ("TI").  In this Agreement "you" means you personally if you will exercise the rights granted for your own benefit, but it means your company (or you on behalf of your company) if you will exercise the rights granted for your company's benefit.  The "Licensed Materials" subject to this Agreement include the software programs and any associated electronic documentation (in each case, in whole or in part) that accompany this Agreement, are set forth in the applicable software manifest and you access "on-line", as well as any updates or upgrades to such software programs or documentation, if any, provided to you at TI's sole discretion.  The Licensed Materials are specifically designed and licensed for use solely and exclusively with MSP microcontroller devices manufactured by or for TI ("TI Devices").  By installing, copying or otherwise using the Licensed Materials you agree to abide by the provisions set forth herein.  This Agreement is displayed for you to read prior to using the Licensed Materials.  If you choose not to accept or agree with these provisions, do not download or install the Licensed Materials.
 *
 **Note Regarding Possible Access to Other Licensed Materials:  The Licensed Materials may be bundled with software and associated electronic documentation, if any, licensed under terms other than the terms of this Agreement (in whole or in part, "Other Licensed Materials"), including, for example Open Source Software and/or TI-owned or third party Proprietary Software licensed under such other terms.  "Open Source Software" means any software licensed under terms requiring that (A) other software ("Proprietary Software") incorporated, combined or distributed with such software or developed using such software: (i) be disclosed or distributed in source code form; or (ii) otherwise be licensed on terms inconsistent with the terms of this Agreement, including but not limited to permitting use of the Proprietary Software on or with devices other than TI Devices, or (B) require the owner of Proprietary Software to license any of its patents to users of the Open Source Software and/or Proprietary Software incorporated, combined or distributed with such Open Source Software or developed using such Open Source Software.
 *
 **If by accepting this Agreement, you gain access to Other Licensed Materials, they will be listed in the applicable software manifest.  Your use of the Other Licensed Materials is subject to the applicable other licensing terms acknowledgements and disclaimers as specified in the applicable software manifest and/or identified or included with the Other Licensed Materials in the software bundle.  For clarification, this Agreement does not limit your rights under, or grant you rights that supersede, the terms of any applicable Other Licensed Materials license agreement.  If any of the Other Licensed Materials is Open Source Software that has been provided to you in object code only under terms that obligate TI to provide to you or show you where you can access the source code versions of such Open Source Software, TI will provide to you, or show you where you can access, such source code if you contact TI at Texas Instruments Incorporated, 12500 TI Boulevard, Mail Station 8638, Dallas, Texas 75243, Attention: Contracts Manager, Embedded Processing.  In the event you choose not to accept or agree with the terms in any applicable Other Licensed Materials license agreement, you must terminate this Agreement.
 *
 **1.    License Grant and Use Restrictions.
 *
 **a.    Licensed Materials License Grant.  Subject to the terms of this Agreement, TI hereby grants to you a limited, non-transferable, non-exclusive, non-assignable, non-sublicensable, fully paid-up and royalty-free license to:
 *
 *            i.    Limited Source Code License:  make copies, prepare derivative works, display internally and use internally the Licensed Materials provided to you in source code for the sole purpose of developing object and executable versions of such Licensed Materials, or any derivative thereof, that execute solely and exclusively on TI Devices, for end use in Licensee Products, and maintaining and supporting such Licensed Materials, or any derivative thereof, and Licensee Products.  For purposes of this Agreement, "Licensee Product" means a product that consists of both hardware, including one or more TI Devices, and software components, including only executable versions of the Licensed Materials that execute solely and exclusively on such TI Devices.
 *
 *            ii.    Object Code Evaluation, Testing and Use License:  make copies, display internally, distribute internally and use internally the Licensed Materials in object code for the sole purposes of evaluating and testing the Licensed Materials and designing and developing Licensee Products, and maintaining and supporting the Licensee Products;
 *
 *            iii.    Demonstration License:  demonstrate to third parties the Licensed Materials executing solely and exclusively on TI Devices as they are used in Licensee Products, provided that such Licensed Materials are demonstrated in object or executable versions only and
 *
 *        iv.    Production and Distribution License:  make, use, import, export and otherwise distribute the Licensed Materials as part of a Licensee Product, provided that such Licensee Products include only embedded executable copies of such Licensed Materials that execute solely and exclusively on TI Devices.
 *
 *    b.    Contractors.  The licenses granted to you hereunder shall include your on-site and off-site contractors (either an individual or entity), while such contractors are performing work for or providing services to you, provided that such contractors have executed work-for-hire agreements with you containing applicable terms and conditions consistent with the terms and conditions set forth in this Agreement and provided further that you shall be liable to TI for any breach by your contractors of this Agreement to the same extent as you would be if you had breached the Agreement yourself.
 *
 *    c.    No Other License.  Nothing in this Agreement shall be construed as a license to any intellectual property rights of TI other than those rights embodied in the Licensed Materials provided to you by TI.  EXCEPT AS PROVIDED HEREIN, NO OTHER LICENSE, EXPRESS OR IMPLIED, BY ESTOPPEL OR OTHERWISE, TO ANY OTHER TI INTELLECTUAL PROPERTY RIGHTS IS GRANTED HEREIN.
 *
 *    d.    Covenant not to Sue.  During the term of this Agreement, you agree not to assert a claim against TI or its licensees that the Licensed Materials infringe your intellectual property rights.
 *
 *    e.    Restrictions.  You shall maintain the source code versions of the Licensed Materials under password control protection and shall not disclose such source code versions of the Licensed Materials, to any person other than your employees and contractors whose job performance requires access.  You shall not use the Licensed Materials with a processing device other than a TI Device, and you agree that any such unauthorized use of the Licensed Materials is a material breach of this Agreement.  You shall not use the Licensed Materials for the purpose of analyzing or proving infringement of any of your patents by either TI or TI's customers.  Except as expressly provided in this Agreement, you shall not copy, publish, disclose, display, provide, transfer or make available the Licensed Materials to any third party and you shall not sublicense, transfer, or assign the Licensed Materials or your rights under this Agreement to any third party.  You shall not mortgage, pledge or encumber the Licensed Materials in any way.  You may use the Licensed Materials with Open Source Software or with software developed using Open Source Software tools provided you do not incorporate, combine or distribute the Licensed Materials in a manner that subjects the Licensed Materials to any license obligations or any other intellectual property related terms of any license governing such Open Source Software.
 *
 *    f.    Termination.  This Agreement is effective on the date the Licensed Materials are delivered to you together with this Agreement and will remain in full force and effect until terminated.  You may terminate this Agreement at any time by written notice to TI.  Without prejudice to any other rights, if you fail to comply with the terms of this Agreement or you are acquired, TI may terminate your right to use the Licensed Materials upon written notice to you.  Upon termination of this Agreement, you will destroy any and all copies of the Licensed Materials in your possession, custody or control and provide to TI a written statement signed by your authorized representative certifying such destruction. Except for Sections 1(a), 1(b) and 1(d), all provisions of this Agreement shall survive termination of this Agreement.
 *
 **2.    Licensed Materials Ownership.  The Licensed Materials are licensed, not sold to you, and can only be used in accordance with the terms of this Agreement.  Subject to the licenses granted to you pursuant to this Agreement, TI and its licensors own and shall continue to own all right, title and interest in and to the Licensed Materials, including all copies thereof.  You agree that all fixes, modifications and improvements to the Licensed Materials conceived of or made by TI that are based, either in whole or in part, on your feedback, suggestions or recommendations are the exclusive property of TI and all right, title and interest in and to such fixes, modifications or improvements to the Licensed Materials will vest solely in TI.  Moreover, you acknowledge and agree that when your independently developed software or hardware components are combined, in whole or in part, with the Licensed Materials, your right to use the combined work that includes the Licensed Materials remains subject to the terms and conditions of this Agreement.
 *
 **3.    Intellectual Property Rights.
 *
 *    a.    The Licensed Materials contain copyrighted material, trade secrets and other proprietary information of TI and its licensors and are protected by copyright laws, international copyright treaties, and trade secret laws, as well as other intellectual property laws.  To protect TI's and its licensors' rights in the Licensed Materials, you agree, except as specifically permitted by statute by a provision that cannot be waived by contract, not to "unlock", decompile, reverse engineer, disassemble or otherwise translate to a human-perceivable form any portions of the Licensed Materials provided to you in object code format only, nor permit any person or entity to do so.  You shall not remove, alter, cover, or obscure any confidentiality, trade secret, trade mark, patent, copyright or other proprietary notice or other identifying marks or designs from any component of the Licensed Materials and you shall reproduce and include in all copies of the Licensed Materials the copyright notice(s) and proprietary legend(s) of TI and its licensors as they appear in the Licensed Materials.  TI reserves all rights not specifically granted under this Agreement.
 *
 *    b.    Certain Licensed Materials may be based on industry recognized standards or software programs published by industry recognized standards bodies and certain third parties may claim to own patents, copyrights, and other intellectual property rights that cover implementation of those standards.  You acknowledge and agree that this Agreement does not convey a license to any such third party patents, copyrights, and other intellectual property rights and that you are solely responsible for any patent, copyright, or other intellectual property right claim that relates to your use or distribution of the Licensed Materials or your use or distribution of your products that include or incorporate the Licensed Materials.  Moreover, you acknowledge that you are responsible for any fees or royalties that may be payable to any third party based on such third party's interests in the Licensed Materials or any intellectual property rights that cover implementation of any industry recognized standard, any software program published by any industry recognized standards bodies or any other proprietary technology.
 *
 **4.    Confidential Information.  You acknowledge and agree that the Licensed Materials contain trade secrets and other confidential information of TI and its licensors.  You agree to use the Licensed Materials solely within the scope of the licenses set forth herein, to maintain the Licensed Materials in strict confidence, to use at least the same procedures and degree of care that you use to prevent disclosure of your own confidential information of like importance but in no instance less than reasonable care, and to prevent disclosure of the Licensed Materials to any third party, except as may be necessary and required in connection with your rights and obligations hereunder; provided, however, that you may not provide the Licensed Materials to any business organization or group within your company or to customers or contractors that design or manufacture semiconductors unless TI gives written consent.  You agree to obtain executed confidentiality agreements with your employees and contractors having access to the Licensed Materials and to diligently take steps to enforce such agreements in this respect.  TI may disclose your contact information to TI's licensors.
 *
 **5.    Warranties and Limitations.  THE LICENSED MATERIALS ARE PROVIDED "AS IS".  FURTHERMORE, YOU ACKNOWLEDGE AND AGREE THAT THE LICENSED MATERIALS HAVE NOT BEEN TESTED OR CERTIFIED BY ANY GOVERNMENT AGENCY OR INDUSTRY REGULATORY ORGANIZATION OR ANY OTHER THIRD PARTY ORGANIZATION.  YOU AGREE THAT PRIOR TO USING, INCORPORATING OR DISTRIBUTING THE LICENSED MATERIALS IN OR WITH ANY COMMERCIAL PRODUCT THAT YOU WILL THOROUGHLY TEST THE PRODUCT AND THE FUNCTIONALITY OF THE LICENSED MATERIALS IN OR WITH THAT PRODUCT AND BE SOLELY RESPONSIBLE FOR ANY PROBLEMS OR FAILURES.
 *
 **TI AND ITS LICENSORS MAKE NO WARRANTY OR REPRESENTATION, EITHER EXPRESS, IMPLIED OR STATUTORY, REGARDING THE LICENSED MATERIALS, INCLUDING BUT NOT LIMITED TO ANY IMPLIED WARRANTIES OF MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE OR NON-INFRINGEMENT OF ANY THIRD PARTY PATENTS, COPYRIGHTS, TRADE SECRETS OR OTHER INTELLECTUAL PROPERTY RIGHTS.  YOU AGREE TO USE YOUR INDEPENDENT JUDGMENT IN DEVELOPING YOUR PRODUCTS.  NOTHING CONTAINED IN THIS AGREEMENT WILL BE CONSTRUED AS A WARRANTY OR REPRESENTATION BY TI TO MAINTAIN PRODUCTION OF ANY TI SEMICONDUCTOR DEVICE OR OTHER HARDWARE OR SOFTWARE WITH WHICH THE LICENSED MATERIALS MAY BE USED.
 *
 **IN NO EVENT SHALL TI OR ITS LICENSORS, BE LIABLE FOR ANY SPECIAL, INDIRECT, INCIDENTAL, PUNITIVE OR CONSEQUENTIAL DAMAGES, HOWEVER CAUSED, ON ANY THEORY OF LIABILITY, IN CONNECTION WITH OR ARISING OUT OF THIS AGREEMENT OR THE USE OF THE LICENSED MATERIALS REGARDLESS OF WHETHER TI HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.  EXCLUDED DAMAGES INCLUDE, BUT ARE NOT LIMITED TO, COST OF REMOVAL OR REINSTALLATION, OUTSIDE COMPUTER TIME, LABOR COSTS, LOSS OF DATA, LOSS OF GOODWILL, LOSS OF PROFITS, LOSS OF SAVINGS, OR LOSS OF USE OR INTERRUPTION OF BUSINESS.  IN NO EVENT WILL TI'S OR ITS LICENSORS' AGGREGATE LIABILITY UNDER THIS AGREEMENT OR ARISING OUT OF YOUR USE OF THE LICENSED MATERIALS EXCEED FIVE HUNDRED U.S. DOLLARS (US$500).
 *
 *    Because some jurisdictions do not allow the exclusion or limitation of incidental or consequential damages or limitation on how long an implied warranty lasts, the above limitations or exclusions may not apply to you.
 *
 **6.    Indemnification Disclaimer.  YOU ACKNOWLEDGE AND AGREE THAT TI SHALL NOT BE LIABLE FOR AND SHALL NOT DEFEND OR INDEMNIFY YOU AGAINST ANY THIRD PARTY INFRINGEMENT CLAIM THAT RELATES TO OR IS BASED ON YOUR MANUFACTURE, USE, OR DISTRIBUTION OF THE LICENSED MATERIALS OR YOUR MANUFACTURE, USE, OFFER FOR SALE, SALE, IMPORTATION OR DISTRIBUTION OF YOUR PRODUCTS THAT INCLUDE OR INCORPORATE THE LICENSED MATERIALS.
 *
 **7.    No Technical Support.  TI and its licensors are under no obligation to install, maintain or support the Licensed Materials.
 *
 **8.    Notices.  All notices to TI hereunder shall be delivered to Texas Instruments Incorporated, 12500 TI Boulevard, Mail Station 8638, Dallas, Texas 75243, Attention: Contracts Manager - Embedded Processing, with a copy to Texas Instruments Incorporated, 13588 N. Central Expressway, Mail Station 3999, Dallas, Texas 75243, Attention: Law Department - Embedded Processing.  All notices shall be deemed served when received by TI.
 *
 **9.    Export Control.  The Licensed Materials are subject to export control under the U.S. Commerce Department's Export Administration Regulations ("EAR").  Unless prior authorization is obtained from the U.S. Commerce Department, neither you nor your subsidiaries shall export, re-export, or release, directly or indirectly (including, without limitation, by permitting the Licensed Materials to be downloaded), any technology, software, or software source code, received from TI, or export, directly or indirectly, any direct product of such technology, software, or software source code, to any person, destination or country to which the export, re-export, or release of the technology, software, or software source code, or direct product is prohibited by the EAR.  You represent and warrant that you (i) are not located in, or under the control of, a national or resident of Cuba, Iran, North Korea, Sudan and Syria or any other country subject to a U.S. goods embargo; (ii) are not on the U.S. Treasury Department's List of Specially Designated Nationals or the U.S. Commerce Department's Denied Persons List or Entity List; and (iii) will not use the Licensed Materials or transfer the Licensed Materials for use in any military, nuclear, chemical or biological weapons, or missile technology end-uses.  Any software export classification made by TI shall not be construed as a representation or warranty regarding the proper export classification for such software or whether an export license or other documentation is required for the exportation of such software.
 *
 **10.    Governing Law and Severability; Waiver.  This Agreement will be governed by and interpreted in accordance with the laws of the State of Texas, without reference to conflict of laws principles.  If for any reason a court of competent jurisdiction finds any provision of the Agreement to be unenforceable, that provision will be enforced to the maximum extent possible to effectuate the intent of the parties, and the remainder of the Agreement shall continue in full force and effect.  This Agreement shall not be governed by the United Nations Convention on Contracts for the International Sale of Goods, or by the Uniform Computer Information Transactions Act (UCITA).  The parties agree that non-exclusive jurisdiction for any dispute arising out of or relating to this Agreement lies within the courts located in the State of Texas.  Notwithstanding the foregoing, any judgment may be enforced in any United States or foreign court, and either party may seek injunctive relief in any United States or foreign court.  Failure by TI to enforce any provision of this Agreement shall not be deemed a waiver of future enforcement of that or any other provision in this Agreement or any other agreement that may be in place between the parties.
 *
 **11.    PRC Provisions.  If you are located in the People's Republic of China ("PRC") or if the Licensed Materials will be sent to the PRC, the following provisions shall apply:
 *
 *    a.    Registration Requirements.  You shall be solely responsible for performing all acts and obtaining all approvals that may be required in connection with this Agreement by the government of the PRC, including but not limited to registering pursuant to, and otherwise complying with, the PRC Measures on the Administration of Software Products, Management Regulations on Technology Import-Export, and Technology Import and Export Contract Registration Management Rules.  Upon receipt of such approvals from the government authorities, you shall forward evidence of all such approvals to TI for its records.  In the event that you fail to obtain any such approval or registration, you shall be solely responsible for any and all losses, damages or costs resulting therefrom, and shall indemnify TI for all such losses, damages or costs.
 *
 **b.    Governing Language.  This Agreement is written and executed in the English language and shall be authoritative and controlling, whether or not translated into a language other than English to comply with law or for reference purposes.  If a translation of this Agreement is required for any purpose, including but not limited to registration of the Agreement pursuant to any governmental laws, regulations or rules, you shall be solely responsible for creating such translation.
 *
 **12.    Contingencies.    TI shall not be in breach of this Agreement and shall not be liable for any non-performance or delay in performance if such non-performance or delay is due to a force majeure event or other circumstances beyond TI's reasonable control.
 *
 **13.        Entire Agreement.  This is the entire agreement between you and TI and this Agreement supersedes any prior agreement between the parties related to the subject matter of this Agreement.  Notwithstanding the foregoing, any signed and effective software license agreement relating to the subject matter hereof and stating expressly that such agreement shall control regardless of any subsequent click-wrap, shrink-wrap or web-wrap, shall supersede the terms of this Agreement.  No amendment or modification of this Agreement will be effective unless in writing and signed by a duly authorized representative of TI.  You hereby warrant and represent that you have obtained all authorizations and other applicable consents required empowering you to enter into this Agreement.
 *
 *
 *
 * --/COPYRIGHT--*/ 
 
//#############################################################################
//
//! \file   can_hw.c
//!
//! \brief  CAN HW Initialization API's
//!         
//
//  Group:          CMCU
//  Target Device:  CC26xx
//
//  (C) Copyright 2019, Texas Instruments, Inc.
//#############################################################################

// File Includes
#ifndef USING_DRIVERLIB
#include <ti/sysbios/hal/Hwi.h>
#else
#include <driverlib/sys_ctrl.h>
#endif

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#include "can_task.h"
#include "can_hw.h"
#include "TCAN4550.h"

// Defines
#define CAN_DLC_MAX                      0x08
#define TCAN4550_MESSAGE_BUFFERS         64

// Initialize to 0 or you'll get garbage
TCAN4x5x_MCAN_RX_Header MsgHeader = {0};
uint8_t numBytes = 0;
uint8_t dataPayload[64] = {0};

// Prototype Declarations
static void    TCAN4550_SetConfiguration(void);
static void    TCAN4550_SetRxTxMessageBuffers(uint32_t CAN_msg_ID,
                                              CAN_ID_Type_t CAN_ID_type);
static void    TCAN4550_Start(void);

// Local Function Declarations
//****************************************************************************
// Name: Init_CAN
// Details:
//****************************************************************************
void Init_CAN(void)
{
   // Intialize all control registers
   TCAN4550_SetConfiguration();
   TCAN4550_Start();
}

//****************************************************************************
// Name: TCAN4550_SetConfiguration
// Details:
//****************************************************************************
static void TCAN4550_SetConfiguration( void )
{
    uint8_t tx_param_size;
    uint8_t rx_param_size;

    // Clear any SPI ERR flags that might be set as a result of our pin mux changing during MCU startup
    TCAN4x5x_Device_ClearSPIERR();

    /* Step one attempt to clear all interrupts */
    /* Initialize to 0 to all bits are set to 0 */
    TCAN4x5x_Device_Interrupt_Enable dev_ie = {0};

    /* Disable all non-MCAN related interrupts for simplicity */
    TCAN4x5x_Device_ConfigureInterruptEnable(&dev_ie);

    /* Setup a new MCAN IR object for easy interrupt checking */
    TCAN4x5x_Device_Interrupts dev_ir = {0};

    /* Request that the struct be updated with current DEVICE (not MCAN) interrupt values */
    TCAN4x5x_Device_ReadInterrupts(&dev_ir);

    /* If the Power On interrupt flag is set */
    if (dev_ir.PWRON)
    {
        /* Clear it because if it's not cleared within ~4 minutes, it goes to sleep */
        TCAN4x5x_Device_ClearInterrupts(&dev_ir);
    }

    /* Configure the CAN bus speeds */
    /* 500k arbitration with a 40 MHz crystal (40E6 / (57 + 22 + 1 (Sync)) = 500E3) */
    TCAN4x5x_MCAN_Nominal_Timing_Simple TCANNomTiming = {0};
    TCANNomTiming.NominalBitRatePrescaler = 2;
    TCANNomTiming.NominalTqBeforeSamplePoint = 32;
    TCANNomTiming.NominalTqAfterSamplePoint = 8;

    /* 2 Mbps CAN FD with a 40 MHz crystal (40E6 / (15 + 5) = 2E6) */
    TCAN4x5x_MCAN_Data_Timing_Simple TCANDataTiming = {0};
    TCANDataTiming.DataBitRatePrescaler = 1;
    TCANDataTiming.DataTqBeforeSamplePoint = 15;
    TCANDataTiming.DataTqAfterSamplePoint = 5;

    /* Configure the MCAN core settings */
    /* Remember to initialize to 0, or you'll get random garbage! */
    TCAN4x5x_MCAN_CCCR_Config cccrConfig = {0};

    /* CAN FD mode enable */
    cccrConfig.FDOE = 0;

    /* CAN FD Bit rate switch enable*/
    cccrConfig.BRSE = 1;

    /* Configure the default CAN packet filtering settings */
    TCAN4x5x_MCAN_Global_Filter_Configuration gfc = {0};

    /* Reject remote frames (TCAN4x5x doesn't support this) */
    gfc.RRFE = 1;

    /* Reject remote frames (TCAN4x5x doesn't support this) */
    gfc.RRFS = 1;

    /* Default behavior if incoming message doesn't match a filter is to accept into RXFIO0 for extended ID messages (29 bit IDs) */
    gfc.ANFE = TCAN4x5x_GFC_REJECT; //TCAN4x5x_GFC_ACCEPT_INTO_RXFIFO0;

    /* Default behavior if incoming message doesn't match a filter is to accept into RXFIO0 for standard ID messages (11 bit IDs) */
    gfc.ANFS = TCAN4x5x_GFC_REJECT; //TCAN4x5x_GFC_ACCEPT_INTO_RXFIFO0;

    /* ************************************************************************
     * In the next configuration block, we will set the MCAN core up to have:
     *   - 1 SID filter element
     *   - 1 XID Filter element
     *   - RX FIFO 0 elements -> depends on CAN_rx_msg_table
     *   - RX FIFO 0 supports data payloads up to 64 bytes
     *   - RX FIFO 1 and RX Buffer will not have any elements, but we still set
     *   their data payload sizes, even though it's not required
     *   - No TX Event FIFOs
     *   - TX buffers supporting up to 64 bytes of data payload -> depends on CAN_tx_msg_table
     */
    /* get the number of messages from the can_config.c table */
    rx_param_size = 1;
    tx_param_size = 1;

    TCAN4x5x_MRAM_Config MRAMConfiguration = {0};
    // Standard ID number of elements, you MUST have a filter written to MRAM for each element defined
    MRAMConfiguration.SIDNumElements = 1;
    // Extended ID number of elements, you MUST have a filter written to MRAM for each element defined
    MRAMConfiguration.XIDNumElements = 1;
    // RX0 Number of elements
    MRAMConfiguration.Rx0NumElements = rx_param_size;
    // RX0 data payload size (Use the defines)
    MRAMConfiguration.Rx0ElementSize = MRAM_64_Byte_Data;
    // RX1 number of elements
    MRAMConfiguration.Rx1NumElements = 0;
    // RX1 data payload size (use the defines)
    MRAMConfiguration.Rx1ElementSize = MRAM_64_Byte_Data;
    // RX buffer number of elements
    MRAMConfiguration.RxBufNumElements = 0;
    // RX buffer data payload size (use the defines)
    MRAMConfiguration.RxBufElementSize = MRAM_64_Byte_Data;
    // TX Event FIFO number of elements
    MRAMConfiguration.TxEventFIFONumElements = 0;
    // TX buffer number of elements
    MRAMConfiguration.TxBufferNumElements = tx_param_size;
    // TX buffer data payload size (use the defines)
    MRAMConfiguration.TxBufferElementSize = MRAM_64_Byte_Data;

    /* Configure the MCAN core with the settings above, the changes in this block are write protected registers,
     * so it makes the most sense to do them all at once, so we only unlock and lock once                             */
    // Start by making protected registers accessible
    TCAN4x5x_MCAN_EnableProtectedRegisters();
    // Enable FD mode and Bit rate switching
    TCAN4x5x_MCAN_ConfigureCCCRRegister(&cccrConfig);
    // Configure the global filter configuration (Default CAN message behavior)
    TCAN4x5x_MCAN_ConfigureGlobalFilter(&gfc);
    // Setup nominal/arbitration bit timing
    TCAN4x5x_MCAN_ConfigureNominalTiming_Simple(&TCANNomTiming);
    // Setup CAN FD timing
    TCAN4x5x_MCAN_ConfigureDataTiming_Simple(&TCANDataTiming);
    // Clear all of MRAM (Writes 0's to all of it)
    TCAN4x5x_MRAM_Clear();
    // Set up the applicable registers related to MRAM configuration
    TCAN4x5x_MRAM_Configure(&MRAMConfiguration);
    // Disable protected write and take device out of INIT mode
    TCAN4x5x_MCAN_DisableProtectedRegisters();

    /* Set the interrupts we want to enable for MCAN */
    /* Remember to initialize to 0, or you'll get random garbage! */
    TCAN4x5x_MCAN_Interrupt_Enable mcan_ie = {0};

    /* RX FIFO 0 new message interrupt enable */
    mcan_ie.RF0NE = 1;

    /* Enable the appropriate registers */
    TCAN4x5x_MCAN_ConfigureInterruptEnable(&mcan_ie);

    //Initialize receive and transmit buffers
    TCAN4550_SetRxTxMessageBuffers(CAN_RX_ID_MSG, CAN_RX_ID_MSG_TYPE);

    /* Configure the TCAN4550 Non-CAN-related functions */
    // Remember to initialize to 0, or you'll get random garbage!
    TCAN4x5x_DEV_CONFIG devConfig = {0};
    // Keep Sleep Wake Error Enabled (it's a disable bit, not an enable)
    devConfig.SWE_DIS = 0;
    // Not requesting a software reset
    devConfig.DEVICE_RESET = 0;
    // Watchdog disabled
    devConfig.WD_EN = 0;
    // Mirror INH function (default)
    devConfig.nWKRQ_CONFIG = 0;
    // INH enabled (default)
    devConfig.INH_DIS = 0;
    // MCAN nINT 1 (default)
    devConfig.GPIO1_GPO_CONFIG = TCAN4x5x_DEV_CONFIG_GPO1_MCAN_INT1;
    // Failsafe disabled (default)
    devConfig.FAIL_SAFE_EN = 0;
    // GPIO set as GPO (Default)
    devConfig.GPIO1_CONFIG = TCAN4x5x_DEV_CONFIG_GPIO1_CONFIG_GPO;
    // Watchdog set an interrupt (default)
    devConfig.WD_ACTION = TCAN4x5x_DEV_CONFIG_WDT_ACTION_nINT;
    // Don't reset the watchdog
    devConfig.WD_BIT_RESET = 0;
    // Set nWKRQ to internal voltage rail (default)
    devConfig.nWKRQ_VOLTAGE = 0;
    // GPO2 has no behavior (default)
    devConfig.GPO2_CONFIG = TCAN4x5x_DEV_CONFIG_GPO2_NO_ACTION;
    // Input crystal is a 40 MHz crystal (default)
    devConfig.CLK_REF = 1;
    // Wake pin can be triggered by either edge (default)
    devConfig.WAKE_CONFIG = TCAN4x5x_DEV_CONFIG_WAKE_BOTH_EDGES;
    // Configure the device with the above configuration
    TCAN4x5x_Device_Configure(&devConfig);
}

//****************************************************************************
// Name: TCAN4550_SetRxTxMessageBuffers
// Details:
//****************************************************************************
static void TCAN4550_SetRxTxMessageBuffers(uint32_t CAN_msg_ID,
                                           CAN_ID_Type_t CAN_ID_type)
{
    TCAN4x5x_MCAN_SID_Filter SID_ID = {0};
    TCAN4x5x_MCAN_XID_Filter XID_ID = {0};
    uint32_t id_32;

    id_32  = CAN_msg_ID;

    if ( CAN_ID_type == EXTENDED_ID )
    {
        // EFT
        XID_ID.EFT = TCAN4x5x_XID_EFT_CLASSIC;
        // EFEC
        XID_ID.EFEC = TCAN4x5x_XID_EFEC_PRIORITYSTORERX0;
        // EFID1 (Classic mode filter)
        XID_ID.EFID1 = id_32;
        // EFID2 (Classic mode mask)
        XID_ID.EFID2 = 0x1FFFFFFF;
        // Write to the MRAM
        TCAN4x5x_MCAN_WriteXIDFilter(0, &XID_ID);
    }
    else
    {
        // SFT: Standard filter type. Configured as a classic filter
        SID_ID.SFT = TCAN4x5x_SID_SFT_CLASSIC;
        // Standard filter element configuration, store it in RX fifo 0 as a priority message
        SID_ID.SFEC = TCAN4x5x_SID_SFEC_PRIORITYSTORERX0;
        // SFID1 (Classic mode Filter)
        SID_ID.SFID1 = id_32;
        // SFID2 (Classic mode Mask)
        SID_ID.SFID2 = 0x7FF;
        // Write to the MRAM
        TCAN4x5x_MCAN_WriteSIDFilter(0, &SID_ID);
    }
}

//****************************************************************************
// Name: TCAN4550_Start
// Details:
//****************************************************************************
static void TCAN4550_Start(void )
{
    /* Todo: Change to TCAN45x0_MODE_STANDBY */
    // Set to normal mode, since configuration is done. This line turns on the transceiver
    TCAN4x5x_Device_SetMode(TCAN4x5x_DEVICE_MODE_NORMAL);

    /* Resets all MCAN interrupts (does NOT include any SPIERR interrupts) */
    TCAN4x5x_MCAN_ClearInterruptsAll();
}

//****************************************************************************
// Name: TCAN4550_enterCS_HW
// Details: This function enters the critical section by disabling HWI
//****************************************************************************
uint32_t TCAN4550_enterCS_HW( void )
{
#if defined(USING_DRIVERLIB)
  return (!IntMasterDisable());
#else /* Default to TIRTOS */
  return (Hwi_disable());
#endif
}
//****************************************************************************
// Name: TCAN4550_exitCS_HW
// Details: This function exits the critical section by restoring HWI
//****************************************************************************
void TCAN4550_exitCS_HW( uint32_t key )
{
#if defined(USING_DRIVERLIB)
  if (key)
  {
    (void) IntMasterEnable();
  }
#else /* Default to TIRTOS */
  Hwi_restore(key);
#endif
}

//****************************************************************************
// Name: HW_Tx_Msg
// Details:
//****************************************************************************
uint8_t HW_Tx_Msg(uint32_t CAN_msg_ID, uint8_t CAN_msg_DLC,
                  uint8_t *CAN_msg_Buffer)
{
   uint8_t data_cnt;
   TCAN4x5x_MCAN_TX_Header header = {0};
   uint8_t data[8];
   uint32_t key;

   // Load DLC into transmit message buffer
   if (CAN_msg_DLC > CAN_DLC_MAX)
   {
       CAN_msg_DLC = CAN_DLC_MAX;
   }

   // Set the DLC to be equal to or less than the data payload
   header.DLC = CAN_msg_DLC;
   header.ID = CAN_msg_ID;
   header.FDF = 0;                                 // CAN FD frame enabled
   header.BRS = 0;                                 // Bit rate switch enabled
   header.EFC = 0;
   header.MM = 0;
   header.RTR = 0;
   header.XTD = 0;                                 // We are not using an extended ID in this example
   header.ESI = 0;                                 // Error state indicator

   // Load data bytes into transmit message buffer
   for(data_cnt = 0; data_cnt < CAN_msg_DLC; data_cnt++)
   {
       data[data_cnt] =
               CAN_msg_Buffer[data_cnt];
   }

   // Start critical section
   key = TCAN4550_enterCS_HW();

   // This line writes the data and header to TX FIFO
   TCAN4x5x_MCAN_WriteTXBuffer(0, &header, data);
   // Request that TX Buffer be transmitted
   TCAN4x5x_MCAN_TransmitBufferContents(0 );

   // End critical section
   TCAN4550_exitCS_HW(key);

   // Success
   return (1);
}

//****************************************************************************
// Name: HW_ISR_Rx
// Details:
//****************************************************************************
void HW_ISR_Rx(uint32_t *msg_ID,
               uint8_t *msg_Payload,
               uint8_t *msg_DLC)
{
    uint8_t data_byte;

   // Setup a new MCAN IR object for easy interrupt checking
   TCAN4x5x_MCAN_Interrupts mcan_ir = {0};

   // Read the interrupt register
   TCAN4x5x_MCAN_ReadInterrupts(&mcan_ir);

   // If a new message in RX FIFO 0
   if (mcan_ir.RF0N) {

       // Clear the interrupt bit to release the INT pin.
       // Clear any of the interrupt bits that are set.
       TCAN4x5x_MCAN_ClearInterrupts(&mcan_ir);

       // This will read the next element in the RX FIFO 0
       numBytes = TCAN4x5x_MCAN_ReadNextFIFO(RXFIFO0, &MsgHeader, dataPayload);

       *msg_DLC = MsgHeader.DLC;
       *msg_ID = MsgHeader.ID;

       for(data_byte = 0; data_byte < MsgHeader.DLC; data_byte++)
       {
           msg_Payload[data_byte] = dataPayload[data_byte];
       }
   }
}

//****************************************************************************
// Name: ISR_Tx
// Details:
//****************************************************************************
void ISR_Tx(void)
{
}

//****************************************************************************
// Name: ISR_Error
// Details:
//****************************************************************************
void ISR_Error(void)
{
}

//****************************************************************************
// Name: Check_Error_State
// Details:
//****************************************************************************
void Check_Error_State(void)
{
}

//****************************************************************************
// Name: ISR_Wakeup
// Details:
//****************************************************************************
void ISR_Wakeup(void)
{
}

//****************************************************************************
// Name: Interrupt_Enable_Rx
// Details:
//****************************************************************************
void Interrupt_Enable_Rx(void)
{
}

//****************************************************************************
// Name: Interrupt_Enable_Tx
// Details:
//****************************************************************************
void Interrupt_Enable_Tx(void)
{
}

//****************************************************************************
// Name: Interrupt_Enable_Error
// Details:
//****************************************************************************
void Interrupt_Enable_Error(void)
{
}

//****************************************************************************
// Name: Interrupt_Enable_Wakeup
// Details:
//****************************************************************************
void Interrupt_Enable_Wakeup(void)
{
}

//****************************************************************************
// Name: Interrupt_Disable_Rx
// Details:
//****************************************************************************
void Interrupt_Disable_Rx(void)
{
}

//****************************************************************************
// Name: Interrupt_Disable_Tx
// Details:
//****************************************************************************
void Interrupt_Disable_Tx(void)
{
}

//****************************************************************************
// Name: Interrupt_Disable_Error
// Details:
//****************************************************************************
void Interrupt_Disable_Error(void)
{
}

//****************************************************************************
// Name: Interrupt_Disable_Wakeup
// Details:
//****************************************************************************
void Interrupt_Disable_Wakeup(void)
{
}

//****************************************************************************
// Name: Recover_From_Busoff
// Details:
//****************************************************************************
void Recover_From_Busoff(void)
{
}
