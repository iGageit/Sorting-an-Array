#include <iostream>
#include <cstdlib> 
#include <ctime> 

// use this to print with cout << 
using namespace std;

int main () 
{
// How many numbers do you want? 
// we picked 103 for this program. 
int size = 130; 
// size is appied to the array "value"
 int value[size];
 
 // randomize the data
 // read more on srand: http://www.cplusplus.com/reference/cstdlib/srand/
 srand((unsigned)time(0)); 
     cout << "Random array of " << size << " numbers" << endl; 
     // a for loop to randomsize the data
    for(int i=0; i<size; i++){ 
        value[i] = (rand()%100)+1; 
         // print to show its working. 
        cout << value[i] << " " ;
 } 
// new line
 cout << endl; 

// Flag variable is used as a signal in programming to let the program know that a certain condition has met. It usually acts as a boolean variable indicating a condition to be either true or false.

int flag=0;

while (flag < size)
{
	for (int index=1; index < size; index++) 
	{
		if (value[index-1] > value[index])
		{
			int temp = value[index-1];
			value[index-1] = value[index];
			value[index]= temp;			
		}		
	}
	flag++;
}
cout << endl; 
 cout << "Array in order of " << size << " numbers" << endl; ; 
for (int i =0; i<size; i++)
	cout << value[i] << " ";
cout << endl;

 
return 0;
}
//dude you crazy. how did you do that so fast?

// GOOGLE! :)