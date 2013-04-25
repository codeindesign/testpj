#include <vector>
#include <cstdio>

class A
{
    public:
        static const size_t c = 4;
};

int main()
{
    const size_t tt = 6;
    std::vector<size_t> a(4, static_cast<size_t>(A::c));

    return 0;
}

