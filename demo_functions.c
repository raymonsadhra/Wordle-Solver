// A nice place for you to mess with the functions, while you're developing.

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "search_util.h"

int main(void) {
  char words[10][6] = {"stalk", "scrap", "shear", "batch", "motif",
                       "tense", "ultra", "vital", "ether", "nadir"};

  // make a dynamically-allocated vocabulary that you can mess with, including
  // freeing elements of it when necessary.
  char **vocabulary = calloc(10, sizeof(char *));
  for (int i = 0; i < 10; i++) {
    vocabulary[i] = strdup(words[i]);
  }
  size_t num_words = 10;

  // TODO(you): exercise all of your functions in here. Write some good test
  // cases!
  
  //tests for score_letter
  int scoreletter1 = score_letter('a', vocabulary, num_words);
  printf("score_letter test 1 for letter a. Expected: 7, Found: %d\n", scoreletter1);
  int scoreletter2 = score_letter('s', vocabulary, num_words);
  printf("score_letter test 2 for letter s. Expected: 4, Found: %d\n", scoreletter2);
  score_letter('s', vocabulary, num_words);
  
  //tests for score_word
  int letter_scores[26] = {0};
  for (int i = 0; i < 26; i++){
  	  letter_scores[i] = i + 1;
  }
  int scoreword1 = score_word("stalk", letter_scores);
  printf("score_word test 1 for word stalk. Expected: 63, Found: %d\n", scoreword1);
  int scoreword2 = score_word("scrap", letter_scores);
  printf("score_word test 2 for word scrap. Expected 57, Found: %d\n", scoreword2);

  //tests for filter_vocabulary_gray
  size_t filtergray1 = filter_vocabulary_gray('a', vocabulary, num_words);
  printf("filter_vocabulary_gray test 1 for letter a. Expected: 7, Found: %zu\n", filtergray1);
  //size_t filtergray2 = filter_vocabulary_gray('s', vocabulary, num_words);
  //printf("filter_vocabulary_gray test 2 for letter s. Expected: 4, Found: %zu\n", filtergray2);

  //tests for filter_vocabulary_yellow
  size_t filteryellow1 = filter_vocabulary_yellow('s',0,vocabulary, num_words);
  printf("filter_vocabulary_yellow test 1 for letter s. Expected: 2, Found: %zu\n", filteryellow1);
  //size_t filteryellow2 = filter_vocabulary_yellow('r', 4, vocabulary, num_words);
  //printf("filter_vocabulary_yellow test 2 for letter r. Expected: 2, Found: %zu\n", filteryellow2);

  //tests for filtered_vocabulary_green
  size_t filtergreen1 = filter_vocabulary_green('t', 0, vocabulary, num_words);
  printf("filter_vocabulary_green test 1 for letter a. Expected: 0, Found: %zu\n", filtergreen1);
  //size_t filtergreen2 = filter_vocabulary_green('s', 0, vocabulary, num_words);
  //printf("filter_vocabulary_green test 2 for letter s. Expected: 7, Found: %zu\n", filtergreen2);


  // ... OK we're done, clean up the vocabulary.
  free_vocabulary(vocabulary, num_words);

  return 0;
}
