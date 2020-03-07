#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    char ch;
    while (cin >> ch) {
        if ('a' == ch || 'A' == ch)
            ++aCnt;
        else if ('e' == ch || 'E' == ch)
            ++eCnt;
        else if ('i' == ch || 'I' == ch)
            ++iCnt;
        else if ('o' == ch || 'O' == ch)
            ++oCnt;
        else if ('u' == ch || 'U' == ch)
            ++uCnt;
    }
    
    cout << "Number of vowal a: " << aCnt << endl;
    cout << "Number of vowal e: " << eCnt << endl;
    cout << "Number of vowal i: " << iCnt << endl;
    cout << "Number of vowal o: " << oCnt << endl;
    cout << "Number of vowal u: " << uCnt << endl;

    return 0;
}
