# How to Run?


1. Go to the leetcode question site. [Link](https://leetcode.com/problems/delete-node-in-a-bst/description/)
2. Copy and paste the code.
3. Run or Submit to see the result.


# Approach


When delete a node, the code may vary for the nodes having no child,one child and two child.


case 1: When there is no child, just delete the node and return NULL.


case 2: When there is one child, it could left or right, for both cases just store the value of child of the root node (node to be deleted)  and return that node after deleting the root.


case 3: When there is two child, just store the minimum value from the right tree of the given root node
        Then copy that minimum value in the root node, now call the recursive function for the right tree from root and then just return the root.
