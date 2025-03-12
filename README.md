<h1 align="center">Snake Game 🐍 </h1>
<h2 align="center"><i>C++ Based game</i></h2>
<p></p>This is a console-based Snake Game written in C++</p>
<h3>Game Type:</h3>
<p><ul><li>Type: Classic Snake Game</li>
<li>Interface: Command-line (CLI)</li>
<li>Programming Paradigm: Procedural</li>
<li>Core Mechanisms: Uses arrays for snake movement and position tracking</li></ul></p>
<p>The menu-based classic Snake game which ensures the following features:</p>
<h3>Key Features:</h3>
<p>🟣<b>Game Initialization (Setup)</b><ul>

<li>The snake starts at the center of the board.</li>
<li>A random fruit is placed on the grid.</li>
<li>Score starts at 0, and gameover is set to false.</li></ul>
🟣<b>Game Rendering (Draw)</b><ul>

<li>The game board is drawn using ASCII characters.</li>
<li>The snake's head is represented by 'O'.</li>
<li>The snake's body is represented by '-'.</li>
<li>The fruit is represented by '\4' (♦).</li>
<li>The border is represented by '-' (top/bottom) and '|' (sides).</li></ul>
🟣<b>User Input (Input)</b><ul>

Uses _kbhit() and _getch() from conio.h for real-time input.
<li><i>Controls:</i></li>
<li>'w' → Up</li>
<li>'s' → Down</li>
<li>'a' → Left</li>
<li>'d' → Right</li>
<li>'x' → Quit the game</li></ul>
🟣Game Logic (Algorithm)<ul>

<li>The snake moves in the chosen direction.</li>
<li>If the snake collides with its own body, the game ends.</li>
<li>If the snake eats a fruit, the score increases by 10 points, and a new fruit is placed randomly.</li>
<li>The snake wraps around the screen when it reaches a boundary.</li></ul>
🟣Game Loop (main)

<ul>Displays a welcome screen with instructions.</ul>
<ul>Prompts the user to press 'y' to start the game.</ul>
<ul>Continuously updates the game state until the snake collides with itself or the player quits.</ul></p>
<dl>
  <dt>Tool Used</dt>
  <dd> <a href="https://visualstudio.microsoft.com/" target="_blank" rel="norefferer">  <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/2/2c/Visual_Studio_Icon_2022.svg/1200px-Visual_Studio_Icon_2022.svg.png" alt="Microsoft Visual Studio" width="40" height="40"></a></dd>
  <dt>Language Used</dt>
  <dd><a href="https://www.w3schools.com/cpp/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/cplusplus/cplusplus-original.svg" alt="C++" width="40" height="40"/></a></dd>
</dl>
