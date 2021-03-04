#ifndef MESSAGECONSUMER_BASE_IMPL_BASE_H
#define MESSAGECONSUMER_BASE_IMPL_BASE_H

#include <boost/thread.hpp>
#include <ossie/Component.h>
#include <ossie/ThreadedComponent.h>

#include <ossie/MessageInterface.h>
#include "struct_props.h"

class messageconsumer_base : public Component, protected ThreadedComponent
{
    public:
        messageconsumer_base(const char *uuid, const char *label);
        ~messageconsumer_base();

        void start() throw (CF::Resource::StartError, CORBA::SystemException);

        void stop() throw (CF::Resource::StopError, CORBA::SystemException);

        void releaseObject() throw (CF::LifeCycle::ReleaseError, CORBA::SystemException);

        void loadProperties();

    protected:
        // Member variables exposed as properties
        /// Message structure definition for Component_Members
        Component_Members_struct Component_Members;

        // Ports
        /// Port: message_in
        MessageConsumerPort *message_in;

    private:
};
#endif // MESSAGECONSUMER_BASE_IMPL_BASE_H
