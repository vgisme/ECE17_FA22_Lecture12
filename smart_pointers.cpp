#include <iostream>

class foo {
public:
    foo() { std::cout << "foo created!" << std::endl; }
    ~foo() { std::cout << "foo DESTROYED!" << std::endl; }
};

std::unique_ptr<foo> func() {
    std::unique_ptr<foo> foo_ptr(new foo);
    return std::unique_ptr<foo>();
    //return foo_ptr;
}

std::shared_ptr<foo> func2() {
    std::shared_ptr<foo> foo_ptr(new foo);
    return foo_ptr;
}

std::shared_ptr<foo> global_shared_ptr;
std::weak_ptr<foo> global_weak_ptr;

int main() {

    std::cout << "About to call func()" << std::endl;
    //std::unique_ptr<foo> foo_ptr(func());
    std::shared_ptr<foo> foo_ptr(func2());
    //foo_ptr.reset();
    std::cout << "Back to main()" << std::endl;


    return 0;
}
