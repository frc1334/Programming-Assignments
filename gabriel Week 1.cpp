#include<iostream>

using namespace std;

int sum;
int sumSwap;

int main()
{
    int num,i,count,n;
    int r;
    cout << "Enter range: ";
    cin >> n;
    //cin >> r;
    for(num = 1; num<=n; num++)
    {
        count = 0;
        for(i=2; i<=num/2; i++)
        {
            if(num%i==0)
            {
                count++;
                break;
            }
        }

        if(count==0 && num!= 1)
        {

            sumSwap=sum;
            sum=sumSwap+num;
        }

    }
    cout<<sum;
    return 0;
}
