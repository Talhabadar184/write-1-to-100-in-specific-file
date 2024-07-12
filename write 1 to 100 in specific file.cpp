#include<iostream> 
#include<fstream> 
using namespace std; 
int main() 
{ 
int a;
fstream notes; 

	ofstream NOTES("NOTES.TXT");
for(a=1;a<=100;a++)
{
	cout<<endl<<a;
	NOTES<<a;
	
 } 
NOTES.close(); 
return 0; s
}
z