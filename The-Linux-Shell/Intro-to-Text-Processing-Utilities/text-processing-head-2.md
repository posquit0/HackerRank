## Text Processing in Linux - The Head of a Text File #2

**Problem Statement**

**Introduction to the ‘head’ command**
 The head command is used for displaying the first **n** lines of a text file. By default, it displays the first 10 lines when used in the form

    head [filename]
    head -n 11 [filename]  -> First 11 lines  
    head -c 20 [filename]  -> First 20 characters  

*Since we will provide the text files via STDIN the filename may be ignored*

But we can also specify a specific number of lines to be displayed; and list multiple filenames as well. It may also be used to display a specified number of bytes from an input file. More details [about using the head command][] are here.

**Task**

Display the first 20 characters of an input file.

**Input Format**

A text file

**Output Format**

The first 20 characters of the text file.

**Sample Input**

    New York is a state in the Northeastern and Mid-Atlantic regions of the United States. 
    New York is the 27th-most extensive, the third-most populous populated of the 50 United States. 
    New York is bordered by New Jersey and Pennsylvania to the south.
    About one third of all the battles of the Revolutionary War took place in New York.
    Henry Hudson's 1609 voyage marked the beginning of European involvement with the area.

**Sample Output**
 New York is a state

  [about using the head command]: http://www.linfo.org/head.html