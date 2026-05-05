# 🚀 100 Days of LeetCode (C++)

> Starting my journey to master DSA and become a GenAI Engineer 💻🔥  

---

## 📅 Progress

- ✅ Day 1 - Rotate Array (LeetCode 189)  
- ✅ Day 2 - Practice + STL  
- ✅ Day 3 - Edge Cases + Debugging  
- ✅ Day 4 - Valid Palindrome  
- ✅ Day 5 - Remove All Occurrences (LC 1910)  
- ✅ Day 6 - Matrix Traversal + Spiral Matrix 🌀
- ✅ Day 7 - Search in 2D Matrix (Binary Search)
- ✅ Day 8 - Zigzag Conversion (LeetCode)

- ✅ Day 09 - Rotate Image

## 📌 Problem Statement
You are given an `n x n` 2D matrix representing an image. Rotate the image by **90 degrees clockwise** in-place.

## 🧠 Approach
To rotate the matrix without using extra space:

1. **Transpose the matrix**  
   Convert rows into columns.

2. **Reverse each row**  
   This gives the final 90° clockwise rotated matrix.




## 🧠 What I'm Learning

- Data Structures & Algorithms (DSA)
- Problem Solving Skills
- C++ STL
- Debugging & Edge Cases

---

✅ Day 10 - Rotate String

## 📌 Problem Statement
Given two strings `s` and `goal`, return true if `s` can become `goal` after some number of shifts.

A shift means moving the first character of the string to the end.

## 🧠 Approach

Key observation:
If `goal` is a rotation of `s`, then it must be a substring of `s + s`.

### Steps:
1. Check if lengths are equal
2. Concatenate string with itself → `s + s`
3. Check if `goal` is present in it

✅ Day 11 - Shuffle String 🔀

## 📌 Problem
You are given a string `s` and an integer array `indices`.  
The task is to rearrange the string such that each character moves to the position specified by `indices[i]`.

---

## 🧠 Approach
- Create a result string of same size
- Place each character at its correct index using `indices`
- Return the final string

✅ Day 12 - Count Primes (Sieve of Eratosthenes)

## 🧩 Problem
Given an integer `n`, return the number of prime numbers that are strictly less than `n`.

### Example:
Input: n = 10  
Output: 4  
Explanation: Prime numbers less than 10 are 2, 3, 5, 7.

---

## 🚀 Approach: Sieve of Eratosthenes

- Create a boolean array `isPrime` of size `n`
- Initially mark all numbers as prime
- Start from 2 and mark all multiples as non-prime
- Count remaining prime numbers

---

## ⏱️ Complexity
- Time: O(n log log n)
- Space: O(n)

✅Day 13 - Remove Duplicates from Sorted Array

## 🧩 Problem
Given a sorted array, remove duplicates in-place such that each element appears only once and return the number of unique elements.

## 🚀 Approach
- Used **Two Pointer Technique**
- One pointer (`i`) keeps track of unique elements
- Another pointer (`j`) traverses the array
- When a new element is found → place it next in sequence

 ✅Day 14 - Container With Most Water

## 🔗 Problem
Container With Most Water (LeetCode 11)

## 🧠 Approach
Used Two Pointer Technique:
- Start with two ends of array
- Calculate area
- Move pointer with smaller height

## ⏱ Time Complexity
O(n)

## 💾 Space Complexity
O(1)

## 🚀 Key Learning
- Optimization from brute force to linear time
- Two pointer strategy is powerful in array problems

## 📌 Example
Input:
[1,8,6,2,5,4,8,3,7]

Output:
49

✅ Day 15 - Two Sum

## 🧩 Problem
Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to target.

## 🚀 Approach
- Used HashMap (unordered_map)
- Store value and index
- Check if (target - current element) exists

## ⏱ Complexity
- Time: O(n)
- Space: O(n)

## 💡 Key Learning
Hashing helps in reducing time complexity significantly compared to brute force.

✅ Day 16 - Valid Anagram

## Problem
Check if two strings are anagrams.

## Approach
Used frequency array to count characters.

## Complexity
- Time: O(n)
- Space: O(1)

## Example
Input: "anagram", "nagaram"  
Output: true


✅ Day 17 - Valid Parentheses

## Problem
Check if brackets in a string are valid.

## Approach
Used stack:
- Push opening brackets
- Match and pop for closing brackets

## Complexity
- Time: O(n)
- Space: O(n)

## Example
Input: "()[]{}"
Output: true

✅Day 18 - Group Anagrams

## Problem
Given an array of strings, group the anagrams together.

## Example
Input: ["eat","tea","tan","ate","nat","bat"]  
Output: [["eat","tea","ate"],["tan","nat"],["bat"]]

## Approach
- Sort each string → use it as a key
- Store in hashmap (key → list of anagrams)

## Complexity
- Time: O(n * k log k)
- Space: O(n)

## Learning
- Learned grouping using hashmap
- Understood how sorting helps identify anagrams

  
✅ Day 19 - Longest Common Prefix

## 🧠 Problem
Find the longest common prefix string among an array of strings.

## 🚀 Approach
- Compare characters index-wise across all strings
- Stop at mismatch

## ⏱ Complexity
- Time: O(n * m)
- Space: O(1)

✅Day 20 - Add Two Numbers (LeetCode #2)

## 🔹 Problem
You are given two non-empty linked lists representing two non-negative integers.  
The digits are stored in reverse order, and each node contains a single digit.  

Add the two numbers and return the sum as a linked list.

## 🔹 Approach
- Traverse both linked lists
- Add digits with carry
- Store result in new linked list

## 🔹 Time Complexity
O(max(n, m))

## 🔹 Space Complexity
O(max(n, m))

## 🔹 Key Concept
Linked List + Carry Handling

✅ Day 21 - Find Pivot Index

## Problem
Find index where left sum = right sum.

## Approach
- Calculate total sum
- Traverse and maintain left sum
- Check condition

## Complexity
- Time: O(n)
- Space: O(1)

## Learning
- Prefix sum concept
- Efficient traversal

✅ Day 22 - Maximum Subarray (Kadane's Algorithm)

## Problem
Find the contiguous subarray with the largest sum.

## Approach
- Use Kadane’s Algorithm
- At each step, decide to continue or restart subarray

## Complexity
- Time: O(n)
- Space: O(1)

## Learning
- Greedy decision making
- Sliding window intuition
- Handling negative numbers


✅Day 23 - Intersection of Two Arrays

## Problem
Find unique common elements between two arrays.

## Approach
- Use set for fast lookup
- Traverse second array and check presence

## Complexity
- Time: O(n + m)
- Space: O(n)

## Learning
- HashSet usage
- Duplicate handling

✅Day 24 - Product of Array Except Self

## 🔗 Problem
https://leetcode.com/problems/product-of-array-except-self/

## 🧠 Approach

We calculate the result using two passes:

1. Prefix pass → store product of all elements before index
2. Suffix pass → multiply product of all elements after index

This avoids division and works in O(n) time.

## ⚡ Complexity

- Time Complexity: O(n)
- Space Complexity: O(1) (excluding output array)

## 💻 Language
C++

## 🚀 Key Learning

- Prefix & Suffix technique
- Space optimization
- Handling constraints without division

✅ Day 25 - Subarray Sum Equals K

## 🔗 Problem
https://leetcode.com/problems/subarray-sum-equals-k/

## 🧠 Approach

We use Prefix Sum + HashMap:

- Maintain running sum
- Check if (sum - k) exists in map
- If yes → valid subarray found

Store frequency of prefix sums in map.

## ⚡ Complexity

- Time Complexity: O(n)
- Space Complexity: O(n)

## 💻 Language
C++

## 🚀 Key Learning

- Prefix sum pattern
- Hashing for optimization
- Counting subarrays efficiently

✅ Day 26 - Longest Consecutive Sequence

## 🔗 Problem
https://leetcode.com/problems/longest-consecutive-sequence/

## 🧠 Approach

- Store all elements in a HashSet
- Only start counting when (num - 1) is NOT present
- Expand forward to count consecutive elements

This ensures O(n) complexity.

## ⚡ Complexity

- Time Complexity: O(n)
- Space Complexity: O(n)

## 💻 Language
C++

## 🚀 Key Learning

- Using HashSet for fast lookup
- Avoiding redundant computations
- Sequence detection pattern

---

---
---
--------------------------------------------------------------------------------------------------------------------------------------------------------------------
## 🎯 Goals

- 🚀 Build strong DSA foundation  
- 💼 Crack top tech roles  
- 🤖 Become a GenAI Engineer  

---

## 📌 Rules I Follow

- Solve problems daily  
- Push code to GitHub  
- Stay consistent no matter what  

---

## 🔥 Quote

> Consistency > Motivation 💯
