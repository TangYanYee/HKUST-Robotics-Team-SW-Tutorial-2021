# Tutorial
## Overview
Go to [Github-Tutorial](https://github.com/HKUST-Robocon/Github-Tutorial). This is the repo we'll be working with.

You should see two files: main.c and library.h. We only need to focus on the library.h file. The main.c is there if you want to run the code and see some "concrete" results, but we won't be modifying it. 

This is what library.h should look like:

```c
#include <stdio.h>

int add(int a, int b)                       {
    return a + b                            ;}

int mul(int a, int b)                       {
    return a + b                            ;}
```

The code is intentionally bad. There are two issues to fix: the bracket formatting and the logic bug (`*` instead of `+`). In the following tutorial, we'll fix these two issues **separately** on their own branches, in order to practice branches and merging. Pretend two different people are fixing the issues independently on each of their own branches.

You may repeat this tutorial as many times as you like, as long as you create two new branches (step 2) everytime.

**Note**: If you have an auto-formatter which formats on save, turn it off for now. You'll be able to follow the steps more closely.

## 1. Clone the [Github-Tutorial](https://github.com/HKUST-Robocon/Github-Tutorial) Repository

### Github Desktop
1. Open the repository on Github.
2. Click on: Code → Open with Github Desktop.

### Sourcetree
1. File → New... → Clone from URL
2. Copy and paste `https://github.com/HKUST-Robocon/Github-Tutorial`.
3. A prompt may appear asking you to enter your credentials (Github username + password). Enter those. If you don't see the prompt, click around.
4. Click "Clone".

### Terminal
1. Open your terminal (PowerShell if on Windows) to a folder where you'll store your local repos, and run:

    ```bash
    cd ~/path/to/local/repos
    ```

    e.g. if you stored your local repos in `~/Documents/Github`, you would run
    
    ```
    cd ~/Documents/Github
    ```
    
2. Clone the repo.

    ```bash
    git clone https://github.com/HKUST-Robocon/Github-Tutorial HKUST-Robocon/Github-Tutorial
    ```
    
3. `cd` into the repository folder.

    ```
    cd HKUST-Robocon/Github-Tutorial
    ```

Note for terminal users: throughout the rest of the tutorial, use the same terminal session. If by any chance you need to reopen the terminal, remember to `cd` to the `HKUST-Robocon/Github-Tutorial` repository.

## 2. Make 2 New Branches
Name it `personal/your-name1` and `personal/your-name2` (e.g. `personal/johnathan1` and `personal/johnathan2`). We encourage you to add the `personal/` to adopt [our naming conventions](https://github.com/HKUST-Robocon/Setup-Guide/blob/master/Repositories-and-Branches.md). It's a *convention*, so nobody will kill you for messing up, but having a prefix helps categorise many branches (although in this case, there's only one prefix... but just do it anyways).

In this tutorial, we'll call `personal/your-name1` your "first branch" and `personal/your-name2` your "second branch". We'll first create `personal/your-name2` before creating `personal/your-name1` so that we'll wind up on the first branch after this step.

### Github Desktop
1. Branch → New Branch...
2. Enter the name of your branch (`personal/your-name2`).
3. Create the branch based on **master**. (If this option isn't available, just proceed with "Create Branch".)
4. Repeat with `personal/your-name1`.

### Sourcetree
1. Click on "Branch" at the top.
2. Enter the name of your branch (`personal/your-name2`).
3. Click on "Create Branch".
4. Repeat with `personal/your-name1`.

### Terminal
```bash
git checkout -b personal/your-name2
git checkout -b personal/your-name1
```

## 3. Fix the Logic Bug
Now fix the logic bug. Change the last `a + b` to `a * b` so that the `mul` function *multiplies* the inputs instead of adding them. **You only need to change 1 character.**

This is what the diff (a summary of the changes) should look like. The red lines with `-` show the deleted lines. The green lines with `+` show the added lines.

```diff
     return a + b                            ;}

 int mul(int a, int b)                       {
-    return a + b                            ;}
+    return a * b                            ;}
```

On the terminal, you can see a diff by running:

```bash
git diff
```

## 4. Add & Commit
Add your changes and commit. Currently, these changes only exist on your local side. You can choose to push if you like, **but make sure you're not pushing to the master branch**!

### Github Desktop

1. Make sure the changed files are checked.
2. Write a sensible commit message (along with an optional description).
3. Commit the changes.
4. [Optional] Publish/push with Ctrl + P (Cmd + P on macOS).

![](images/gd-01.png)

### Sourcetree

1. Stage the changes.
![](images/st-01.png)
2. Write a sensible commit message (along with an optional description).
3. Commit the changes.
4. [Optional] Click the Push button and click OK.

![](images/st-02.png)

### Terminal
```bash
git add .
git commit -m "Fix logic bug in mul"
git push
```

## 5. Switch to Your Other Branch
Now switch to your other branch (`personal/your-name2`). A git client will show which branch you're on. If you're using a terminal, use `git status`.

Make sure you've already committed your changes.

### Github Desktop
1. Click in the middle item of the header bar, where it says "Current Branch". 
2. Find and select your branch from the list of recent branches.
3. If you have uncommitted changes (which you shouldn't), Github Desktop will ask you if you want to bring those changes to the other branch or leave them. Just leave them for now.

### Sourcetree
1. You should be able to see a list of branches on the left hand side. 
2. Double-click your other branch to switch branches.

### Terminal
```bash
git checkout personal/your-name2
```

----

After you've switch branches, you should notice that library.h is unchanged:

```c
#include <stdio.h>

int add(int a, int b)                       {
    return a + b                            ;}

int mul(int a, int b)                       {
    return a + b                            ;}
```

The changes you made on your first branch do not affect your second branch. Each branch is kept *clean* and *separate*. (This is one benefit of having a version control system.)

## 6. Fix the Formatting
Try to format the brackets. Just format the brackets, don't fix the logic bug on this branch.

This is what the diff may look like:
```diff
 #include <stdio.h>

-int add(int a, int b)                       {
-    return a + b                            ;}
+int add(int a, int b) {
+    return a + b;
+}

-int mul(int a, int b)                       {
-    return a + b                            ;}
+int mul(int a, int b) {
+    return a + b;
+}
```

## 7. Add & Commit
Add and commit your new changes. (You may refer to step #4.)

## 8. Merge Changes from Your First Branch
Merge your changes from your first branch (`personal/your-name1`) into your second branch (`personal/your-name2`).

### Github Desktop
1. Branch → Merge into Current Branch...
2. Select your `personal/your-name1` branch.
3. Click "Merge **personal/your-name1** into **personal/your-name2**".

![](images/gd-11.png)
![](images/gd-12.png)

These three steps can be simplified with: Branch → Update from master.

### Sourcetree
1. Click on the "Merge" button at the top.
2. Select the latest commit from your `personal/your-name1` branch.
3. Click "OK".

![](images/st-11.png)

### Terminal

```bash
git merge personal/your-name1
```

## 9. Resolve Conflicts
Your Git client may have warned you about the merge conflict. Open your IDE or editor.

The diff of library.h should now look like this:

```diff
  #include <stdio.h>
  
- int add(int a, int b)                       {
-     return a + b                            ;}
+ int add(int a, int b) {
+     return a + b;
+ }

+<<<<<<< HEAD
 int mul(int a, int b) {
     return a + b;
 }
+=======
+int mul(int a, int b)                       {
+    return a * b                            ;}
+>>>>>>> personal/your-name1
```

You should see some new lines (not made by you, but by git), in particular `<<<<<<< HEAD`, `=======` and `>>>>>>> master`. These are markers added by git indicate a **merge conflict**. Note that no conflict occurs for the add function since we only changed it on one branch.

The first block (between `<<<` and `===`) shows the changes on the current branch side. The second block (between `===` and `>>>`) show the changes brought by the other branch.

As the programmer, you are free to resolve the conflict however you like. You could choose to keep the first version:

```c
int mul(int a, int b)                       {
    return a * b                            ;}
```

Or choose to keep the second version:

```c
int mul(int a, int b) {
    return a + b;
}
```

Or combine them by editing (note the `*`):

```c
int mul(int a, int b) {
    return a * b;
}
```

Here, the logical choice is to take the last option: combine both through editing. Thus, edit *one* of the options, discard the other, and remove the `<<<`, `===`, `>>>` conflict markers. Finally, commit the change.
