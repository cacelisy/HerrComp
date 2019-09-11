#include<cstdio>

int main(void)
{
  double eps = 1.0;
  double one = 1.0;
    for(int ii= 0.0; ii < 1000; ++ii){
      eps /= 2.0;
      one = 1.0 + eps;
      std::printf("%10d %24.16e %24.16e\n", ii, one, eps);
    }    
  return 0;
}

