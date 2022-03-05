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
  Max Nodes =2pow(h+1)-1

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



   
   

     
