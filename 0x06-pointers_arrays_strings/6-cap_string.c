#include "main.hh"

/**
* cap_string - function that capitalize first character of a word
* @str: The string to be capitalized.
*
* Return: A pointer to the changed string.
*/

char *cap_string(char *str)                                                                                                 

{                                                                                                                           

        int index = 0;                                                                                                      

                                                                                                                            

        while (str[++index])                                                                                                

        {                                                                                                                   

                while (!(str[index] >= 'a') && (str[index] <= 'z'))                                                         

                        index++;                                                                                            

                                                                                                                            

                if (str[index - 1] == ' ' ||                                                                                

                                str[index - 1] == '\t' ||                                                                   

                                str[index - 1] == '\n' ||                                                                   

                                str[index - 1] == ',' ||                                                                    

                                str[index - 1] == ';' ||                                                                    

                                str[index - 1] == '.' ||                                                                    

                                str[index - 1] == '!' ||                                                                    

                                str[index - 1] == '?' ||                                                                    

                                str[index - 1] == '"' ||                                                                    

                                str[index - 1] == '(' ||                                                                    

                                str[index - 1] == ')' ||                                                                    

                                str[index - 1] == '{' ||                                                                    

                                str[index - 1] == '}' )                                                                     

                        str[index] -= 32;                                                                                   

        }                                                                                                                   

        return (str);                                                                                                       

}
