## Text Processing in Linux - The 'Tr' Command - #2

**Problem Statement**

**Introduction**

The ‘tr’ command is a useful translation utility in linux.

*‘e’ being transformed to ‘E’*

    $ echo "Hello" | tr "e" "E"
    HEllo

*Spaces being transformed to hyphens*

    $ echo "Hello how are you" | tr " " '-'
    Hello-how-are-you

*Digits (numerals) being deleted*

    $ echo "Hello how are you 1234" | tr -d [0-9]
    Hello how are you 

**The Task**
 In a given fragment of text, delete all lower case characters a-z.

**Input Format**
 A block of ASCII text.

**Output Format**
 Delete all the lower-case characters.

**Sample Input**

    Hello
    World
    how are you

**Sample Output**

    H
    W

**Recommended References**

[This tutorial][] shows various ways in which the command may be used for transforming or translating characters or character classes. It can also be used to delete, complement, remove or squeeze characters.

  [This tutorial]: http://www.thegeekstuff.com/2012/12/linux-tr-command/