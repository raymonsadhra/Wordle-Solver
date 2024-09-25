## score letter
For this function I can loop through each word in vocabulary and then loop through every letter in that word to see if any match letter. I would need to have a counter for every time a word has that letter and then return it too.

## score word
For this function I would need to track for duplicate letters by creating an array of 26 and when I come across a letter to add to the score I can mark the corresponding index of said letter in my other array. Then when coming over a duplicate I can check with my other array to see if that index of letter has been marked or not. Once this is done, I can keep updating score with the letter scores array indexes and return it.

## filter vocabulary grey
For this function I would loop through the words in vocabulary and loop through each letter in said word checking for an appearance of the letter. If there is an appearance I can free that word. I will also need a counter that updates everytime a word is freed.

## filter vocabulary yellow
For this function I can loop through each word in vocabulary and then loop through each letter in the word checking if it has the letter. If it doesn't then I can free it and update a counter and if it does I will need to check if the position of it is correct and if not, free it while updating the counter.

## filter vocabulary green
For this function I will loop through each word in vocabulary and each letter in the word and check for if the position contains the right letter and if not the word gets freed. I will count each time a word is freed and return the count.

## free vocabulary
For this function I will traverse through vocabulary, freeing each string and then ultimately the array vocabulary
