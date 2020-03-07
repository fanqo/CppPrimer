int main()
{
    // int ai = -1, &ar = 0;  // reference can be bind to objects only
    int ai = -1, &ar = ai;  

    int bi2 = 2;
    int *const bp2 = &bi2;

    const int ci = -1, &cr = 0;  // reference to const can be initialized with arbitray expression

    int di2 = 2;
    const int *const dp3 = &di2;

    int ei2 = 2;
    const int *ep1 = &ei2;

    // const int &const fr2;  // 
    const int & fr2 = 2;

    int gi = 2;
    const int gi2 = gi, &gr = gi;

    return 0;
}

