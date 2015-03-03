## Text Processing in Linux - Cut Command - #8

**Problem Statement**

**Task**

Given a sentence, identify and display its first three words. Assume that the space (’ ’) is the only delimiter between words.

**Input Format**

A text file with lines of ASCII text only. Each line has exactly one sentence.

**Input Constraints**

1 <= **N** <= 100(N is the number of lines of text in the input file)
Note: These values don’t really impact your command.

**Output Format**

The output should contain **N** lines.For each input sentence, identify and display its first three words. Assume that the space (’ ’) is the only delimiter between words.

**Sample Input**

    New York is a state in the Northeastern and Mid-Atlantic regions of the United States.
    New York is the 27th-most extensive, the third-most populous populated of the 50 United States.
    New York is bordered by New Jersey and Pennsylvania to the south.
    About one third of all the battles of the Revolutionary War took place in New York.
    Henry Hudson's 1609 voyage marked the beginning of European involvement with the area.

**Sample Output**

    New York is
    New York is
    New York is
    About one third
    Henry Hudson's 1609

**Recommended References**

[This][] is a very well written tutorial demonstrating different ways in which ‘cut’ may be used to either print characters at a particular position, or to print columns of a text file, based on delimiters. The latter is particularly useful while dealing with tabulated data in \*.tsv or \*.csv format.

  [This]: http://www.folkstalk.com/2012/02/cut-command-in-unix-linux-examples.html

