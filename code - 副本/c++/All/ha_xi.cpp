#include<iostream>
#include<unordered_map>
#include<string>
//没有使用using namespace std;

int main(){
    
    // 创建一个字典，键为 string 类型，值为 int 类型
    std::unordered_map<std::string, int> ageMap;
    // 1. 插入元素 两个方式
    ageMap["Alice"] = 25;          // 使用 [] 运算符
    ageMap.insert({"Bob", 30});    // 使用 insert 方法
    // 2. 访问元素
    std::cout << "Alice's age: " << ageMap["Alice"] << std::endl;
    // 3. 查找元素（推荐使用 find，避免 [] 意外插入）
    auto it = ageMap.find("Bob");
    if (it != ageMap.end()) {
        std::cout << "Found Bob, age: " << it->second << std::endl;
    }
    // 4. 遍历所有元素（注意：unordered_map 顺序不定）
    for (const auto& pair : ageMap) {
        std::cout << pair.first << " -> " << pair.second << std::endl;
    }

    return 0;
}