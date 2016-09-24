

test1
test1
#include <iostream>
using namespace std;
int i = 1;


int main()
{
    int i = 'a';
    const int &a = i ;
    i = 3;
    string s = "aaa\n";
    int ia[3][4] = {};
    int *p = ia[0];
    cout<<(*p + 1)<<endl;
    return 0;
}
