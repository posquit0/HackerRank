**Problem Statement**

**Task**
Display the second and seventh character from each line of text.

**Input Format**
A text file with lines of ASCII text only.

**Input Constraints**
1 \<= **N** \<= 100(N is the number of lines of text in the input file) Note: These values don’t really impact your command.

**Output Format**
The output should contain **N** lines.Each line should contain just the two characters of the corresponding input line (the ones at the second and the seventh position).

Do **not** code defensively for situations where the text is short and the required characters may not be present in a line of text. ‘cut’ will handle it and will simply not display any character or line in such a situation.

**Sample Input**

    HelloWorldhow are you

**Sample Output**

    eooe

**Recommended References**

[This][] is a very well written tutorial demonstrating different ways in which ‘cut’ may be used to either print characters at a particular position, or to print columns of a text file, based on delimiters. The latter is particularly useful while dealing with tabulated data in \*.tsv or \*.csv format.

  [This]: http://www.folkstalk.com/2012/02/cut-command-in-unix-linux-examples.html