
Array Notes
=======

**Complier**
 
 Arrays are created in compile time. 


**Dynamic Double Arrays**
 
 Dynamic Double arrays created by initalizing the 1d rows by pointing to a address in memory,the 1d pointer points to another address, which creates a 2d array.   

![array](https://github.com/selvadurai/DSA-Using-C/blob/main/Arrays/images/array.png)



Example code to Create a 2D array in image below
  
  Creates a [5][4] array    
      
         C=(int **)malloc(5*sizeof(int)); 
   
         C[0]=(int *)malloc(4*sizeof(int)); 
         C[1]=(int *)malloc(4*sizeof(int)); 
         C[2]=(int *)malloc(4*sizeof(int)); 
         C[3]=(int *)malloc(4*sizeof(int)); 
         C[4]=(int *)malloc(4*sizeof(int))



![array](https://github.com/selvadurai/DSA-Using-C/blob/main/Arrays/images/array.gif)
