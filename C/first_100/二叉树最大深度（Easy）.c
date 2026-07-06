//typedef struct TreeNode
//{
//	int val;
//	struct TreeNode* left;
//	struct TreeNode* right;
//}TreeNode;
//
//int max(int a, int b)
//{
//	if (a > b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//}
//
//int inc_depth(TreeNode* root, int* depth)
//{
//	if (!root)
//	{
//		return *depth;
//	}
//	else
//	{
//		(*depth)++;
//	}
//	int depth_clone = *depth;
//	if (root->left || root->right)
//	{
//		if (root->left)
//		{
//			*depth = inc_depth(root->left, depth);
//		}
//		if (root->right)
//		{
//			depth_clone = inc_depth(root->right, &depth_clone);
//		}
//	}
//	return max(depth_clone, *depth);
//}
//
//int max_depth(TreeNode* root) 
//{
//	int depth = 0;
//	depth = inc_depth(root, &depth);
//	return depth;
//}
//
//int main(int argc, char* argv[])
//{
//	return 0;
//}
//
////你过关
//
//
//
//
//
//更好的做法
//typedef struct TreeNode
//{
//	int val;
//	struct TreeNode* left;
//	struct TreeNode* right;
//}TreeNode;
//
//int maxDepth(struct TreeNode* root)
//{
//    if (!root) return 0;
//    return fmax(maxDepth(root->left), maxDepth(root->right)) + 1;
//}
