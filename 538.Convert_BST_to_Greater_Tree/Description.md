# 538. Convert BST to Greater Tree
## Description
Given a Binary Search Tree (BST), convert it to a Greater Tree such that every key of the original BST is changed to the original key plus sum of all keys greater than the original key in BST.

**Example:**
```C++
Input: The root of a Binary Search Tree like this:
              5
            /   \
           2     13
```
```C++
Output: The root of a Greater Tree like this:
             18
            /   \
          20     13
```