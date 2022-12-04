 #include<iostream>
 #include<math.h>
 
 using namespace std;
 
 int main(){
 	     int n;
 	     cin>> n;
 	     for (int s=2; s<n; s++)
 	     for (int t=2; t*t<=s; t++)
 	     {
	         if (s % t == 0)
	             break;
             else if  (t+1 > sqrt(s)){
             	cout << s << " ";
			 }
		  }
 }
