#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	string s;
	cin >> s;

	int i;
   string hello = "hello";

   int count = 0;
   int flag = 0;

   for(i=0;i<s.length();i++){

      if(s[i] == hello[count]){

         count++;

      }

      if(count == 5){

         flag = 1;
         break;

      }

   }

   if(flag == 0){

      cout << "NO" ;

   }else{

      cout << "YES";

   }
   



   return 0;

}
