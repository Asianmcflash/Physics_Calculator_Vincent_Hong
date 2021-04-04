#include <iostream>
#include <iomanip>
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
  cout << ds << dsUnits << " " << " / " << dt << dtUnits << " = " << setprecision(5) << v << " " << dsUnits << "/" << dtUnits << endl;
}

void acceleration(double dv, double dt, string dtUnits, string dvUnits)
{
  double a = dv / dt;
  cout << dv << dvUnits << " / " << dt << dtUnits << " = " << setprecision(5) << a << " " << dvUnits << "/" << dtUnits << endl;
}

void newton(double m, double a, string units, string unitsTwo)
{
  double f = m * a;
  cout << m << units << " * " << a << unitsTwo << " = " << setprecision(5) << f << " " << units << "/" << unitsTwo << endl;
}

void weight(double m, string mw)
{
  double w = m * 9.8;
  cout << m << mw << " * g(9.8 for gravity) = " << setprecision(5) << w << mw << endl;
}

void momentum(double m, double v, string mm, string mv)
{
  double p = m * v;
  cout << m << mm << " * " << v << mv << " = " << setprecision(5) << p << " " << mm << " " << mv << "/s" << endl;
}

void miniDetermine(int number)
{
  double v;
  double vZero;
  double a;
  double t;
  double s;
  double sZero;
  double vSquared;
  string units;
  double v_bar;
  string unitsTwo;
  if(number == 1)
  {
    cout << "Enter Velocity(at 0), Acceleration, Time, Measurement for Velocity, and Measurement of Time: ";
    cin >> vZero >> a >> t >> units >> unitsTwo;
    cout << "Entered: " << vZero << " " << a << " " << t << " " << unitsTwo << endl;
    v = vZero + (a * t);
    cout << vZero << units << " + (" << a << " * " << t << ") = " << setprecision(5) << v << " " << units << "/" << unitsTwo << endl;
  }
  else if(number == 2)
  {
    cout << "Enter s0, v0, t, a, and units: ";
    cin >> sZero >> vZero >> t >> a >> units;
    cout << "Entered: " << sZero << " " << vZero << " " << t << " " << a << " " << units << endl;
    s = sZero + (vZero * t) + (0.5 * a * t * t);
    cout << setprecision(5) << s << " " << units << endl;
  }
  else if(number == 3)
  {
    cout << "Enter v0, a, s, s0, and units: ";
    cin >> vZero >> a >> s >> sZero >> units;
    cout << "Entered: " << vZero << " " << a << " " << s << " " << sZero << " " << units << endl;
    vSquared = (vZero * vZero) + (2 * (a * (s - sZero)));
    cout << setprecision(5) << vSquared << " " << units << endl;
  }
  else
  {
    cout << "Enter v, vZero, and units: ";
    cin >> v >> vZero >> units;
    cout << "Entered: " << v << " " << vZero << " " << units << endl;
    v_bar = 0.5 * (v + vZero);
    cout << setprecision(5) << v_bar << " " << units << endl;
  }
}

void determine(string letter)
{
  int number;
  double ds;
  string dsUnits;
  double dt;
  string dtUnits;
  double dv;
  string dvUnits;
  double m;
  double a;
  string units;
  string unitsTwo;
  double w;
  string mw;
  double v;
  string mm;
  string mv;
  if(letter == "A" || letter == "a")
  {
    cout << "A: Velocity Calculator" << endl;
    cout << "Enter Speed Units(Kg, Mph, etc), Speed(Number), Time measurement(Hr, Min, etc), and Time(How Long), respectively: ";
    cin >> dsUnits >> ds >> dtUnits >> dt;
    cout << "Entered: " << dsUnits << " " << ds << " " << dtUnits << " " << dt << endl;
    velocity(ds, dt, dtUnits, dsUnits);
  }
  else if(letter == "B" || letter == "b")
  {
    cout << "B: Acceleration Calculator" << endl;
    cout << "Enter Speed Units(Kg, Mph, etc), Speed(Number), Time measurement(Hr, Min, etc), and Time(How Long), respectively: ";
    cin >> dvUnits >> dv >> dtUnits >> dt;
    cout << "Entered: " << dvUnits << " " << dv << " " << dtUnits << " " << dt << endl;
    acceleration(dv, dt, dtUnits, dvUnits);
  }
  else if(letter == "C" || letter == "c")
  {
    cout << "C: Motion Calculator" << endl;
    cout << "1. Ma\n2. Ms\n3. Mv2\n 4. Mv" << endl;
    cout << "Enter 1 - 4: ";
    cin >> number;
    miniDetermine(number);
  }
  else if(letter == "D" || letter == "d")
  {
    cout << "D: Newton's Second Law" << endl;
    cout << "Enter Mass, Acceleration, Mass Measurement, and Acceleration Measurement, respectively: ";
    cin >> m >> a >> units >> unitsTwo;
    cout << "Entered: " << m << " " << a << " " << units << unitsTwo << endl;
    newton(m, a, units, unitsTwo);
  }
  else if(letter == "E" || letter == "e")
  {
    cout << "Goodbye" << endl;
  }
  else if(letter == "F" || letter == "f")
  {
    cout << "F: Weight(Earth)" << endl;
    cout << "Enter Weight, and Measurement of Weight, respectively";
    cin >> w >> mw;
    cout << "Entered: " << w << " " << mw << endl;
    weight(w, mw);
  }
  else if(letter == "G" || letter == "g")
  {
    cout << "G: Momentum" << endl;
    cout << "Enter Mass, Velocity, Measurement of Mass, and Measurement of Velocity, respectively";
    cin >> m >> v >> mm >> mv;
    cout << "Entered: " << m << " " << v << " " << mm << " " << mv << endl;
    momentum(m, v, mm, mv);
  }
  else if(letter == "X" || letter == "x")
  {
    string reset = "\x1b[0m";
    cout << reset; 
    cout << "\033[2J\033[1;1H";
    system("clear");
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
    cout << reset << endl;
    determine(letter);
  }while(letter != "e" && letter != "E");
  return 0;
}