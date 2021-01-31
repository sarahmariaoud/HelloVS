

#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>


#include <foo.h>
#include "bar.h"

using namespace std;

int main()
{
     char *y =  (char*) malloc(100);

    vector<string> msg {"Hello", "kkkC++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    print();
    print2();

   int x= sum(7,9);
   cout << x << "test";

     free(y);
}