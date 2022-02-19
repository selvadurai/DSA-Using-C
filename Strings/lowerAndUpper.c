#include <stdio.h>


 char   *lowerCase(char text [] ){
  int i=0;
  for(i=0;text[i]!='\0';i++){
     if(text[i]>=65 && text[i]<=90){
        text[i]+=32;
     }
  }

   //printf("%s",text);
  
  return text;
}


 char   *upperCase(char text [] ){
  int i=0;
  for(i=0;text[i]!='\0';i++){
     if(text[i]>='a' && text[i]<=122){
        text[i]-=32;
     }
  }

   //printf("%s",text);
  
  return text;
}



int main(){

    char text[]="welcome";
   
    upperCase(text);
    printf("%s\n",text);
    lowerCase(text);
    printf("%s\n",text);


    return 0;
}