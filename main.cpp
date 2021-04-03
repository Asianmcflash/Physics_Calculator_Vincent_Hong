#include <iostream>
using namespace std;

void showMenu()
{
  cout << "\nMENU" << endl; 
  cout << "A: Velocity Calculator" << endl; 
  cout << "B: Acceleration Calculator" << endl; 
  cout << "C: Motion Calculator" << endl; 
  cout << "D: Newton's Second Law" << endl; 
  cout << "E: Exit" << endl;
  cout << "F: Weight(Earth)" << endl;
  cout << "G: Momemtum" << endl;
  cout << "X: clear the screen" << endl;  
}



void velocity(double ds, double dt, string dtUnits, string dsUnits)
{
  double v = ds / dt;
  cout << v << " " << dsUnits << "/" << dtUnits << endl;
}

double acceleration(double dv, double dt, string dtUnits, string dvUnits)
{
  
}

double motion()
{

}

double newton()
{

}

double weight()
{

}

double momemtum()
{

}

void determine(string letter)
{
  double ds;
  string dsUnits;
  double dt;
  string dtUnits;
  double dv;
  string dvUnits;
  if(letter == "A" || letter == "a")
  {
    cout << "A: Velocity Calculator" << endl;
    cout << "Enter dsUnits, ds, dtUnits, dt, respectively: ";
    cin >> dsUnits >> ds >> dtUnits >> dt;
    cout << dsUnits << " " << ds << " " << dtUnits << " " << dt << endl;
    velocity(ds, dt, dtUnits, dsUnits);
  }
  else if(letter == "B" || letter == "b")
  {
    cout << "B: Acceleration Calculator" << endl;
    cout << "Enter dvUnits, dv, dtUnits, dt, respectively: ";
    cin >> dvUnits >> dv >> dtUnits >> dt;
    cout << dvUnits << " " << dv << " " << dtUnits << " " << dt << endl;
    acceleration(dv, dt, dtUnits, dvUnits);
  }
  else if(letter == "C" || letter == "c")
  {
    
  }
  else if(letter == "D" || letter == "d")
  {
    
  }
  else if(letter == "E" || letter == "e")
  {
    
  }
  else if(letter == "F" || letter == "f")
  {
    
  }
  else if(letter == "G" || letter == "g")
  {
    
  }
  else if(letter == "X" || letter == "x")
  {
    
  }
  else
  {
    cout << "Invalid input: try again." << endl;
  }
  
}

int main() {
  string letter = "";
  string reset = "\x1b[0m";
  do
  {
    showMenu();
    cout << "Enter a letter from above.(No spaces)" << endl;
    cin >> letter;
    cout << reset;
    determine(letter);
  }while(letter != "e" && letter != "E");
  return 0;
}