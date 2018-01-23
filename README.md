# BST_Dictionary
A Binary Search Tree with demonstrations of basic functions

Code taken from Clifford A Shaffer's Data Structures and Algorithm Analysis.

The tree is initialized and then filled with data a total of three times.
The first two times, the data is added in ascending and descending order. This creates a skewed tree, which is not of much use to us because we cant take advatage of the log(n) time complexities (for functions like search, insert, delete) that would be present with a balanced tree.
The third time, we add the data in randomly. Running the program a few times, we will see that on average the tree is somewhat balanced and that the log(n) claim on average is attainable. 
