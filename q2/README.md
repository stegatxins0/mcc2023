# Question 2: Mobile Game

## Explaination

**Note:** it's been two days since I did this question so I don't remember it quite well. Apologies if my explanation is inaccurate.

I sort the enemies in ascending power level, then find first element in the range which has a value not less than Alice's power level minus one. Then I add it to Alice power level and remove the enemy from the vector. The process break when Alice power level is equal/more than the required power level. It will return -1 in certain test cases.
