
#include <iostream>
#include "clsString.h"
#include "clsPerson.h"
#include "clsInputValidate.h"
#include "clsBankClient.h"
#include "clsDate.h"
using namespace std;

int main()

{
    clsBankClient Client1 = clsBankClient::Find("A101");
    if (!Client1.IsEmpty())
    {
        cout << "\nClient Found :-)\n";
    }
    else
    {
        cout << "\nClient Was not Found :-(\n";
    }

    Client1.Print();
    


    
}

