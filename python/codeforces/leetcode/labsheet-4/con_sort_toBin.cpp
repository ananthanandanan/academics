class Solution {
    int length(ListNode *head)
    {
        int l = 0;
        
        while(head)
        {
            head = head->next;
            l++;
        }
        return l;
    }
    
    TreeNode *BST(ListNode **head, int l)
    {
        if(l <= 0)
            return NULL;
        
        TreeNode *left = BST(head, l/2);
        
        TreeNode *root = new TreeNode((*head)->val, left, NULL);
        
        (*head) = (*head)->next;
        
        root->right = BST(head, l - l/2 -1);
        
        return root;
    }

public:
    TreeNode* sortedListToBST(ListNode* head) {
        
        int l = length(head);
        
        return BST(&head, l);
        
    }
};