#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int answer = 0;
  if(n>0){
  while (n > 0)
  {
    int bit = n % 10;
    answer = (answer * 10) + bit;
    n = n / 10;
  }
  cout << answer;
  }else if(n<0){
    n=-(n);
     while (n > 0)
  {
    int bit = n % 10;
    answer = (answer * 10) + bit;
    n = n / 10;
  }
  cout<<-(answer);
  }else{
    cout<<0;
  }
}