# Mini Project 1 Report

Operating Systems Concepts - Section 1

Project and code implementations by: Pete Carter, Elijah Luckey, and Caleb Shepard.

*No one is authorized to copy this document or claim that any work done in this document belongs to them.*

## Problem Statement

Users need a way to return the number of times they have called the `getpid()` `syscall`. The most user friendly way for making this happen is to allow the user to make a `syscall` that return that value. Ideally, the call and output will look like this (`$` indicates shell commands).

```text
$ getpid
pid: 1234
$ getpid
pid: 5678
$ getpidcount
count: 2
```

## Solution

There are several changes that must be made in `xv6` in order to achieve the desired functionality.
