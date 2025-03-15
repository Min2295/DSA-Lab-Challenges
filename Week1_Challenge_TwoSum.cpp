#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// Class Definition
class TwoSumSolver {
public:
    // Method to find two sum indices
    vector<int> findTwoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap; // Store number -> index
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i]; // Find the required pair
            
            // If complement is found in the map, return indices
            if (numMap.find(complement) != numMap.end()) {
                return {numMap[complement], i};
            }
            numMap[nums[i]] = i; // Store current number and its index
        }
        return {}; // No solution found (this case won't happen as per the question)
    }
};

// Main function
int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    TwoSumSolver solver;
    vector<int> result = solver.findTwoSum(nums, target);

    // Print the result
    if (!result.empty()) {
        cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No solution found!" << endl;
    }

    return 0;
}
