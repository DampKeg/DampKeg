/**********************************************************************************************************************
 * @file    rambler/XMPP/IM/Client/Message.hpp
 * @date    2014-12-17
 * @brief   <# Brief Description#>
 * @details <#Detailed Description#>
 **********************************************************************************************************************/

#pragma once

#include "rambler/rambler.hpp"
#include "rambler/XMPP/Core/JID.hpp"

namespace rambler { namespace XMPP { namespace IM {

    using namespace XMPP::Core;

    struct Message {

        Message(StrongPointer<JID const> const sender,
                StrongPointer<JID const> const recipient,
                String                   const thread,
                String                   const subject,
                String                   const body,
                String                   const timestamp,
                String                   const uniqueID);

        StrongPointer<JID const> const sender;
        StrongPointer<JID const> const recipient;
        String                   const thread;
        String                   const subject;
        String                   const body;
        String                   const timestamp;
        String                   const uniqueID;

        static StrongPointer<Message const> createMessage(StrongPointer<JID const> const sender,
                                                          StrongPointer<JID const> const recipient,
                                                          String                   const thread,
                                                          String                   const subject,
                                                          String                   const body,
                                                          String                   const timestamp,
                                                          String                   const uniqueID);

        String description() const;        
    };

}}}