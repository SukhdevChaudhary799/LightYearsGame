#include <stdio.h>
#include <memory>
#include <map>
#include <unordered_map>

namespace ly{

template<typename T>
using unique = std::unique_ptr<T>;

template<typename T>
using shared = std::shared_ptr<T>;

template<typename T>
using weak = std::weak_ptr<T>;

template<typename T>
using List = std::vector<T>;

template<typename keyType, typename valueType, typename hash = std::hash<keyType>>
using Map = std::map<keyType, valueType, hash>;

template<typename keyType, typename valueType, typename hasher = std::hash<keyType>>
using Dictionary = std::unordered_map<keyType, valueType, hasher>;

    
#define LOG(M, ...) printf(M "\n", ##__VA_ARGS__)

}