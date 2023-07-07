#include <iostream>
#include <vector>
using namespace std;

//An example code for the Hash Table algorithm.

const int TABLE_SIZE = 10;

class HashNode {
public:
    int key;
    int value;
    HashNode* next;

    HashNode(int key, int value) : key(key), value(value), next(nullptr) {}
};

class HashTable {
private:
    std::vector<HashNode*> table;

public:
    HashTable() {
        table.resize(TABLE_SIZE, nullptr);
    }

    ~HashTable() {
        for (auto node : table) {
            while (node != nullptr) {
                HashNode* current = node;
                node = node->next;
                delete current;
            }
        }
    }

    int hashFunction(int key) {
        return key % TABLE_SIZE;
    }

    void insert(int key, int value) {
        int hashIndex = hashFunction(key);

        HashNode* newNode = new HashNode(key, value);
        if (table[hashIndex] == nullptr) {
            table[hashIndex] = newNode;
        } else {
            HashNode* currentNode = table[hashIndex];
            while (currentNode->next != nullptr) {
                currentNode = currentNode->next;
            }
            currentNode->next = newNode;
        }
    }

    int get(int key) {
        int hashIndex = hashFunction(key);

        HashNode* currentNode = table[hashIndex];
        while (currentNode != nullptr) {
            if (currentNode->key == key) {
                return currentNode->value;
            }
            currentNode = currentNode->next;
        }

        return -1;  // Key not found
    }

    void remove(int key) {
        int hashIndex = hashFunction(key);

        HashNode* currentNode = table[hashIndex];
        HashNode* prevNode = nullptr;

        while (currentNode != nullptr) {
            if (currentNode->key == key) {
                if (prevNode == nullptr) {
                    table[hashIndex] = currentNode->next;
                } else {
                    prevNode->next = currentNode->next;
                }
                delete currentNode;
                return;
            }
            prevNode = currentNode;
            currentNode = currentNode->next;
        }
    }
};

int main() {
    HashTable hashTable;

    hashTable.insert(1, 10);
    hashTable.insert(2, 20);
    hashTable.insert(11, 30);

    cout << "Value for key 1: " << hashTable.get(1) << endl;
    cout << "Value for key 2: " << hashTable.get(2) << endl;
    cout << "Value for key 11: " << hashTable.get(11) << endl;
    cout << "Value for key 5: " << hashTable.get(5) << endl;

    hashTable.remove(2);
    cout << "Value for key 2 after removal: " << hashTable.get(2) << endl;

    return 0;
}
