#include <iostream>
using namespace std;

void findModes(int input[],int size, int &frequency, int result[], int &result_count)
{
  int count = 1;
  int counter = 0;
  int v  = 0;

  for(int i = 0; i < size; i++)
    {
      for(int j = 0; j < size; j++)
	{
	  if(input[i] == input[j])
	    ++count;
	}
        if(count > counter)
	    {
	      counter = count;
	    }
        else
	    {
	      count = 1;
	    }
    }
  
  for(int i = 0; i < size - 1; i++)
    {
      for(int j = 0; j < size; j++)
	{
	  if(input[i] == input[j])
	     ++count;
	}
       if(count == counter)
	 {
 	   result[v] = input[i];
	   ++ v;
         }
        else
	 {
	   count = 1;
	 }
     }
  for(int i = 0; i < size; i++)   
    {
      cout << "frequency = " << counter << endl;
      cout << "the modes are " << result[i] << endl;
    }
}
