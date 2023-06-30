# Hash Table
A hash table is a data structure that stores data in a relational manner. In a hash table, each data value is stored in an array format with its own unique index value. Accessing the data becomes very fast if we know the index of the searched data.

As a result, it becomes a data structure where insertion and retrieval operations are very fast regardless of the size of the data. A hash table uses an array as a storage medium and determines the index where an item should be added or found using a hash technique.

## Hash table karmaşıklığı: arama (search), ekleme (insert), silme (delete)

All: amortized O(1), worst O(n)

[#complexity](complexity.md) [#hashtable](Hash_Table.md)

## Implementation of a Hash Table
A hash table is a data structure that maps keys to values. It is a technique of converting an array of keys into an array of slots. It is used to implement an associative array, which can map keys to values. A Hash Table (hash table) uses a hash function to compute an index into an array of slots where the desired value can be found.

![hash table](https://miro.medium.com/v2/resize:fit:720/format:webp/1*3jxEppESh9LLK14YMQ-ocA.png)

- Array as a linked list
- Hash code function to determine the array index

Resize the array size when a threshold is exceeded

If there is an excessively unbalanced distribution, it can be replaced with a BST array.