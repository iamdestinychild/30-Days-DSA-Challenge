#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        // Start from the least significant digit
        for (int i = n - 1; i >= 0; i--) {
            // Increment the current digit
            digits[i]++;
            
            // If the current digit becomes 10, set it to 0 and carry over to the next digit
            if (digits[i] == 10) {
                digits[i] = 0;
            } else {
                // If the current digit is not 10, we can stop since there is no carry-over
                return digits;
            }
        }
        
        // If we reach here, it means there is a carry-over from the most significant digit
        // In this case, we need to add an additional digit at the beginning
        digits.insert(digits.begin(), 1);
        
        return digits;
    }
};

int main() {
    Solution solution;
    
    // Example 1
    vector<int> digits1 = {1, 2, 3};
    vector<int> result1 = solution.plusOne(digits1);
    for (int num : result1) {
        cout << num << " ";
    }
        cout << endl; // Output: 1 2 4
    
    // Example 2
    vector<int> digits2 = {4, 3, 2, 1};
    vector<int> result2 = solution.plusOne(digits2);
    for (int num : result2) {
        cout << num << " ";
    }
        cout << endl; // Output: 4 3 2 2
    
    // Example 3
    vector<int> digits3 = {9};
    vector<int> result3 = solution.plusOne(digits3);
    for (int num : result3) {
        cout << num << " ";
    }
        cout << endl; // Output: 1 0
    
    return 0;
}
