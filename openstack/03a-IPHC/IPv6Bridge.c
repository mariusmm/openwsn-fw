#include "opendefs.h"
#include "IPv6Bridge.h"
#include "openserial.h"
#include "packetfunctions.h"
#include "iphc.h"
#include "idmanager.h"
#include "openqueue.h"


//=========================== variables =======================================

//=========================== prototypes ======================================
//=========================== public ==========================================
void IPv6bridge_init() {
}

/**
\brief Receive a frame at the IPv6bridge, which sends it out over ethernet.
*/
void IPv6bridge_receive(OpenQueueEntry_t* msg) {

}

//=========================== private =========================================
