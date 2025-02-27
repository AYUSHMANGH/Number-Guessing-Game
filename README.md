# 🎯 Number Guessing Game in C

A simple **number guessing game** written in C where the player tries to guess a randomly generated number between **1 and 100**. The game provides hints if the guessed number is too high or too low and tracks the number of attempts.

## 🚀 Features

- Accepts the player's name for a personalized experience  
- Generates a random number between **1 and 100** using `rand()`  
- Provides hints to guide the player  
- Displays the number of attempts taken to guess correctly  

## 🛠️ How to Play

1. **Compile the program** using:  
   ```sh
   gcc guess_number.c -o guess_number
Run the executable:
./guess_number
Enter your name and start guessing!
What's your name buddy?  
John  
Welcome John to our number guessing game ;)  
Enter a number between 1 & 100= 50  
Guessed number is very big, try again !!  
Number of Guesses = 2  
Enter a number between 1 & 100= 25  
Congrats!! Correct guess John  
Number of Guesses = 3  

💡 Possible Improvements
Add difficulty levels (easy, medium, hard)
Implement a leaderboard system
Improve input validation
🤝 Contributing
Contributions are welcome! Feel free to fork the repo and submit a pull request.
