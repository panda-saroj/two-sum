# two-sum
Given an array of integers, find two numbers such that they add up to a specific target number.

The given C++ solution, sorts the array(vector) and then checks the sum of first and last element of the sorted vector, 
comapres that with the target and if the sum is less than target then moves to the next element from first or else moves to 
the previous element from last. 
If sum matches with the target then the indices of the found numbers in the original vector are returned.

As sorting takes nlogn time. The time complexity of this solution is O(nlogn).
