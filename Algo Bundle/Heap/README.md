# Heap

## Binary Heap
A binary heap is a complete binary tree that efficiently stores data in order to obtain the maximum or minimum element, depending on its structure. A binary heap is a binary tree that has the maximum or minimum heap property. It is also known as a min heap or a max heap.

## Min Heap
In a Min Heap, the root element (the initial element of the tree) must be the minimum among all the elements present in the binary heap. The same property should hold recursively for all nodes (node: an element of the tree) in the binary tree. You can think of a Max Heap as the opposite, where the root element is the maximum among all the elements.

**Unlike a binary search tree (BST), where a smaller element is always placed in the left subtree and a larger element in the right subtree, in a binary heap, a smaller element can be located on either the left or right side without a specific ordering.

## Min Heap Examples
       10            10
      /   \        /   \  
     20  100      15    30  
     /           / \    / \
    30          40 50  100 40

## Notation of Binary Heap
Binary Heap is typically represented using arrays.
The root element should be located at index Arr[0].

* Arr[(i-1)/2] -----> It returns the parent node.

* Arr[(2*i)+1] -----> It returns the left child node.

* Arr[(2*i)+1] ------> It returns the right child node.

## Some Operators Commonly Used In Heaps
getMin(): Returns the root element of a min heap. The time complexity of this operator is O(1). In the case of a max heap, it would be getMax().

insert(): Inserting a new element takes O(log N) time. If the newly inserted element at the end of the tree is greater than its parent, no further action is needed. Otherwise, we need to move upwards to fix the violated heap property. We swap with the parent nodes until no violation remains.

delete(): Deleting an element takes O(log N) time. To delete an element, we replace it with negative infinity and then call decreaseKey(). After decreaseKey(), the negative infinity value should percolate up to the root.

## Heapsort Algorithm
* Create a maximum heap from an array (from index n-1 to 0):
    1) Swap the largest element (element at index 0) with element at index i.
    2) Heapify the remaining elements (from 0 to i-1) by bringing the root element to its correct position. Continue swapping the element with the largest child node until there is no violation of the maximum heap property in the node.

Here is the step-by-step process:

1) Start with the given array.
2) Initialize i with n-1 (the last index of the array).
3) Repeat the following steps until i >= 0:
     a) Swap the element at index 0 with the element at index i.
     b) Perform heapify operation on the elements from 0 to i-1.
     c) Decrement i by 1.
4) After completing the above steps, the array will represent a maximum heap.

Please note that this process assumes that the array initially does not satisfy the maximum heap property and we are converting it into a maximum heap.