 #include<iostream>
 #define ARRY_SIZE 10
 using namespace std;
 
 int main()
 {
 	int A[ARRY_SIZE] = {1,9,12,15,17,20,22,30,32}, tmp;
 	cin>> A[9];
 	for(int i = 1; i < ARRY_SIZE; ++i)
 	{
 		for (int j = 0; j < (ARRY_SIZE-i); ++j)
 		{
 			if (A[j]>A[j+1])
 			{
 				tmp = A[j];
 				A[j] = A[j+1];
 				A[j+1] = tmp;
			 }
		 }
	 }
	 for(int i=0;i<10;i++)
	 {
	 	cout << A[i] << " ";
	 }
 }
