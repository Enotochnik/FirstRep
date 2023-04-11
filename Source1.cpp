#include <iostream>
#include <vector>
#include <algorithm>


void print(const std::vector<int>& vec);
void read(std::vector<int>& vec);


void print(const std::vector<int>& vec)
{
    for (auto elem : vec)
    {
        std::cout << elem << " ";
    }
}

void read(std::vector<int>& vec)
{
    int size = 0;
    std::cin >> size;
    vec.reserve(size);
    for (int i = 0; i < size; i++)
    {
        int a = 0;
        std::cin >> a;
        vec.push_back(a);
    }
}


int main() {
    std::vector<int> vec;
    read(vec);
    std::sort(vec.begin(), vec.end());
    print(vec);
    return 0;
}