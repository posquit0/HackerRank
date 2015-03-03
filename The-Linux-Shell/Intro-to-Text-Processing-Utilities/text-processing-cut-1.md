## Text Processing in Linux - The Cut Command - #1


**Problem Statement**

**Task**

Display the third character from each line of text.

**Input Format**

A text file with lines of ASCII text only.

**Input Constraints**

1 <= **N** <= 100 (N is the number of lines of text in the input file)
Note: These values don’t really impact your command.

**Output Format**

The output should contain **N** lines.Each line should contain just the third character of the corresponding input line. Do **not** code defensively for situations where the third character may not be present in a line of text (i.e., it is not even 3 characters long).

**Sample Input**

    Hello
    World
    how are you

**Sample Output**

    l
    r
    w

**Recommended References**

[This][] is a very well written tutorial demonstrating different ways in which ‘cut’ may be used to either print characters at a particular position, or to print columns of a text file, based on delimiters. The latter is particularly useful while dealing with tabulated data in \*.tsv or \*.csv format.

  [This]: http://www.folkstalk.com/2012/02/cut-command-in-unix-linux-examples.html

