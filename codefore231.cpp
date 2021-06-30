
#include<iostream>
using namespace std;

int main ()
{
      int n,Pet,Vas,Toy,num(0);
      cin >> n;
      while (n--)
      {

            cin >> Pet >> Vas >> Toy;
            if (Pet + Vas + Toy >=2)
            {
                  num += 1;
            }
      }
 cout << num << endl;
}
