#include <iostream>
#include <thread>

int main() {
    std::thread t([]{
        std::cout << "hello thread." << std::endl;
    });
    t.join();
    return 0;
}
