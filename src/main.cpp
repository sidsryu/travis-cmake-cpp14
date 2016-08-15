#include <memory>

class Foo
{
public:
    int a {0};    
};

int main()
{
    auto p = std::make_shared<Foo>();

    auto b = p->a;
    b = b;

    return 0;
}
