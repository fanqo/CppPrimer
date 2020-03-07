int main()
{
    // int i, *const cp;  // const pointer must be initialized
    int i, *const cp = nullptr;

    // int *p1, *const p2;
    int *p1, *const p2 = nullptr;

    // const int ic, &r = ic;
    const int ic = 2, &r = ic;

    // const int *const p3;
    const int *const p3 = nullptr;

    const int *p;



    i = ic;

    // p1 = p3;  // cannot assign a const to a non-const

    // p1 = &ic;

    // p3 = &ic;  // cannot change the value of a const

    // p2 = p1;

    // ic = *p3;

    return 0;

}
