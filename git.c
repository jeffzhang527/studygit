//system 
//git config --global -e (see gitconfig)
//end of line:\r and \n
//first do: git init

//file1 file 2-> staging area(review our work)-> repository
//like take snapshot
//we have two file
//git add file1 file2: to staging area
//git commit -m "initial commit": go to repository
//staging area still has snapshot not empty after do the commit
//after change file
//git add file1
//git commit -m "fix the bug of file1"

//to delete file2
//delete file2 in working area 
//to delete in staging area :git add file2
//git commit -m"remove file2":to repository
//echo: writing content to a file
//echo hello> file1.txt
//to let git track
//use git status check whether in staging area
//git add *.txt
//git add.  :add entire directly recursively
//run git status it will appear go to staging area
//echo wrold>>file1.txt :>>means append
//git add file1.txt again

//git commit -m "initial commit."
//git commit 
//in the top of the editor, type commits, use blank line to seperate the commits

//remove
//rm file2.txt
//git status
//git ls-file:this is the file in staging area
//git add file2.txt
//git commit -m"remove"
//use git rm file2.txt:git remove both the staging area and repository

//rename
//mv file1.txt main.js
//git add file1.txt
//git add main.js
//git status
//or use git mv main.js file1.js:this change in wroking directory and staging

//mkdir logs
//echo hello>logs/dev.log
//git status
//don't want git track this file
//.gitignore
//echo logs/ > .gitignore
//code .gitignore: it will appear logs/ indicate a directory
// u can type the file u want to ignore under logs/  
//back to the terminal
//git add .gitignore
//git commit -m "add gitignore"

//if we want to remove from only in staging area not in workflow(careless add)
//after added(to staging), gitignore won't help
//mkdir bin
//echo hello>bin/app.bin
//git status
//git add .:means add all the file to staging area in currenet directory
//code .gitignore(and add)
//git ls-files
//it still appear every time change the file
//git rm --cached -r bin/  (don't know ask git -h)
//git commit -m "delete in stage"

//git log -graph
//git checkout (stuff u want to check out at that point 14cdkd)
//git checkout master










