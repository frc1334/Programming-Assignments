#include <iostream>
using namespace std;

int main()
{

    int numberOne=0; //Bunch of declaring.
    int numberTwo=0;
    int lowestCommonMultiple;
    int multiple=numberTwo;//set multiple=numberTwo just so I can place it in the loop.

    cout<<"Enter Your First Number: ";
    cin>>numberOne;                        //User input of values
    cout<<"Enter Your Second Number: ";
    cin>>numberTwo;

    for(int i=1; i<100000; i++) //Loop start, I just put some absurdly large number in since, the loop autobreaks.
    {
        multiple=numberTwo*i;//numberTwo is the only multiplying valuel. Multiplies by number in the loop

        if(multiple%numberOne==0) //If multiple divided by numberOne=0 than lowestCommonMultiple must be equal to the current multiple. Breaks loop.
        {
            lowestCommonMultiple=multiple;
            break;
        }

    }
    cout << "The lowest common multiple is "<<lowestCommonMultiple<< endl;
    return 0;
}
