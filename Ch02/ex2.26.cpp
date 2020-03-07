int main()
{
    // const int buf;  // unitialize const
    const int buf {0};

    int cnt = 0;

    const int sz = cnt;

    // ++cnt; ++sz;  // sz is const, its value cannot be changed
    ++cnt; 

    return 0;

}
