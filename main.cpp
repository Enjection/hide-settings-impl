#include <iostream>

#include "appdata_iface.h"
#include "module_a.h"
#include "module_b.h"

int main(int argc, char *argv[])
{
    auto appdata = Appdata::Create();
    
    std::cout << A::Extract(appdata) << std::endl;

    std::cout << B::Extract(appdata) << std::endl;

    return 0;
}
