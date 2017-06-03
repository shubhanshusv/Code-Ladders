// Shubhanshu Verma (SV)

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

      if(m == 1 && s == 0){

            cout << "0 0" ;

      }else{

            cout << "-1 -1";

      }


   }else{


      nines = s/9;
      rem = s - 9*nines;

      if(rem == 0 && nines!= m){

         nines--;
         rem += 9;

      }

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

         if(m - nines > 1){

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

               for(i=0;i<nines;i++){

                  cout << "9";

               }

               cout << rem +1;
               i++;

               for(i = i; i<m;i++){


                     cout << '0';

               }

         
         }else{


               num[0] = rem;

               for(i=0;i<m;i++){

                  cout << num[i];


               }

               cout << " ";

               for(i=m-1;i>=0;i--){

                  cout << num[i];


               }

               cout << " ";

         }

      }

   }



   return 0;

}
