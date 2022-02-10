Reviewing C
================

malloc()- Locates data outside of the program in the heap. 

Examples Syntax of malloc:

        ptr = (castType*) malloc(size);
  
 Malloc Example
 
 Locates 100 spaces in the heap
 
          ptr = (float*) malloc(100 * sizeof(float));
