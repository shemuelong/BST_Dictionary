# BST_Dictionary
A Binary Search Tree with demonstrations of basic functions

Code taken from Clifford A Shaffer's Data Structures and Algorithm Analysis.

The tree is initialized and then filled with data a total of three times.
The first two times, the data is added in ascending and descending order. This creates a skewed tree, which is not of much use to us because we cant take advatage of the log(n) time complexities (for functions like search, insert, delete) that would be present with a balanced tree.
The third time, we add the data in randomly. Running the program a few times, we will see that on average the tree is somewhat balanced and that the log(n) time complexity claim is attainable. 

Ultimately, these concerns are addressed in the more advanced or self-balancing trees (Red-Black, AVL, etc.), but this was a fun exercise to see how exactly can a BST have an average time complexity of log(n). 
