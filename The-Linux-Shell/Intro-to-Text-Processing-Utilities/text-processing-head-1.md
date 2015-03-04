## Text Processing in Linux - The Head of a Text File #1

**Problem Statement**

**Introduction to the ‘head’ command**
 The head command is used for displaying the first **n** lines of a text file. By default, it displays the first 10 lines when used in the form

    head [filename]
    head -n 11 [filename]  -> First 11 lines  
    head -c 20 [filename]  -> First 20 characters  

*Since we will provide the text files via STDIN the filename may be ignored*

But we can also specify a specific number of lines to be displayed; and list multiple filenames as well. It may also be used to display a specified number of bytes from an input file. More details [about using the head command][] are here.

**Task**

Display the first 20 lines of an input file.

**Input Format**

A text file

**Output Format**

The first 20 lines of the text file.

**Sample Input**

    From fairest creatures we desire increase,
    That thereby beauty's rose might never die,
    But as the riper should by time decease,
    His tender heir might bear his memory:
    But thou contracted to thine own bright eyes,
    Feed'st thy light's flame with self-substantial fuel,
    Making a famine where abundance lies,
    Thy self thy foe, to thy sweet self too cruel:
    Thou that art now the world's fresh ornament,
    And only herald to the gaudy spring,
    Within thine own bud buriest thy content,
    And tender churl mak'st waste in niggarding:
    Pity the world, or else this glutton be,
    To eat the world's due, by the grave and thee.
    When forty winters shall besiege thy brow,
    And dig deep trenches in thy beauty's field,
    Thy youth's proud livery so gazed on now,
    Will be a tattered weed of small worth held:
    Then being asked, where all thy beauty lies,
    Where all the treasure of thy lusty days;
    To say within thine own deep sunken eyes,
    Were an all-eating shame, and thriftless praise.
    How much more praise deserved thy beauty's use,
    If thou couldst answer 'This fair child of mine
    Shall sum my count, and make my old excuse'

**Sample Output**

    From fairest creatures we desire increase,
    That thereby beauty's rose might never die,
    But as the riper should by time decease,
    His tender heir might bear his memory:
    But thou contracted to thine own bright eyes,
    Feed'st thy light's flame with self-substantial fuel,
    Making a famine where abundance lies,
    Thy self thy foe, to thy sweet self too cruel:
    Thou that art now the world's fresh ornament,
    And only herald to the gaudy spring,
    Within thine own bud buriest thy content,
    And tender churl mak'st waste in niggarding:
    Pity the world, or else this glutton be,
    To eat the world's due, by the grave and thee.
    When forty winters shall besiege thy brow,
    And dig deep trenches in thy beauty's field,
    Thy youth's proud livery so gazed on now,
    Will be a tattered weed of small worth held:
    Then being asked, where all thy beauty lies,
    Where all the treasure of thy lusty days;

  [about using the head command]: http://www.linfo.org/head.html