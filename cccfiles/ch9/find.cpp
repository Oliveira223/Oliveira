#include <iostream>
#include <vector>

using namespace std;

/**
   Find the position of the first value greater than a threshold.
   @param a the vector
   @param t the threshold value
   @return the position of the first value that is greater 
   than t, -1 if none
*/
int find_first_greater(vector<double> a, double t)
{  
   int i = 0;
   while (i < a.size())
   {  
      if (a[i] > t) return i;
      else i++;
   }
   return -1;
}
   
int main()
{  
   vector<double> salaries(5);
   salaries[0] = 35000.0;
   salaries[1] = 63000.0;
   salaries[2] = 48000.0;
   salaries[3] = 78000.0;
   salaries[4] = 51500.0;

   int i = find_first_greater(salaries, 50000);

   if (i > 0)
      cout << "The first salary above 50000 is at index " << i
         << " and is " << salaries[i] << "\n";
   return 0;
}
