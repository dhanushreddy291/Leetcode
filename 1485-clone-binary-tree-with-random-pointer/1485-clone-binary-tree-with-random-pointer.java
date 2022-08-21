/**
 * Definition for Node.
 * public class Node {
 *     int val;
 *     Node left;
 *     Node right;
 *     Node random;
 *     Node() {}
 *     Node(int val) { this.val = val; }
 *     Node(int val, Node left, Node right, Node random) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *         this.random = random;
 *     }
 * }
 */

class Solution {
    private NodeCopy helper(Node root, HashMap <Node, NodeCopy> Map) {
        if (root == null) return null;
        if (Map.containsKey(root)) return Map.get(root);
        NodeCopy clonedNode = new NodeCopy(root.val);
        Map.put(root, clonedNode);
        clonedNode.left = helper(root.left, Map);
        clonedNode.right = helper(root.right, Map);
        clonedNode.random = helper(root.random, Map);
        return clonedNode;
    }
    public NodeCopy copyRandomBinaryTree(Node root) {
        HashMap <Node, NodeCopy> Map = new HashMap<>();
        return helper(root, Map);
    }
}