# Common-Interview-questions-CodingRound
Popular coding questions asked in coding rounds in the interview process.
Qn1.
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
