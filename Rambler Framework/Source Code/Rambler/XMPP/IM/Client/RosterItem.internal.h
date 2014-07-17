/**********************************************************************************************************************
 * @file    Ramber/XMPP/IM/Client/RosterItem.internal.h
 * @date    2014-07-11
 * @author  Omar Stefan Evans
 * @brief   <# Brief Description#>
 * @details <#Detailed Description#>
 **********************************************************************************************************************/

#import "RosterItem.h"
#import "JID.internal.h"

#include "rambler/XMPP/IM/Client/RosterItem.hpp"

using namespace rambler;

@interface RosterItem ()

@property (readonly, assign) StrongPointer<XMPP::IM::Client::RosterItem const> nativeObject;

- (instancetype)initWithNativeObject:(StrongPointer<XMPP::IM::Client::RosterItem const>)aNativeObject NS_DESIGNATED_INITIALIZER;

@end