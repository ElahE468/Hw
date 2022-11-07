#include <iostream> 

using namespace std;

 int main() {
     int x,y,z;
     float s;
     cin>>x;
     cin>>y;
     cin>>z;
     s= (float)((x-y)*(x+z))/((x+y+z)*(x+y+z)+1);
     cout << s;
	
	
	}
