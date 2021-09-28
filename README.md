# Common-Interview-questions-CodingRound
Popular coding questions asked in coding rounds in the interview process.


Qn1. MinimumSwitching

    Consider a list(a[]) of '0's and '1's and is of Length 'N'. Find the minimum switches required to make all the elements/bits 1. Given that if the element at 'i'th position is switched(to 1) all other elements from 'i+1'th position are automatically switched(0-->1 and 1-->0).
    Test case 1:
    N=5
    a=[1,0,1,1,1]
    step 1:
          The 0 at second position is switched to 1, so elememts from third position gets switched automatically. 
          a=[1,1,0,0,0]
          count =1
    step 2:
          The 0 at third position is switched to 1 leading to auto switching of elements from fourth position.
          a=[1,1,1,1,1]
          count =2
    step 3:
          return count = 2
          
          
          
          
 Qn2. String Encryption
    
        An English text needs to be encrypted using the following encryption scheme. First, the spaces are removed from the text. Let 'L' be the length of this text.Then, characters are written into a grid, whose rows and columns have the following constraints: floor(√54)<=row<=column<=ceil(√54)
        Test Case 1:
        s = "if man was meant to stay on the ground god would have given us roots"
         After removing spaces, the string is √54 characters long.  is between 7 and 8, so it is written in the form of a grid with 7 rows and 8 columns. 
         
         ifmanwas  
         meanttos          
         tayonthe  
         groundgo  
         dwouldha  
         vegivenu  
         sroots    
         
         The encoded message is obtained by displaying the characters of each column, with a space between column texts. The encoded message for the grid above is:
         
         "imtgdvs fearwer mayoogo anouuio ntnnlvt wttddes aohghn sseoau"
         
         
         
 Qn3. Time in English
 
        LANGUAGE : C++
        Take input of hours and minutes and print the time in english. The constraints are that if the minutes are less than 30, Time should be in the format "x minutes past y", else the format is "x minutes to y", also if minutes are 15 or 45 the format is "quarter past x" and "quarter to x+1" respectively. The output is gramatically sensitive too i.e if minutes is 1, output must have "minute" and not "minutes".
        
        Test case 1:
        7
        15 
        quarter past seven
        
        Test case 2:
        2
        59
        one minute to 3
        
        Test case 3:
        1
        30
        half past 1
        
        Test case 4:
        3
        00
        three o' clock



Qn4. Hexadecimal numerals

    Language: C++
    You are given a range [L,R] . You are required to find the number of integers X in the range such that[GCD(X,F(X))>1] where F(X) is equal to the sum of digits of X in its hexadecimal (or base 16) representation.  For example,F(27)=1+B=1+11=12 (27 in hexadecimal is written as 1B). You are aksed T such questions.

    Test case 1:
    3
    1 3
    5 8
    7 12
    
    Output:
    2
    4
    6
    

