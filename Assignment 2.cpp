    // USING FOR LOOP

#include <iostream>
using namespace std;
int main() {
  int n;
  cout<<" Guys enter the number to know whether it is prime number or not"<< endl;
  cin >> n;
  int i=2 , c=0;

for(i=2; i<=n; i++){
    if(n%i==0){
      c++;
      }
  }
  
    if(c==1)
    {
      cout<< n <<"is prime number"<< endl;
    }
    else {
      cout<<n <<"is not prime number"<< endl;
    }
  
  return 0;
}

   //USING WHILE LOOP

#include <iostream>
using namespace std;
int main() {
  int n;
  cout<<" Guys enter the number to know whether it is prime number or not"<< endl;
  cin >> n;
  int i=2 , c=0;
   
  while(i<=n)
{
    if(n%i==0){
      c++;
      }
  i++;
  }
  
    if(c==1)
    {
      cout<< n <<"is prime number"<< endl;
    }
    else {
      cout<<n <<"is not prime number"<< endl;
    }
  
  return 0;
}
