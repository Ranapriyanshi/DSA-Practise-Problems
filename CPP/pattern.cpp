#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*"
                 << "";
        }
        cout << endl;
    }
}
void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}
void pattern3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}
void pattern4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }
}
void pattern5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << n - j + 1;
        }
        cout << endl;
    }
}
void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = n - i - 1; j > 0; j--)
        {
            cout << " ";
        };
        for (int k = 1; k <= 2 * i + 1; k++)
        {
            cout << "*";
        };
        for (int j = n - i - 1; j > 0; j--)
        {
            cout << " ";
        };
        cout << endl;
    }
}
void pattern8(int n)
{
    for (int i = n; i > 0; i--)
    {

        for (int j = n - i; j > 0; j--)
        {
            cout << " ";
        };
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "*";
        };
        for (int j = n - i; j > 0; j--)
        {
            cout << " ";
        };
        cout << endl;
    }
}
void pattern9(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i - 1; j > 0; j--)
        {
            cout << " ";
        };
        for (int k = 1; k <= 2 * i + 1; k++)
        {
            cout << "*";
        };
        for (int j = n - i - 1; j > 0; j--)
        {
            cout << " ";
        };
        cout << endl;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - i - 1; j > 0; j--)
        {
            cout << " ";
        };
        for (int k = 1; k <= 2 * i + 1; k++)
        {
            cout << "*";
        };
        for (int j = n - i - 1; j > 0; j--)
        {
            cout << " ";
        };
        cout << endl;
    }
}
void pattern10(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = 1; k <= i + 1; k++)
        {
            cout << "*";
        };
        for (int j = n - i - 1; j > 0; j--)
        {
            cout << " ";
        };
        cout << endl;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int k = 1; k < i + 1; k++)
        {
            cout << "*";
        };
        for (int j = n - i - 1; j > 0; j--)
        {
            cout << " ";
        };
        cout << endl;
    }
}
void pattern11(int n)
{
    int start = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}
void pattern12(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
        }
        for (int k = n - i - 1; k > 0; k--)
        {
            cout << " ";
        };
        for (int k = n - i - 1; k > 0; k--)
        {
            cout << " ";
        };
        for (int j = 0; j <= i; j++)
        {
            cout << (i - j) + 1;
        }
        cout << endl;
    }
}
void pattern13(int n)
{
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        ;
        for (int j = 0; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}
void pattern14(int n)
{
    char c = 'A';
    for (int i = 0; i < n; i++)
    {
        ;
        for (int j = 0; j <= i; j++)
        {
            cout << char('A' + j);
        }
        cout << endl;
    }
}
void pattern15(int n)
{
    char c = 'A';
    for (int i = n - 1; i >= 0; i--)
    {
        ;
        for (int j = 0; j <= i; j++)
        {
            cout << char('A' + j);
        }
        cout << endl;
    }
}
void pattern16(int n)
{
    char c = 'A';
    for (int i = 0; i < n; i++)
    {
        ;
        for (int j = 0; j <= i; j++)
        {
            cout << char('A' + i);
        }
        cout << endl;
    }
}
void pattern17(int n)
{
    char c = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << char('A' + k);
        }
        if (i > 0)
        {
            for (int l = 0; l < i; l++)
            {
                cout << char('A' + (i - l - 1));
            }
        }
        cout << endl;
    }
}
void pattern18(int n)
{
    char c = 'E';
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            cout << char(c -(j) );
        }
        cout << endl;
    }
}
void pattern19(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n-i; j > 0; j--)
        {
            cout << "*";
        }
        for (int j =0; j<i; j++)
        {
            cout << " ";
        }
        for (int j =0; j<i; j++)
        {
            cout << " ";
        }
        for (int j = n-i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n-1; i>=0; i--)
    {
        for (int j = n-i; j > 0; j--)
        {
            cout << "*";
        }
        for (int j =0; j<i; j++)
        {
            cout << " ";
        }
        for (int j =0; j<i; j++)
        {
            cout << " ";
        }
        for (int j = n-i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern20(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=n-1;j>i;j--){
            cout<<" ";
        }
        for(int j=n-1;j>i;j--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=n-1;j>i;j--){
            cout<<" ";
        }
        for(int j=n-1;j>i;j--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern21(int n){
    
}



int main()
{
    int n = 5;
    pattern1(n);
}