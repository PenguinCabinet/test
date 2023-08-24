#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cstddef>
#include <cstdint>
#include <cstring>

const int N=1<<15;

int func(uint32_t i)
{
  int* mem=(int*)malloc(sizeof(int)*N);
  for(int i=0;i<N;i++)
    mem[i]=i;

  int temp=0;
  if(i==N)
    temp=mem[N];
  else
    temp=mem[i%N];

  free(mem);
  return temp;
}

extern "C"
int LLVMFuzzerTestOneInput(uint32_t i)
{
    func(i);
    return 0;
}