# Convert-Sorted-Array-to-Binary-Search-Tree

讲一个给定的数组（升序）变为二叉搜索树。

首先找根节点，根节点为nums[middle]，将middle左边的值赋给左孩子，右边的值赋给右孩子。用vector来存放（.begin(),.begind()+miidle）,(.begin()+middle+1,.end()).
将新vector作为参数进行递归即可。
