#ifndef __IPV6BRIDGE_H_
#define __IPV6BRIDGE_H_

/**
\addtogroup LoWPAN
\{
\addtogroup IPv6Bridge
\{
*/

//=========================== define ==========================================

//=========================== typedef =========================================

//=========================== variables =======================================

//=========================== prototypes ======================================

void IPv6bridge_init(void);
void IPv6bridge_receive(OpenQueueEntry_t* msg);

/**
\}
\}
*/

#endif /* __IPV6BRIDGE_H_ */
