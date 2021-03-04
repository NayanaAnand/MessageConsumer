#ifndef MESSAGECONSUMER_I_IMPL_H
#define MESSAGECONSUMER_I_IMPL_H

#include "messageconsumer_base.h"



class messageconsumer_i : public messageconsumer_base
{
	void messageReceived(const std::string &id, const Component_Members_struct &msg);
    ENABLE_LOGGING
    public:
        messageconsumer_i(const char *uuid, const char *label);
        ~messageconsumer_i();

        void constructor();

        int serviceFunction();

    protected:
};

#endif // MESSAGECONSUMER_I_IMPL_H
