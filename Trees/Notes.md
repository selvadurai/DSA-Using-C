1.collection of trees are forest


Binary Tree
=====
 
  -degree of 2 is a binary tree
  -degree means the the maxium size children a parent can have..

  The forumula for calculating the number of binary trees the number of nodes can have is T(n)=(2npower(Cn)) /n+1

 
   Max Height Formula Max Height = 2power(n)  4=2power(2) so 4 is the max height   if there are two nodes. 


The formula for filling in trees is T(n)=(2npower(Cn)) / (n+1) *(n!)

  Formula
  Min Nodes= h+1

  Max Nodes= a(r pow(k+1) - 1) /(r-1)
  Max Nodes =2pow(h-1)

  Max Height h=n-1
  Min Height h=log 2 (n+1)-1


Internal Nodes means the node must have a child
External Nodes mean the node must not have children

Find external Node equation

deg(0)= deg(2) + 1


Strict Binary tree means the tree can only have a degree of 0 or 1


Full Binary Tree- A height having maxium nodes.
Complete Binary Tree - No blank spaces in Array
other defination no blank spaces right to left


A full binary tree.is a binary tree in which each node has exactly zero or two children.



A complete binary tree is a binary tree, which is completely filled, with the possible exception of the bottom level, which is filled from left to right.



![image](https://user-images.githubusercontent.com/4705770/156894522-946bac23-8002-4303-a6d7-c5d950ba1622.png)



Traversal
=====
Inorder Traversal:LEFT*ROOT*RIGHT

Preorder Traversal:ROOT->Subtree(LEFT)->subtree(RIGHT)

postorder Traveral: LEFT->RIGHT->NODE 

level Order:level by level


![image](https://user-images.githubusercontent.com/4705770/156894269-2495e1b8-6ffc-4a0d-aca1-ac797b32107b.png)

Easy Methods of How to get Traversal
====================================

Method 1:


![image](https://github.com/selvadurai/DSA-Using-C/blob/main/Trees/Images/howToGetOrderOfTree.png)

Method 2:

![image](https://github.com/selvadurai/DSA-Using-C/blob/main/Trees/Images/easyMethod2.png)



AVL Tree
=====

**Insertation**

    Let ‘A’ be the new node added to the tree.
    Once ‘A’ is added, start travelling up from ‘A’ to root and find the unbalanced node, balance it and again keep traveling up.
    Say you have found the node z which is unbalanced.
    Node y is the child of z and x be the grandchild of z.
    Then there will be four possibilities

   **Left-Left Case** : – x is the left child of y and y is the left child of z.
   
   ![image](https://user-images.githubusercontent.com/4705770/156894836-b90fd50e-d77d-465c-b6c1-4c19a94e428f.png)
    
   **Left-Right Case** -  x is the right child of y and y is the left child of z.
    
   ![image](https://user-images.githubusercontent.com/4705770/156894929-d9a5d47f-695f-462b-957b-357d6bccd17b.png)
   
   
   **Right-Left Case** : – x is the left child of y and y is the right child of z.
   
   ![image](https://user-images.githubusercontent.com/4705770/156894983-4adf1bde-31da-47c6-aa0a-e515ba3ae68a.png)


   **Right-Right Case** : – x is the right child of y and y is the right child of z.
   
   
   ![image](https://user-images.githubusercontent.com/4705770/156894993-f1591d55-b069-4990-b6e3-9f37a8a2c6fc.png)
   
   
 **Balance Factor**
 
   Balance factor = heightOfLeftSubtree - heightOfRightSubtree
  

    Each node must have a balance factor of either -1, 0 or 1.
    
    
           BF=HL-HR={-1,0,1}
           IF |BF|=|HL-HR| = < 1 BALANCED
           IF |BF|=|HL-HR| > 1 = IMBALANCED

   ![image](https://user-images.githubusercontent.com/4705770/156895494-25907513-18dd-410f-b9cd-d0b4ab462ace.png)


   
   
   
   
 **Deletion**
 
   **R0 Balance Factor == 0 **
     
   ![image](https://user-images.githubusercontent.com/4705770/156895103-94f16e20-b3e9-4ad6-87d3-e84f01fbee67.png)

   **R1 Rotation == 1**

   ![image](https://user-images.githubusercontent.com/4705770/156895162-70752453-e91e-4a70-afc1-a161f47dd8c3.png)
   
   **R-1 Rotation == -1**
    
   ![image](https://user-images.githubusercontent.com/4705770/156895212-1052387a-d2e3-4414-8c15-2c3cb25716a0.png)


Red and Black Tree
===

**Red and Black Tree Rules**

1. Black height of the red-black tree is the number of black nodes on a path from the root node to a leaf node. Leaf nodes are also counted as black nodes. So, a    red-black tree of height h has black height >= h/2.

2. Height of a red-black tree with n nodes is h<= 2 log2(n + 1).

3. All leaves (NIL) are black.

4. The black depth of a node is defined as the number of black nodes from the root to that node i.e the number of black ancestors.

5. Every red-black tree is a special case of a binary tree. 



![image](https://user-images.githubusercontent.com/4705770/156954967-2726ee14-b125-4309-8692-e8eb33c92e49.png)


**Insertation**

Two Cases:

1. If uncle is red, we do recoloring. 


2. If uncle is black, we do rotations and/or recoloring



![image](https://user-images.githubusercontent.com/4705770/156955700-fd86df0f-5c58-45bb-a252-89364e32aa15.png)

   

 Case 1:
 
 ![image](https://user-images.githubusercontent.com/4705770/156956321-78f05394-0343-4a82-95fd-b7bf24131b50.png)
 
 
 Case 2:
 
 ![image](https://user-images.githubusercontent.com/4705770/156956354-45d5cfda-e0f0-4303-a925-7c99326540be.png)
 
 Case 3:
 
 ![image](https://user-images.githubusercontent.com/4705770/156956399-7ecc17da-a91d-4fbe-bba3-86733aaa8d70.png)
 
 
 
 **Deletation**
 
 Case 1:
 
 If deletation node is RED than delete it. If the node has a parent and child, then join the parent and child after 
 deleting the node. If the red node is forest than replace it with predessor or successor. 
 
 Case 2:
 
 If the node is BLACK and sibling is RED. Then perform right or left rotation on the sibling side of the node. 
 
 ![image](https://user-images.githubusercontent.com/4705770/156957566-259321ef-3042-43a2-a9ce-b5ec846160af.png)

 
 Case 3: 
 
 1. If the Node is BLACK and sibling is BLACK. Then do re-coloring parent=BLACK and sibling=RED. The recoloring will continue happening in the tree. If the siblings child is RED than perform zig zag rotation.


![image](https://user-images.githubusercontent.com/4705770/156958571-3b971496-b085-4902-87cd-9c7feafd27f8.png)

 
 
 
2-3 Tree
=====

**Insertation**

1. Insert new leaf in appropriate place.
2. Repeat until all nonleaf nodes have 2 or 3 children { if there is a node with 4 children, split the parent into two parent nodes, with 2 children each. { if split the root, then add a new root 
3.  Adjust search values along insertion path


![image](https://user-images.githubusercontent.com/4705770/156959569-3ff04de8-872f-4ea6-a128-7658eaa499ca.png)


**Deletation**

Case 1: Simple Delete

Case 2:Delete And Merge

Case 3: Borrow

![image](https://user-images.githubusercontent.com/4705770/156959952-ce2a4f94-2f16-4913-ab31-244cb5871f06.png)



