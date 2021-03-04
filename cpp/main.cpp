#include <iostream>
#include "ossie/ossieSupport.h"

#include "messageconsumer.h"
int main(int argc, char* argv[])
{
    messageconsumer_i* messageconsumer_servant;
    Component::start_component(messageconsumer_servant, argc, argv);
    return 0;
}

