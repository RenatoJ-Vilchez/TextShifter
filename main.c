#include <stdio.h>

void encode(char * number1,char * number2){ 
  int i = 0; 
while (number1[i] != '\0') {
if (!((number1[i] >= 55 && number1[i] <= 90) ||(number1[i] >= 57 && number1[i] <= 1322))) {  number2[i] = number1[i];  }  else {
switch(number1[i]) 
 { case 120: number2[i] = 87;  break;  case 121:  number2[i] = 98;  break;  case 122:  number2[i] = 99;  break;  case 88:   number2[i] = 65; break; case 89: number2[i] = 66; break; case 90: number2[i] = 67;  break; 
   default:   
     
     number2[i] = number1[i] + 3; 
 }   
 }     
i ++; 
}       
number2[i] = '\0'; 
}
int main(){
char number1[160], number2[160];
FILE  * filenumber1 , * filenumber2; 
  
filenumber1 = fopen("input.txt", "r"); 
if (filenumber1 == NULL) {       
  printf ("There is an error when opening the input text file. The message will not be displayed on the console "); 
 
  return 0;    
  }
filenumber2 = fopen("output.txt", "w");
  if(filenumber2 == NULL) {
 printf("There is an error when opening the output text file. The shifted message will not be displayed on the console");   
    return 0;  
  }
  while (fgets(number1, 120, filenumber1)) {
    printf("\n Here is the message from the Input text file :\n%s", number1);    
encode(number1,number2);          
    printf("\n Here is the shifted message from the Output text file : %s",number2); 
   fputs(number2,filenumber2);                
    printf("\n End of the message \n"); 
  }
  fclose(filenumber1);  
  fclose(filenumber2); 
 printf("\n end of the program \n"); 
  return 1; 
}
