/* author: wlyw
 * date: 2016/2/23
 * description: 
 */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
	vector<int> temp;
	if (root == NULL)
		return temp;
	iteratively(temp, root);
	return temp;
}

void iteratively(vector<int>& temp, TreeNode* root) {
	if (root == NULL)
		return ;
	temp.push_back((*root).val);
	iteratively(temp, (*root).left);
	iteratively(temp, (*root).right);
}
};