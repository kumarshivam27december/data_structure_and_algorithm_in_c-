#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

// Convert a string to lowercase for case-insensitive comparison
std::string toLower(const std::string& str) {
    std::string lowerStr = str;
    std::transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
    return lowerStr;
}

// Function to search for a query in a document and return whether it's found
bool searchInDocument(const std::string& document, const std::string& query) {
    std::string lowerDocument = toLower(document);
    std::string lowerQuery = toLower(query);
    
    return lowerDocument.find(lowerQuery) != std::string::npos;
}

// Function to search for a query in all documents
void search(const std::vector<std::string>& documents, const std::string& query) {
    bool found = false;
    for (size_t i = 0; i < documents.size(); ++i) {
        if (searchInDocument(documents[i], query)) {
            std::cout << "Document " << i + 1 << ": " << documents[i] << std::endl;
            found = true;
        }
    }

    if (!found) {
        std::cout << "No documents found matching the query: " << query << std::endl;
    }
}

int main() {
    // Sample documents
    std::vector<std::string> documents = {
        "The quick brown fox jumps over the lazy dog.",
        "Search engines help us find information quickly.",
        "C++ is a powerful programming language.",
        "Artificial Intelligence is transforming technology."
    };

    std::string query;
    std::cout << "Enter search query: ";
    std::getline(std::cin, query);

    search(documents, query);

    return 0;
}
