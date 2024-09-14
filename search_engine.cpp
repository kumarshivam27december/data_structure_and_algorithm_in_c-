#include <iostream>
#include <vector>
#include <unordered_map>
#include <sstream>
#include <algorithm>

// Function to split a string into words
std::vector<std::string> split(const std::string &str) {
    std::vector<std::string> words;
    std::stringstream ss(str);
    std::string word;
    while (ss >> word) {
        words.push_back(word);
    }
    return words;
}

// Function to build an inverted index from a list of documents
std::unordered_map<std::string, std::vector<int>> buildIndex(const std::vector<std::string> &documents) {
    std::unordered_map<std::string, std::vector<int>> index;
    
    for (int i = 0; i < documents.size(); ++i) {
        std::vector<std::string> words = split(documents[i]);
        for (const std::string &word : words) {
            std::string lowerWord = word;
            std::transform(lowerWord.begin(), lowerWord.end(), lowerWord.begin(), ::tolower);
            index[lowerWord].push_back(i);
        }
    }
    
    return index;
}

// Function to search for a word in the index
std::vector<int> search(const std::unordered_map<std::string, std::vector<int>> &index, const std::string &query) {
    std::string lowerQuery = query;
    std::transform(lowerQuery.begin(), lowerQuery.end(), lowerQuery.begin(), ::tolower);
    
    auto it = index.find(lowerQuery);
    if (it != index.end()) {
        return it->second;
    } else {
        return {};
    }
}

// Main function
int main() {
    // Sample documents
    std::vector<std::string> documents = {
        "Hello World",
        "The quick brown fox",
        "Hello from the other side",
        "World of programming",
        "Quick brown fox jumps"
    };
    
    // Build the index
    auto index = buildIndex(documents);
    
    // Query to search for
    std::string query;
    std::cout << "Enter search query: ";
    std::getline(std::cin, query);
    
    // Perform search
    std::vector<int> results = search(index, query);
    
    // Display results
    if (!results.empty()) {
        std::cout << "Found in documents: ";
        for (int docId : results) {
            std::cout << docId << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "No documents found for query: " << query << std::endl;
    }
    
    return 0;
}
