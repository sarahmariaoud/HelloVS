#include <iostream>
#include <vector>
#include <string>
#include <foo.h>
#include "bar.h"

using namespace std;

int main()
{

    vector<string> msg = {"Hello", "kkkC++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    print();
    print2();

   int x= sum(7);
   cout << x;



}