#include <stdio.h>
int main (void){
    printf("hi, this is git1.1 in git1\n");
    printf("newline new\n");
 int m=5;
 int a=3;
printf("%i\n", sum(m,a));

}

int sum(int a, int b)
{
return a+b;
}

//press wsl.exe enter the ubuntu for intellji press exit or logout to exit the enviornment
//git clone url : copy remote repository to your local: local stuff you wrote before disappear if have
//git remote add origin  url : link only the remote repo to local repo
//git clone = "download & link."
//git remote add origin = "link only."




//git branch: see whole branch
//git branch branch_name: add a new branch
//git checkout branch_name: switch head to branch name

//when create a new feature branch, the old main code will copy to the feature branch as it start
//git checkout -b new_branch: create the new branch and switch the head to new branch
//git push -u origin main: push the origin to main and link them
//git push -u origin feature_branch:
//Pushes your local branch feature_branch to the remote repository origin.
//Creates the remote branch feature_branch (if it doesn’t already exist).
//Sets an upstream (tracking) relationship between your local branch and the remote branch.


//merge and rebase
//they are all merging feature branch to main branch
//if the time of adding a commit in feature branch is earlier that commit add in main branch,
//in rebase: main commit will come earlier that feature branch commit
//in merge: main commit will come later that feature branch commit
//in rebase, feature branch commit will always comes later after the main commit
//in merge, it totally depends on which branch create the new commit first to put that commit first




//adding a new file: untracked changing an file: unstaged

//origin: local point to the github repository(name)
//main: main branch
//token: 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

//对于merge conflict
//发生情况:when two person change the same line(area) in the repository
//if changing is at different area it won't conflict


//branching: different version of the code going in same repository 
//git branch show all branch
//git branch  <> create a new branch
//switch between branch use git checkout <>
//git merge combine the branch from the test branch to the master branch
//after merge, master branch will have the history changing that test branch have
//merge two branch by first switch to main then, git merge <function branch>
//branching are occur at local repository

//when post new branch in to the remote first do git push --set-upstream origin my-feature
//after that use git push on the feature branch to push the feature branch
//to pull the remote branch first time use git switch -c feature origin/feature
//later can use git fetch to fetch all the remote exist branch at your repository
//remote  workspace: pull(fetch+merge)


//undo and recovery
//git reset remove the trace in commit in history (from particular point) without deleting the code
//git reset --soft somecommit: will delete the commit and commit after that and put code that update with those commit to staging area
//git reset somecommit: will delete the commit and the commit after that thus all changes(code) made after that commitn will go to the working directory
//git reset --hard somecommit: will delete all the commit after that commit and the code alongside will delete too

//git revert: c