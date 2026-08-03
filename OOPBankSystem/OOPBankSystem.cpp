
#include <iostream>
#include "clsString.h"
#include "clsPerson.h"
#include "clsInputValidate.h"
#include "clsDate.h"
using namespace std;

int main()

{
    int Number = clsInputValidate::ReadIntNumber("Enter in Number  : ");


    cout <<endl<< Number;

    
}

