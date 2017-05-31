#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int m,s;
	cin >> m >> s;

   int upper;
   upper = 9*m;

	int i;
   int flag = 0;
   int num[m];
   int nines = 0;
   int rem;
   int count = 0;
   
   if(s == 0 || s > upper){

      cout << "-1 -1";

   }else{


      nines = s/9;
      rem = s - 9*nines;

      while(nines != count){

         num[m-1-count] = 9;
         count++;

      }

      if(rem == 0){

         for(i=0;i<m;i++){

            cout << num[i];


         }

         cout << " ";


         for(i=0;i<m;i++){

            cout << num[i];


         }

      }else{


         rem--;
         num[0] = 1;

         num[m-1-count] = rem;
         count++;

         while(count!=m-1){

               num[m-1-count] = 0;
               count++;

         }

         for(i=0;i<m;i++){

            cout << num[i];


         }

         cout << " ";

         count = 0;

         for(i=m-1;i>=0;i--){

            if(num[i] != 0){

               cout << num[i];

            }else{

               count++;

            }

         }

         for(i=0;i<count;i++){

            cout << '0';


         }





      }





   }



   return 0;

}
