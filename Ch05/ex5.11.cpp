#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

int main()
{
    int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    int sCnt = 0, tCnt = 0, nCnt = 0;
    string line;
    while (getline(cin, line)) {
        ++nCnt;
        for (auto ch : line) {
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
            else if (' ' == ch)
                ++sCnt;
            else if ('\t' == ch)
                ++tCnt;
        }
    }
    
    cout << "Number of vowal a: " << aCnt << endl;
    cout << "Number of vowal e: " << eCnt << endl;
    cout << "Number of vowal i: " << iCnt << endl;
    cout << "Number of vowal o: " << oCnt << endl;
    cout << "Number of vowal u: " << uCnt << endl;
    cout << "Number of space: " << sCnt << endl;
    cout << "Number of \\t: " << tCnt << endl;
    cout << "Number of \\n: " << nCnt << endl;

    return 0;
}
