// Shubhanshu Verma (SV)

#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

long int arr[500000];

int main() {

   long int n;
   cin >> n;

   long int i,j,k,l;
   long long int sum = 0;
   long long int temp1,temp2,temp3;
   long int x,y,z;
   int hope1,hope2,hope3;
   int count = 0;

   for(i=0;i<n;i++){

      cin >> arr[i];
      sum += arr[i];

   }

   if(sum % 3 != 0){

      cout << "0" ;

   }else{

         temp1 = 0;

         for(j=0;j<n;j++){

            temp1 += arr[j];
         

            if(temp1 == sum/3){

               count++;

            }

         }

   }

   if(count < 2){

      count = 0;

   }else{

      count = count*(count+1)/2;

   }

   cout << count;



   return 0;

}
