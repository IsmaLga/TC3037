# Kata 5: Infographic

You want to build a word cloud, an infographic where the size of a word corresponds to how often it appears in the body of text.

To do this, you'll need data. Write code that takes a long string and builds its word cloud data in a hash table ↴ , where the keys are words and the values are the number of times the words occurred.

Think about capitalized words. For example, look at these sentences:

  "After beating the eggs, Dana read the next step:"

"Add milk and eggs, then add flour and sugar."

What do we want to do with "After", "Dana", and "add"? In this example, your final hash table should include one "Add" or "add" with a value of  2.

### My Solution 
First I will receive the text given as input and process it to convert all the letters to lowercase.
* To do this, I will read the int value of each letter, if the value is bigger than 64 and lower than 91, the letter is an uppercase letter. To convert it to lowercase, I would substract 32 from the int value. 
* The code for letter a would look something like this: 
``` 
        if ((a >= 65) && (a >= 90)){ 
             a = a + 32;
        }
```
* Then I will split the text given into words. To do this, I can use the strok() function that breaks a string into a series of tokens using a delimiter. For this I would give the whole string and use " " as delimiter and read the tokens in a while function. 
``` 
    token = strtok(str, s);

    while( token != NULL ) {
        printf( " %s\n", token );
        token = strtok(NULL, s);
    }
```
* To work with a hash table,first, I would declare a <String, int> hash table. I will use each string as key and the value as the counter of the times that each word appers. 
* To insert into that hash table, I would use an implementation of the insert method. I would insert the word, read the value of that key and add +1 to that. This way, the value of the key will be updated each time that a word is added. 
```
hash.insert(token, hash.getValue(token) + 1); 
``` 
* This way, the program will be solving the problem for this kata. 


