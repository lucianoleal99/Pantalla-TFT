/*
 * SPIemwin.h
 *
 *  Created on: 16 feb. 2024
 *      Author: luciana
 */

#ifndef EMWIN_CONFIG_SPIEMWIN_H_
#define EMWIN_CONFIG_SPIEMWIN_H_





#endif /* EMWIN_CONFIG_SPIEMWIN_H_ */

#pragma once

#ifdef COMPONENT_EMWIN_NOSNTS
    #ifndef EMWIN_ENABLED
        #define EMWIN_ENABLED
    #endif
#endif

#ifdef COMPONENT_EMWIN_NOSTS
    #ifndef EMWIN_ENABLED
        #define EMWIN_ENABLED
    #endif
#endif

#ifdef COMPONENT_EMWIN_OSNTS
    #ifndef EMWIN_ENABLED
        #define EMWIN_ENABLED
    #endif
#endif

#ifdef COMPONENT_EMWIN_OSTS
    #ifndef EMWIN_ENABLED
        #define EMWIN_ENABLED
    #endif
#endif
