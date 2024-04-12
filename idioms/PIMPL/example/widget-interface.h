#include <memory>
class widgetImple;

class widget
{
public:
    widget();
    ~widget();
    void doSomething();

private:
    std::unique_ptr<widgetImple> pimpl;
};