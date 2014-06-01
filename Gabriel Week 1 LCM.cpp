#include <iostream>


int numberOne;
int numberTwo;
int GreatestCommonDivisor; //Declaring all the important bits
int LowestCommonMultiple;

using namespace std;


int main()
{

    cout << "Enter the lowest of the two numbers: ";
    cin >> numberOne;
    cout << "Enter the largest of the two numbers: "; //Getting the values of numberOne and numberTwo
    cin >> numberTwo;
    for (int i=1;i<numberTwo; i++) //for loop
    {
        if(numberOne%i==0 && numberTwo%i==0) //if both numbers divided by the value of i are equal to 0 than that's the greatest commond divisor
        {
            GreatestCommonDivisor=i;
        }

    }


    LowestCommonMultiple =numberOne*numberTwo/GreatestCommonDivisor;

    cout << "The lowest common multiple of "<<numberOne<<" and "<<numberTwo<<" is " << LowestCommonMultiple; 


    return 0;
}
