#include <iostream>
#include <unordered_map>
#include <vector>

std::vector<int> twoSum(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> hashMap; // 存储值到索引的映射
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i]; // 需要找的补数
        if (hashMap.find(complement) != hashMap.end()) { // 如果补数存在于哈希表中
            return {hashMap[complement], i}; // 返回补数的索引和当前索引
        }
        hashMap[nums[i]] = i; // 将当前值及其索引存入哈希表
    }
    return {}; // 如果没有找到解，返回空向量
}

