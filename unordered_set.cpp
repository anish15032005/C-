#include <iostream>
#include <unordered_set>
#include <string>

// Custom object for demonstration
struct Person {
    std::string name;
    int age;
    
    // Constructor
    Person(std::string n, int a) : name(n), age(a) {}
    
    // Equality operator (required for unordered_set)
    bool operator==(const Person& other) const {
        return name == other.name && age == other.age;
    }
};

// Custom hash function for Person
namespace std {
    template<> 
    struct hash<Person> {
        size_t operator()(const Person& p) const {
            return hash<string>()(p.name) ^ hash<int>()(p.age);
        }
    };
}

int main() {
    // 1. Basic unordered_set with primitive type
    std::unordered_set<int> numbers = {1, 2, 3, 4, 5};
    
    // 2. Insertion methods
    numbers.insert(6);
    numbers.emplace(7);
    numbers.insert(3); // Duplicate (ignored)

    // 3. Deletion
    numbers.erase(4);

    // 4. Lookup operations
    std::cout << "Contains 3? " << (numbers.count(3) ? "Yes" : "No") << "\n";
    auto it = numbers.find(5);
    if(it != numbers.end()) std::cout << "Found 5\n";

    // 5. Iteration (order is undefined)
    std::cout << "\nAll elements: ";
    for(const auto& num : numbers) {
        std::cout << num << " ";
    }

    // 6. Bucket interface
    std::cout << "\n\nBucket Info:";
    std::cout << "\nNumber of buckets: " << numbers.bucket_count();
    std::cout << "\nLoad factor: " << numbers.load_factor();
    std::cout << "\nMax load factor: " << numbers.max_load_factor();

    // 7. Custom object usage
    std::unordered_set<Person> people;
    people.emplace("Alice", 30);
    people.insert(Person("Bob", 25));
    
    // 8. Advanced functions
    numbers.rehash(20);    // Set number of buckets
    numbers.reserve(100);  // Reserve space for elements
    numbers.max_load_factor(0.75);

    // 9. Complete iteration with bucket details
    std::cout << "\n\nDetailed Bucket View:\n";
    for(size_t b = 0; b < numbers.bucket_count(); ++b) {
        std::cout << "Bucket " << b << ": ";
        for(auto bit = numbers.begin(b); bit != numbers.end(b); ++bit) {
            std::cout << *bit << " ";
        }
        std::cout << "\n";
    }

    // 10. Other utilities
    std::cout << "\nSize: " << numbers.size();
    std::cout << "\nIs empty? " << (numbers.empty() ? "Yes" : "No");
    numbers.clear();
    
    return 0;
}