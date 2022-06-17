class Solution {
public:int noOfCamere = 0;
    int minCameraCover(TreeNode* root) {
        if(camera(root) == "want")
            noOfCamere++;
        return noOfCamere;
    }
    
    string camera(TreeNode* root)
    {
        if(root == NULL)
            return "ok";
        string left = camera(root->left);
        string right = camera(root->right);
        
        if(left == "want" || right == "want")
        {
            noOfCamere++;
            return "provide";
        }else if(left == "provide" || right == "provide"){
            return "ok";
        }else{
            return "want";
        }
    }
};