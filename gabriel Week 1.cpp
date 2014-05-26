#include<iostream>

using namespace std;

int sum;
int sumSwap;

int main()
{
    int count,n; //Declares num, i, count, n
    int r; //does nothing yet.
    cout << "Enter range: ";
    cin >> n;
    cin >> r;
    for(int num = n; num<=r; num++) //basic FOR loop that keeps going till user defined point.
    {
        count = 0; //the bats are equal to 0
        for(int i=2; i<=num/2; i++) //i starts off at 2 since 1 is arguably not a prime number, nothing past the half way mark can be divided. MORE LOOPS!!!
        {
            if(num%i==0) //if number diuvided by i=0 than it determins the number isn't prime.
            {
                count++;//"One, One bat HaHaHa"-The Count
                break;//breaks loop
            }
        }

        if(count==0 && num!= 1)
        {

            sumSwap=sum; //brings the sum to sumSwap. The sum gets nothing out of this exchange. :(
            sum=sumSwap+num;
        }

    }
    cout<<sum;//displays sum

    //MORE USELESS COMMENTS!!!!!!!
    return 0;
}
