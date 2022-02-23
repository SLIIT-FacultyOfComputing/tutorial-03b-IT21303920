#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
  char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
  
 cout << "No" << setw(13)<< "Name" << setw(14) << "Marks" << endl;
  
 for (int r = 0; r < 5; r++) {
     cout <<  r+1 << setw(15-1)
          <<  names[r] << setw(15-1)
          << setiosflags(ios :: fixed ) << setprecision(2)
          << marks[r] << endl;
 }
}