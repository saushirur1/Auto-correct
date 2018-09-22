#include <iostream>
#include <vector>
#include "Auto-correct.h"
using namespace std;
int main()
{
autocorrect a;
string s = "hello";
bool test = a.search(s);
cout << test << endl;
return 0;
}
