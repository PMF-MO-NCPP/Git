#include <iostream>
#include <vector>

int main()
{
   int x =0;
   int y(0);
   int z{0};
   std::vector<int> vec{16, 3, 5};

   for(auto x : vec)
         cout << x << ",";
    std::cout << "\n";
    std::cout << "Hello world!!!\n";

  return 0;
}
