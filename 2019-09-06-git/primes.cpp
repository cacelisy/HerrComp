#include <cstdio>

int isprime(int a);
int sumprimes(int imin, int imax);

int main(void)
{
  std::printf("isprime(%d) = %d\n", 7, isprime(7));
  std::printf("sumprimes(%d, %d) = %d\n", 50, 1000000, sumprimes(50, 1000000));
  
  return 0;
}

int isprime(int a)
{
  for (int ii = 2; ii < a/2; ++ii) {
    if (a%ii == 0) return 0;
  }
  return 1;
}

int sumprimes(int imin, int imax)
{
  int sum = 0;
  for (int ii = imin; ii <= imax; ++ii) {
    if (isprime(ii))
      sum += ii;
  }
  return sum;
}
