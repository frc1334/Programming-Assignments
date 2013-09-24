// Programming Homework.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int input, num1, num2, sum ;
int _tmain(int argc, _TCHAR* argv[])
{
	
    int count;
    cout << "Enter amount of numbers" << endl;
    cin >> input;
	count = input;
    for(int i =0; i < input; i++)
    {
		
		count--;
        cout << "Enter #" << count << " :" << endl;
        cin >> num1;
        num2 = num1;
        sum = num2 + sum;
    }
    cout << "Sum: " << sum << endl;
	int wait;
	cin >> wait;
	cin.get();
    return 0;
}
