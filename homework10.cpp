#include <iostream>
#include <vector>
#include <unordered_map>
#include <sstream>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<long long, int> num_map;
    
    for (int i = 0; i < nums.size(); i++) {
        long long complement = static_cast<long long>(target) - nums[i];
        
        if (num_map.find(complement) != num_map.end()) {
            return {num_map[complement], i};
        }
        
        num_map[nums[i]] = i;
    }
    
    return {};
}

void printArray(const vector<int>& nums) {
    cout << "[";
    for (size_t i = 0; i < nums.size(); i++) {
        cout << nums[i];
        if (i < nums.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]";
}

int main() {
    vector<int> nums;
    int target;
    string input;
    
    cout << "Введите элементы массива через пробел: ";
    getline(cin, input);
    stringstream ss(input);
    int num;
    while (ss >> num) {
        nums.push_back(num);
    }
    
    cout << "Введите необходимую сумму: ";
    cin >> target;
    
    cout << "\nВходные данные:" << endl;
    cout << "nums = ";
    printArray(nums);
    cout << endl;
    cout << "target = " << target << endl;
    cout << endl;
    
    vector<int> result = twoSum(nums, target);
    
    cout << "Выходные данные:" << endl;
    if (!result.empty()) {
        cout << result[0] << ", " << result[1] << endl;
        
        cout << "\nПроверка: nums[" << result[0] << "] + nums[" << result[1] 
             << "] = " << nums[result[0]] << " + " << nums[result[1]] 
             << " = " << (nums[result[0]] + nums[result[1]]) 
             << " (target = " << target << ")" << endl;
    } else {
        cout << "Решение не найдено (по условию задачи такого быть не должно)" << endl;
    }
    
    return 0;
}