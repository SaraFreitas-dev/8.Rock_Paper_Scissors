# 🎮 Project 8 – Rock Paper Scissors (in C)

Welcome to **Project 8** in this beginner-friendly C programming mini-series! This project is a fun implementation of the classic **Rock, Paper, Scissors** game, where a human plays against a computer-controlled opponent. It helps you practice essential concepts like input/output, randomness, file handling, conditionals, and simple logic building.

---

## 📌 About this project

This mini project lets the user play Rock, Paper, Scissors in the terminal with visual **ASCII art** for each move. Here's what it does:

- Prompts the user to choose Rock, Paper, or Scissors
- Randomly generates a move for the computer
- Displays the result using ASCII art
- Keeps track of wins, losses, and ties
- Asks if the user wants to play again or quit

It's a great example of combining logic, randomness, file I/O, and structured flow in C.

> 🧠 **Concepts practiced:** `while` loops, conditionals (`if`/`else`), `switch`, file handling with `fopen`, random number generation (`rand()`), pointers and basic user input.

---

## 🧪 Example Output

📎 Terminal preview:

![Output Example](./img/output_example.png)

---

## 📁 ASCII Art Files

The game uses external `.txt` files to print the shapes:

- 📄 `rock.txt`
- 📄 `paper.txt`
- 📄 `scissors.txt`
- 📄 `welcome_banner.txt`

You can find them in the `src/` folder. Feel free to customize or enhance them!

---

## ✍️ How to build it yourself

If you want to code this from scratch, here’s a suggested path:

1. **Add a welcome banner**  
   Show a friendly title screen by reading a `.txt` file and printing it at the start of the game.

2. **Ask the user for a move**  
   Prompt the user to choose one of the following:
   - `1` for Rock  
   - `2` for Paper  
   - `3` for Scissors

3. **Generate the computer’s choice**  
   Use a random number to simulate the computer’s move.

4. **Display both choices using ASCII art**  
   Load the correct `.txt` file for each move and display it in the terminal.

5. **Determine the winner**  
   Compare the player’s and the computer’s choices to decide the round’s outcome.

6. **Keep track of the score**  
   Count how many rounds the player has won, lost, or tied.

7. **Ask the user if they want to play again**  
   Give the option to continue playing or quit the game.

---

## ⭐ Bonus: Track the score!

As a bonus activity, try implementing a **score counter** that shows on every round how many times:

- You won 🏆
- You lost 💀
- The game ended in a tie 🤝

Already implemented in this version, but great for practice if you're doing it on your own!

---

Happy coding! 🚀
