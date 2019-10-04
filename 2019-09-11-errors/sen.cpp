include# <cmath>
#include <fstream>


int main (void)
{
  std:: ofstream fout("datos.txt");
  const double x  = 0.123; //RAD
  const int N = 10;
  double sum = x;
  double term = x;
  for (int ii = 2; ii < N; ++ii){
    term = term*(-1)*x*x/((2*ii)*(2*ii+1));
    sum += term;
fout << ii << "\t" << term << "\t" << sum << "\t" << std::sin(x) << "\n";
  }
  fout.close();
  
  return 0;

}

