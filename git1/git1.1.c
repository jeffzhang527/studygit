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



