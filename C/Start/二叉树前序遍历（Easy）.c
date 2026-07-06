//#include <stdio.h>
//
//#define MAX 100
//
//// 初始化二叉树
//void insert(TreeNode** tree, int gain)
//{
//	TreeNode* temp = NULL;
//	if (!(*tree))							// 判断根节点是否存在
//	{ 
//		temp = (TreeNode*)malloc(sizeof(TreeNode));
//		temp->left = temp->right = NULL; // 左右节点置空
//		temp->val = gain;
//		*tree = temp;
//		return;
//	}
//	if (gain < (*tree)->val)				// 判断是左子树
//	{ 
//		insert(&(*tree)->left, gain); // 创建左子树
//	}
//	else if (gain > (*tree)->val)			 // 判断是右子树
//	{ 
//		insert(&(*tree)->right, gain); // 创建右子树
//	}
//}
//
//typedef struct TreeNode
//{
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//}TreeNode;
//
//void preorder_helper(struct TreeNode* root, int* val_arr, int* idx)
//{
//	if (!root)				//根结点为空
//	{
//		return;
//	}
//	else
//	{
//		val_arr[(*idx)++] = root->val;
//		printf("%d,", root->val);
//		preorder_helper(root->left, val_arr, idx);
//		preorder_helper(root->right, val_arr, idx);
//	}
//}
//
//int* preorder_traversal(struct TreeNode* root, int* return_size)
//{
//	int* val_arr;
//	int idx = 0;			//下标初始化为0
//	val_arr = (int*)malloc(100 * sizeof(int));
//	preorder_helper(root, val_arr, &idx);
//	*return_size = idx;
//	val_arr = realloc(val_arr, idx * sizeof(int));
//	if (idx == 0)
//	{
//		return NULL;
//	}
//	return val_arr;
//}
//
////你过关
