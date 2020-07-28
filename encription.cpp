
 /***int string_lowercase(char msg[50],int key)
 {
     char ch;
     for(ch=0;ch<50;ch++)
     {
         if(ch>='a'&& ch <='z')
         {
             return ch=ch+key;
         }
         else
         {
             return ch=ch-'z'+'a'-1;
         }
         
     }
     
 }

 int string_uppercase(char MSG[50],int key)
 {
     char ch;
     for(ch=0;ch<50;ch++)
     {
         if(ch>='A' && ch<='Z')
         {
             return ch=ch+key;
         }
         else
         {
            return ch=ch-'Z'+'A'-1;

         }
         
     }
 }

 int main()
 {   char msg[50]="devendra";
     char MSG[50]="DEVENDRA";
     //cout<<"Enter the lowecase mesage to be encripted";
     //cin.get>>(msg,50);
     //cout<<"Enter the upppercase message to be encripted";
     //cin.get>>(MSG,50);
     string_lowercase("devendra" ,3);
     string_uppercase("DEVENDRA",3);
 }***/
 #include <iostream> 
using namespace std; 
  
// This function receives text and shift and 
// returns the encrypted text 
string encrypt(string text, int s) 
{ 
    string result = ""; 
  
    // traverse text 
    for (int i=0;i<text.length();i++) 
    { 
        // apply transformation to each character 
        // Encrypt Uppercase letters 
        if (isupper(text[i])) 
            result += char(int(text[i]+s-65)%26 +65); 
  
    // Encrypt Lowercase letters 
    else
        result += char(int(text[i]+s-97)%26 +97); 
    } 
  
    // Return the resulting string 
    return result; 
} 
  
// Driver program to test the above function 
int main() 
{ 
    string text="Devendra"; 
    int s = 4; 
    cout << "Text : " << text; 
    cout << "\nShift: " << s; 
    cout << "\nCipher: " << encrypt(text, s); 
    return 0; 
} 