# TimeTravelGame
# Time Travel Game - Git Quick Reference

**Clone the repo**  
`git clone https://github.com/alyssajodi2005-coder/TimeTravelGame.git`  
Download the project to your computer.

**Move into the folder**  
`cd TimeTravelGame`  
Go into the project directory.

**Update your local copy**  
`git pull`  
Get the latest changes from GitHub.

**Stage your changes**  
`git add .`  
Prepare all your edits for commit.

**Commit your changes**  
`git commit -m "Describe changes"`  
Save your changes locally with a message.

**Push changes**  
`git push`  
Send your edits to GitHub so your partner can see them.

> **Tip:** Always `git pull` before starting work to avoid conflicts.
cd "/c/Users/flawl/OneDrive/Documents/code-projects/TimeTravelGame"
 g++ -Iheaders main.cpp source/decades.cpp source/player.cpp source/timeMachine.cpp source/typewrite.cpp -o game

./game

//overide
git config pull.rebase true 
git add .
git commit -m "changes"
git push

//merge
git config pull.rebase false 
git pull
git add .
git commit -m "Merged parent's changes"
git push

# Optional: save local changes
git stash

# Pull latest updates
git pull origin main  # or your branch name

# Optional: reapply stashed changes
git stash pop

#check if the contents are up to date
cat headers/name.h

# 1 Make sure you are on the main branch
git checkout main

# 2 Check the status of your repo
git status

# 3 Stage all changes (or pick files individually)
git add .

# 4 Commit your changes with a message
git commit -m "Describe your changes here"

# 5 Push your local changes to GitHub, overwriting remote
git push origin main --force