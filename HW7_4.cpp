 #include<iostream>
 
 using namespace std;
 
 int main(){
 	     int m, n, result;
 	     cin>> m >> n;
 	     
 	     if(n > m){
 	     	    int s = n;
 	     	    n = m;
  	            m = s;
		  }
		  
         for(int i=1; i <= n; i++){
   	            if(m % i == 0 && n % i ==0){
           	           result = i;
				   }
		 }
		 
		 cout<<result;
 }
