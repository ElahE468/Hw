 #include<iostream>
 
 using namespace std;
 
 int main()
 {
 	int A[5], B[5], c;
 	for(int i=0; i<5; i++)
 	{
 		cin>>A[i];
	 }
     for(int i=0; i<5; i++)
     {
     	cin>>B[i];
	 }
	 for(int i=0; i<5; i++)
	 {
	 	c = A[i];
	 	A[i] = B[i];
	 	B[i] = c;
	 	cout<<A[i]<< "\t" << B[i]<<endl;
	 }
 }
