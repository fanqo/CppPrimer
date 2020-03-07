int main()
{
    const int i = 42;

    auto j = i; // j is an int
    j = 43;

    const auto &k = i;  // k is a reference to const int
    // k = 43;

    auto *p = &i;  // p is a pointer to const int
    // *p 43;

    const auto j2 = i, &k2 = i;  // j2 is a const int, k2 is the same to k
    // j2 = 43;
    // k2 = 43;

    return 0;
}
