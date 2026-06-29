#include<iostream>
#include<vector>

int main() {
    std::vector<int> vec = {1,2,5,8,9};

    //for minimum element
    int min = vec[0];
    for(int i=1; i<vec.size(); i++){
        if(vec[i]<min){
            min = vec[i];
        }
    }
    std::cout << "Minimum element: " << min << std::endl;
    return 0;
}