# STUDENT INFORMATION
- **NAME** : NAOL SISAY
- **ID** : 0590/23
- **COURCE_NAME** : DSA

# ASSIGNMENT 1
- Write an algorithm for finding the smallest number in the list/array?


### ALGORITHIM : for smallest number in the array
1. Start with the first number in the list and assume it is the smallest
2. Compare it with the next number in the list.
3. If the next number is smallest, update the smallest number.
4. Repeat steps 2–3 for all numbers in the list.
5. When you reach the end of the list, the smallest number found is the result.
#### PSUEDOCODE

   Function smallestNumberInArray(arr[], size):

    Initialize minnum = arr[0]
    For i = 1 to size - 1:
        If arr[i] < minnum:
            minnum = arr[i]
    End For
    Return minnum


- Write an algorithm for finding the second or the third largest element?


## ALGOLRITHIM:  for Finding the third largrest number in the array
1. Initialize Three Variables: Create three variables (first, second, and third) to hold the largest, second largest, and third largest unique elements. Initialize them to a very small value (or negative infinity).
2. Iterate Through the Array: Loop through each element in the array.
3. Update the Variables:
    - If the current element is greater than first, update third to second, second to first, and first to the current element.
    - Else if the current element is greater than second and not equal to first, update third to second and second to the current element.
    - Else if the current element is greater than third and not equal to second and not equal to first, update third to the current element.
4. Check for Validity: After the loop, check if third has been updated from its initial value. If it hasn't, it means there are not enough unique elements in the array.
5. Return the Result: Return the value of third if it is valid.

## PSEDOCODE
FUNCTION findThirdLargest(arr):
    IF length of arr < 3 THEN
        RETURN "Not enough unique elements"

    // Initialize three variables to hold the largest, second largest, and third largest
    first = -1
    second = -1
    third = -1

    // Iterate through each element in the array
    FOR each num IN arr DO
        // Check if the current number is greater than the largest
        IF num > first THEN
            // Update the largest, second largest, and third largest
            third = second
            second = first
            first = num
        ELSE IF num > second AND num != first THEN
            // Update the second largest and third largest
            third = second
            second = num
        ELSE IF num > third AND num != second AND num != first THEN
            // Update the third largest
            third = num
        END IF
    END FOR

    // Check if we found a valid third largest
    IF third == -1 THEN
        RETURN "Not enough unique elements"
    ELSE
        RETURN third
    END IF
END FUNCTION


# ASSIGNMENT 2

Implement Pointer sorting algorithm using different sorting algorism and  perform complexity analysis compare the results and write a summary of your findings.


# Sorting Algorithms Using Pointers in C++

- Pointer Selection Sort
- Pointer Insertion Sort
- Pointer Bubble Sort
- Pointer Quick Sort
- Pointer Merge Sort

## Introduction

Sorting algorithms are fundamental in computer science and are used to arrange the elements of a list or array in a specific order (ascending or descending). This project demonstrates how to implement these algorithms using pointers, which allows for efficient memory management and manipulation of data.

## Algorithms

### Pointer Selection Sort
- **Time Complexity**:
  - **Best Case**: O(n²) - The algorithm always goes through the entire array to find the minimum.
  - **Average Case**: O(n²) - The same reasoning applies.
  - **Worst Case**: O(n²) - The same reasoning applies.
- **Space Complexity**: O(1) - It sorts in place, using a constant amount of additional space.

### Pointer Insertion Sort
- **Time Complexity**:
  - **Best Case**: O(n) - When the array is already sorted, it only requires a single pass.
  - **Average Case**: O(n²) - Involves shifting elements for each insertion.
  - **Worst Case**: O(n²) - When the array is sorted in reverse order.
- **Space Complexity**: O(1) - It sorts in place.
  ![image alt](https://github.com/naol13/indu-assignment-/blob/e1bdeb4bffabb09dec07d0fdf123611dde8d6b0d/Screenshot%202025-04-06%20225302.png)








  

### Pointer Bubble Sort
- **Time Complexity**:
  - **Best Case**: O(n) - When the array is already sorted, it only requires a single pass.
  - **Average Case**: O(n²) - Requires multiple passes to sort the array.
  - **Worst Case**: O(n²) - When the array is sorted in reverse order.
- **Space Complexity**: O(1) - It sorts in place.
  

### Pointer Quick Sort
- **Time Complexity**:
  - **Best Case**: O(n log n) - When the pivot divides the array evenly.
  - **Average Case**: O(n log n) - Generally, it performs well with random data.
  - **Worst Case**: O(n²) - When the smallest or largest element is always chosen as the pivot.
- **Space Complexity**: O(log n) - Due to the recursive stack space.
![image alt](https://github.com/naol13/indu-assignment-/blob/903035a9e6002c2aea5320338903eba7c16c6c01/Screenshot%202025-04-06%20225038.png)
### Pointer Merge Sort
- **Time Complexity**:
  - **Best Case**: O(n log n) - Always divides the array and merges.
  - **Average Case**: O(n log n) - Consistent performance.
  - **Worst Case**: O(n log n) - Consistent performance.
- **Space Complexity**: O(n) - Requires additional space for temporary arrays during merging.

## Summary
Performance Comparison
- Efficiency: Pointer Quick Sort and Pointer Merge Sort are generally more efficient than Pointer Selection, Pointer Insertion, and Pointer Bubble Sort for larger datasets due to their O(n log n) time complexity.
- Stability: Pointer Merge Sort is stable, while Pointer Quick Sort is not. Pointer Insertion Sort is also stable.
- Space Usage: Pointer Selection, Pointer Insertion, and Pointer Bubble Sort are in-place algorithms, while Pointer Merge



# ASSIGNMENT 3
 What is iterative and recursive approach in algorism?
 Implement Binary search using iterative and recursive approach  compare the complexity.
 Summaries you're finding.
 
 **Iterative Approach**
 - an iteretiv algorthim uses loop (for,while) to repetedly execute a block of code until conditon is met
 - it dose not involve function calls or the use of a call stack
 - iterative solutions are more memory-efficient because they avoid the overhead of recursive function calls
 - **time complexity** o(log n)
 - **space complexity** o(1)
 - no additional memory(uses variable only )
 - performance: slightly faster becouse of no function call overhead

**Recursive Approach**
- algorithm solves a problem by breaking it into smaller subproblems and solving each subproblem recursively
- function calling itself with modified arguments until a base case is reached
- Recursive solutions can be more elegant and easier to implement for problems that naturally have a recursive structure, but they may use more memory due to the call stack
- **time complexity** o(log n)
- **space complexity** o(log n) 
- Uses call stack memory proportional to recursion depth
- performance:slower due to function call overhead

## Summary
-  both approaches are equally efficient in terms of time, but the iterative approach is generally preferred for binary search due to its lower memory overhead. However, the recursive approach can be more intuitive and easier to implement in some cases


##### ASSIGNMENT 4
Find out about Ternary and Interpolation Searching algorisms. 
How they work?
What is the complexity analysis?
Implement them using C++.
Summaries you're finding.

**Ternary Search**
- Ternary search is a divide-and-conquer search algorithm similar to binary search. It divides the search interval into three parts instead of two 
- This algorithm recursively reduces the search space by one-third each time
- useful in situations where comparisons are costly
- the basic idea is tp narrow down the search space by comparing the target value with elements at two points that divide the array into three equal parts 
**How It Works**
- Divide the Array into Three Parts and Calculate two midpoints
    - mid1 = low + (high - low) / 3
    - mid2 = high - (high - low) / 3
- These divide the array into three segments:
     - Left segment: [low, mid1]
     - Middle segment: [mid1, mid2]
     - Right segment: [mid2, high]
- Compare Values at mid1 and mid2 
    - If arr[mid1] < arr[mid2], the maximum lies in the right two-thirds (mid1 to high).
    - If arr[mid1] > arr[mid2], the maximum lies in the left two-thirds (low to mid2).
    - If arr[mid1] == arr[mid2], the maximum lies between mid1 and mid2.
- Repeat Until the Range Narrows Down 
    - Continue dividing the search space into three parts until the range becomes small enough (e.g., high - low <= 2)
- Return the Maximum Value 
     - Once the range is small, compare the remaining   elements to find the maximum

**Algorithm Steps**

1) Initialize low as the start index and high as the end index
2) While high - low > 2
   - Compute mid1 and mid2
   - Compare arr[mid1] and arr[mid2] to decide which segment to discard
 3) After the loop, manually check the remaining elements to find the maximum

**Complexity Analysis**
- At each step, the search space is divided into three parts, reducing the size of the problem by a factor of 3
- time complexity o(log3 n)
- space complexity o(1) -> itretive
    - o(log3 n) -> recursive

**Interpolation Search Algorithm**
- interpolation search is  algorithms which works on sorted array 
- it works best for array where elements are uniformly distributed

**how it works** 

- Unlike binary search, which always divides the array into two equal halves, interpolation search uses the value of the target and the distribution of values in the array to estimate where the target might be located.
- This estimation helps reduce the number of comparisons, especially when the data is uniformly distributed.
- Formula : pos=low+(target−arr[low])×(high−low)/arr[high]−arr[low]

**Algorithm**
1) Initialize Variables 
     - Set low = 0 (start index of the array).
     - Set high = n - 1 (end index of the array).
2) Repeat While Conditions Are Met 
    Continue while
    - low <= high
    - target >= arr[low]
    - target <= arr[high]
2) Calculate the Estimated Position 
    - pos=low+ (target−arr[low])×(high−low)/arr[high]−arr[low]
    - Ensure that arr[high] != arr[low] to avoid division by zero. If arr[high] == arr[low], check if arr[low] == target.
4) Compare the Target with arr[pos] 
   - If arr[pos] == target:Return pos (target found)
   - Else if arr[pos] < target:Update low = pos + 1 (search in the right subarray)
   - Else:Update high = pos - 1 (search in the left subarray)
5) Termination 
   - If the loop exits without finding the target, return -1 (target not found)

**Complexity Analysis**

**Time Complexity **

   - Best Case: O(1) (when the target is near the beginning or end).
   - Average Case: O(loglogn) (for uniformly distributed data).
  - Worst Case: O(n) (for non-uniformly distributed data)

**Space Complexity **

- Iterative Implementation: O(1)
- Recursive Implementation: O(logn) (due to the call stack)

**Summary**

Ternary search divides the array into three parts to find the maximum or minimum of a unimodal function, with a time complexity of O(log3n). Interpolation search estimates the target's position using a formula, excelling in uniformly distributed sorted arrays with an average time complexity of O(loglogn), but degrading to O(n) in the worst case. Both use O(1) space iteratively, while recursive implementations require additional stack space. Ternary search is ideal for unimodal data, and interpolation search outperforms binary search for evenly distributed data
 
