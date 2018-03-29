#include <iostream>
using namespace std;


float sqroot(float s)
{
    int pSq = 0;
    int N = 0;

    for(int i = static_cast<int>(s); i > 0; i--)
    {
        for(int j = 1; j < i; j++)
        {
            if(j*j == i)
            {
                pSq = i;
                N = j;
                break;
            }
        }
        if(pSq > 0)
            break;
    }

    float d = s-pSq;
    float P = d/(2.0*N);
    float A = N+P;
    float sqrt_of_s = A-((P*P)/(2.0*A));
    return sqrt_of_s;

}

int main()
{
    float num;
    cout << "Enter a num: ";
    cin >> num;
    float sqroot_of_num = sqroot(num);
    cout << "sqrt(" << num << ") = " << sqroot_of_num << endl;
    return 0;
