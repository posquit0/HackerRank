## Text Processing in Linux - The Tail of a Text File #2

**Problem Statement**

**Introduction to the ‘tail’ command**
 The *tail* command is used for displaying the last **n** lines of a text file. By default, it displays the last 10 lines when used in the form

    tail [filename]

We can also use it to display last *n* lines/words/characters/etc by using different flags. For example

    tail -n 11 [filename]  # Last 11 lines  
    tail -c 20 [filename]  # Last 20 characters  

But we can also specify a specific number of lines to be displayed; and list multiple filenames as well. It may also be used to display a specified number of bytes from an input file. More details [about using the tail command][] are here.

**Task**

Display the last 20 characters of an input file.

**Input Format**

A text file

**Output Format**

The last 20 characters of the text file.

**Sample Input**

    New York is a state in the Northeastern and Mid-Atlantic regions of the United States. 
    New York is the 27th-most extensive, the third-most populous populated of the 50 United States. 
    New York is bordered by New Jersey and Pennsylvania to the south.
    About one third of all the battles of the Revolutionary War took place in New York.
    Henry Hudson's 1609 voyage marked the beginning of European involvement with the area.

**Sample Output**

    ent with the area.

  [about using the tail command]: http://linux.die.net/man/1/tail