#include<iostream>
#include<vector>

int main() {
    //for reverse vector
    std::vector<int> vec ={1,2,3,4,5};
    std::cout <<"Original vector:";
    for(const auto& element : vec){
        std::cout << element << " ";
    }
    std::cout << std::endl;
    std::cout<<"Reversed vector:";
    for(int i=vec.size()-1; i>=0; i--){
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}