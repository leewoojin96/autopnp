/*
 * Copyright (c) 2011-2014, fortiss GmbH.
 * Licensed under the Apache License, Version 2.0.
 *
 * Use, modification and distribution are subject to the terms specified
 * in the accompanying license file LICENSE.txt located at the root directory
 * of this software distribution. A copy is available at
 * http://chromosome.fortiss.org/.
 *
 * This file is part of CHROMOSOME.
 *
 * $Id: subscriberComponent.h 6351 2014-01-15 16:03:40Z geisinger $
 */

/**
 * \file
 *         Header file for subscriber component.
 *
 * \author
 *         This file has been generated by the CHROMOSOME Modeling Tool (XMT)
 *         (fortiss GmbH).
 */

#ifndef CONFIGURATOREXTENSION_ADV_SUBSCRIBER_SUBSCRIBERCOMPONENT_H
#define CONFIGURATOREXTENSION_ADV_SUBSCRIBER_SUBSCRIBERCOMPONENT_H

/******************************************************************************/
/***   Includes                                                             ***/
/******************************************************************************/
#include "xme/defines.h"

// PROTECTED REGION ID(CONFIGURATOREXTENSION_ADV_SUBSCRIBER_SUBSCRIBERCOMPONENT_H_INCLUDES) ENABLED START

// PROTECTED REGION END

/******************************************************************************/
/***   Defines                                                              ***/
/******************************************************************************/

// PROTECTED REGION ID(CONFIGURATOREXTENSION_ADV_SUBSCRIBER_SUBSCRIBERCOMPONENT_H_DEFINES) ENABLED START

// PROTECTED REGION END

/******************************************************************************/
/***   Type definitions                                                     ***/
/******************************************************************************/

// PROTECTED REGION ID(CONFIGURATOREXTENSION_ADV_SUBSCRIBER_SUBSCRIBERCOMPONENT_H_TYPE_DEFINITIONS) ENABLED START

// PROTECTED REGION END

/**
 * \typedef configuratorExtension_adv_subscriber_subscriberComponent_config_t
 *
 * \brief Component configuration structure type.
 *
 * \details Structure that represents the state of a component instance.
 */
typedef struct
{
    // PROTECTED REGION ID(CONFIGURATOREXTENSION_ADV_SUBSCRIBER_SUBSCRIBERCOMPONENT_H_CONFIG) ENABLED START

    char dummy; ///< Dummy field, replace with actual component configuration.

// PROTECTED REGION END
} configuratorExtension_adv_subscriber_subscriberComponent_config_t;

/******************************************************************************/
/***   Prototypes                                                           ***/
/******************************************************************************/
XME_EXTERN_C_BEGIN

/**
 * \brief Initialization of component.
 *
 * \details Called once before the component is started the first time.
 *
 * \note The initializationString parameter is a temporary artifact that
 *       is likely to be replaced by a more type-safe variant in the future.
 *       See Issue #3846.
 *
 * \param[in,out] config Pointer to a component-specific configuration
 *                structure for this component instance. It is by default
 *                initialized with all zeroes and can be freely modified
 *                by this function.
 * \param[in] initializationString String value of component-specific format
 *            that can be interpreted by this function in order to initialize
 *            the state of the component instance.
 *
 * \return XME_STATUS_SUCCESS on successful initialization and an arbitrary
 *         error code otherwise. If XME_STATUS_SUCCESS is not returned,
 *         component instantiation is aborted.
 */
xme_status_t
configuratorExtension_adv_subscriber_subscriberComponent_init
(
    configuratorExtension_adv_subscriber_subscriberComponent_config_t* const config,
    const char* initializationString
);

/**
 * \brief Finalization of component.
 *
 * \details Called after component will no longer be executed to free allocated resources.
 *          Component must not be executed after fini has been called.
 *
 * \param[in] config Pointer to the component-specific configuration structure
 *            for this component instance.
 */
void
configuratorExtension_adv_subscriber_subscriberComponent_fini
(
    configuratorExtension_adv_subscriber_subscriberComponent_config_t* const config
);

// PROTECTED REGION ID(CONFIGURATOREXTENSION_ADV_SUBSCRIBER_SUBSCRIBERCOMPONENT_H_PROTOTYPES) ENABLED START

// PROTECTED REGION END

XME_EXTERN_C_END

#endif // #ifndef CONFIGURATOREXTENSION_ADV_SUBSCRIBER_SUBSCRIBERCOMPONENT_H
