#include <iostream>
#include <vector>

using namespace std;

int main()
{
   vector<int> vec{10, 3};

   for(unsigned int i = 0; i < vec.size(); ++i)
         cout << vec[i] << ",";
    cout << "\n";
    std::cout << "Hello world!\n";

  return 0;
}
