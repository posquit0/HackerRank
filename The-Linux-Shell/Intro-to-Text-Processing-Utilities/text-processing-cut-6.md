## Text Processing in Linux - Cut Command - #6

**Problem Statement**

**Task**

Print the characters from thirteenth position to the end.

**Input Format**

A text file with lines of ASCII text only.

**Input Constraints**

1 <= **N** <= 100(N is the number of lines of text in the input file)

Note: These values don’t really impact your command.

**Output Format**

The output should contain **N** lines.For each input line, print the characters from thirteenth position to the end.

**Sample Input**

    New York is a state in the Northeastern and Mid-Atlantic regions of the United States.
    New York is the 27th-most extensive, the third-most populous populated of the 50 United States.
    New York is bordered by New Jersey and Pennsylvania to the south.
    About one third of all the battles of the Revolutionary War took place in New York.
    Henry Hudson's 1609 voyage marked the beginning of European involvement with the area.

**Sample Output**

    a state in the Northeastern and Mid-Atlantic regions of the United States. 
    the 27th-most extensive, the third-most populous populated of the 50 United States.
    bordered by New Jersey and Pennsylvania to the south.
    ird of all the battles of the Revolutionary War took place in New York.
    's 1609 voyage marked the beginning of European involvement with the area.

**Recommended References**

[This][] is a very well written tutorial demonstrating different ways in which ‘cut’ may be used to either print characters at a particular position, or to print columns of a text file, based on delimiters. The latter is particularly useful while dealing with tabulated data in \*.tsv or \*.csv format.

  [This]: http://www.folkstalk.com/2012/02/cut-command-in-unix-linux-examples.html