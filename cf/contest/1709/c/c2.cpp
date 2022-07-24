#include <format>
#include <iostream>

using namespace std;

int main() {
    cout << std::format("1\n");
    std::cout << std::format("${:<12}$", 1) << std::endl;

    return 0;
}
