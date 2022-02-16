
Recursion Notes
================

**Call Tracing** 

1. After the recusive function reaches the end it will go back to orginal function that it was called. 
  
   For example 
   
   When it reaches func(0) it will determinate func(0)->func(1)->func(2)-func(3) from the stack.  

        Fig 1.0
        func(3)->func(2)->func(1)->func(0)
  
  
  
  **Stack**
  
  How recsuive Functions are Stored on the Stack
  
  ![image](https://user-images.githubusercontent.com/4705770/153945095-ef9def62-5c0c-4073-9079-ec088536fb50.png)


   
   
   
**Hanoi Problem**

 Problem: Move the disk From A tower to C tower. The only rule is that you can't have big disk on top of small disk. 
 
 

![image](https://github.com/selvadurai/DSA-Using-C/blob/main/Recursion/Images/5b5fb2670c9a185b2666637461e40c805fcc9ea5.png)


Sudo Code

Time Complexity: F(0^2) 

Solution:

  1.     TOH(1,A,B,C)                      --Moving 1 Disk
           Move Disk From A to C using B 
  
  2.     TOH(2,A,C,B){ 
          TOH(1,A,C,B)                     --Moving 2 Disk  
            Move Disk A to C  using B      
           TOH(1,B,A,C)
         }  
            
  3.     TOH(n,A,B,C){                      --Moving 3 Disk
              TOH(n-1,A,C,B)                      
              Move Disk A to C  using B      
              TOH(n-1,B,A,C)
          }
          
Tower of the Henoi breaken down using this Source code:

    void TOH(int n,int a, int b, int c )    
    {
      if(n>0)
      {
         TOH(n-1,a,c,b);
         printf("(%d,%d) \n",a,c);
         TOH(n-1,b,a,c);
      } 	   
    }

![image](https://user-images.githubusercontent.com/4705770/154175041-18778d6a-8915-459a-9993-3d33994dc677.png)

