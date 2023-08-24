#include <stack>
#include <cstdio>
#include <cstddef>
#include <cstdint>
#include <cstring>

int func(uint32_t i)
{
  const int fib[]={1,1,2,3,5,8};
  return fib[i];
}

extern "C"
int LLVMFuzzerTestOneInput(uint32_t i)
{
    func(i);
    return 0;
}
