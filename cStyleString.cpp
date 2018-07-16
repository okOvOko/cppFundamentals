#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char cStyleString1[13];
    strcpy(cStyleString1, "CStyle");
    char* cStyleString2 = "String";
    strcat(cStyleString1, cStyleString2);

    cout << cStyleString1 << endl;
    cout << strlen(cStyleString1) << endl;

    return 0;
}