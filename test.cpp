#include <memory>

int main(void) {
    std::unique_ptr<int> p(new int(1));
    std::unique_ptr<int> q(new int(1));

    return 0;
}
