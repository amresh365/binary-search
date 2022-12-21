#include <bits/stdc++.h>
using namespace std;
class Solution {
private:
   int number;
   int guess(int num){
      if(number > num)
         return 1;
      if(number < num)
         return -1;
      return 0;
   }
public:
   Solution(int n){
      number = n;
   }
   int guessNumber(int n) {
      int l=1,r=n,m;
      while(l<=r){
         m=l+(r-l)/2;
         if(guess(m)==0)
            return m;
         if(guess(m)==-1)
            r=m-1;
         else
            l=m+1;
      }
      return 0;
   }
};
main(){
   Solution ob(5); //pick = 5
   cout << (ob.guessNumber(10));
}
