# Question 3: Innovation 

## Explaination

**Note:** it's been two days since I did this question so I don't remember it quite well. Apologies if my explanation is inaccurate.

There are two cases in which the points are the highest. I find the value for both cases and output the higher one.

Let the card that shows a+b+c+d as the first card. Let the cards that show a+b as the other cards.

To solve this question, we have to maximize the highest other cards and also the first card.

### Case 1: First Card Among The Highest Other Cards

In this case, we get m other cards with highest a+b. Then we find which among these m cards have the highest c+d to find the first card.


**Note**: Admittedly, I tried to find the highest first card with a+b+c+d, and I spent a long time before realizing my mistakes.

### Case 2: First Card Not Among The Highest Other Cards

In this case, we find the first card with highest a+b+c+d. Then, we get m-1 other cards with highest a+b. 
