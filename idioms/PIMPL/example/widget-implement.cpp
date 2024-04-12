// #include <iostream>
#include "widget-interface.h"
class widgetImple
{
public:
    void doSomethingPrivate()
    {
    }
};

widget::widget() : pimpl(std::make_unique<widgetImple>()) {}

widget::~widget() = default;

void widget::doSomething(){
    pimpl->doSomethingPrivate();
}
