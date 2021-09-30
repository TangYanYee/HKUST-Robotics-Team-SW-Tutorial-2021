# Git Basics
This document aims to provide the reader with a sense of how the git version control system works and provide a simple, hands-on demonstration. Git is complex and this tutorial only demonstrates the basic essentials.

## Learning Objectives
* Understand how git commit/push/pull works
* Understand branches and how to work with them
* Understand the process of merging code and resolving merge conflicts

## Overview

### Basic Workflow
![](https://i.ytimg.com/vi/0nqJKEh3YCc/maxresdefault.jpg)

0. You and your friend clone a repository. A *local copy* now exists on both your machines.
1. You make changes.
2. You **add** and **commit** those changes. The *local* repo now registers this commit.
3. You **push** your changes. The *online* (aka remote) repo now shows these changes.
4. Your friend **pulls** your changes. Their *local copy* now shows those changes. To clarify, before pulling, your friend still had the copy from the beginning (no change). But after pulling, the local copy is updated.

### Conflict/Merge Workflow
0. You and your friend clone a repository.
1. You **and your friend** make changes.
2. You add and commit your changes.
3. Your friend **add**s and **commit**s their changes.
4. You push your changes.
5. Your friend **pulls** your changes.
6. Your friend **merges** the code. This may require a closer inspection and decision into each conflict.

## Terminology
Most definitions provided simplify the concepts a bit in an attempt to make them digestable. (Some were copied from online.) Google the term for more details (e.g. "git push").

### Repository
A centralised place to store files and resources. (Kinda like Google Drive or Dropbox.)

### Commit
(n.) A commit is a revision, an individual change to a file (or a set of files). These revisions are tracked by a unique ID (a hash).

To commit (v.) a change (or a file, or something) means to create a commit (n.). In most cases, this commit will only be stored in the local repository until you push.

### Clone
Copy the contents of a repository (normally to your local side).

### Checkout
Navigate between branches and commits. Your local repository will be updated.

### Push
Upload your local commits to the remote (online) repository.

### Pull
Download the remote repository and update your local repository.

### Branches
Branches allow you to make commit and push while maintaining independence from other people's commits.
![](https://www.nobledesktop.com/image/gitresources/git-branches-merge.png)

You can think of the default branch (normally called *master*) as the tree trunk, and other branches would branch off and diverge with their own changes.

### Merge
When two branches are combined together. The changes from the incoming branch is applied to the current branch. If a file could not be resolved, a **merge conflict** will occur.
