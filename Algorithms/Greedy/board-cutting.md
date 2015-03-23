## Cutting boards

**Problem Statement**

[Chinese Version][]
[Russian Version][]

Alice gives a wooden board composed of M X N wooden square pieces to Bob and asks him to find the minimal cost of breaking the board into square wooden pieces. Bob can cut the board along horizontal and vertical lines, and each cut divides the board in smaller parts. Each cut has a cost depending on whether the cut is made along a horizontal or a vertical line.

Let us denote the costs of cutting it along consecutive vertical lines by x<sub>1</sub>, x<sub>2</sub>, …, x<sub>n-1</sub>, and the cost of cutting it along horizontal lines by y<sub>1</sub>, y<sub>2</sub>, …, y<sub>m-1</sub>. If a cut (of cost **c**) is made and it passes through **n** segments, then total cost of this cut will be **n\*c**.

The cost of cutting the whole board into single squares is the sum of the cost of successive cuts used to cut the whole board into square wooden pieces of size *1x1*. Bob should compute the minimal cost of breaking the whole wooden board into squares of size *1x1*.

Bob needs your help to find the minimal cost. Can you help Bob with this challenge?

**Input Format**

 A single integer in the first line T, stating the number of test cases. T testcases follow.
 For each test case, the first line contains two positive integers M and N separated by a single space. In the next line, there are integers y<sub>1</sub>, y<sub>2</sub>, …, y<sub>m-1</sub>, separated by spaces. Following them are integers x<sub>1</sub>, x<sub>2</sub>, …, x<sub>n-1</sub>, separated by spaces.

**Output Format**

 For each test-case, write an integer in separate line which denotes the minimal cost of cutting the whole wooden board into single wooden squares. Since the answer can be very large, output the answer modulo 10<sup>9</sup>+7.

**Constraints**

 1 <= T <= 20
 2 <= M,N <= 1000000
 0 <= x<sub>i</sub> <= 10<sup>9</sup>
 0 <= y<sub>i</sub> <= 10<sup>9</sup>

**Sample Input \#00**

    1
    2 2
    2
    1

**Sample Output \#00**

    4

**Sample Input \#01**

    1
    6 4
    2 1 3 1 4
    4 1 2

**Sample Output \#01**

    42

**Explanation**
 *Sample Case \#00:* At first, board should be cut horizontally, where y1 = 2, then it should be cut vertically. So total cost will be 2\*1 + 1\*2 = 4.

*Sample Case \#01:* We should start cutting using y<sub>5</sub>, x<sub>1</sub>, y<sub>3</sub>, y<sub>1</sub>, x<sub>3</sub>, y<sub>2</sub>, y<sub>4</sub> and x<sub>2</sub>, in order. First cut will be a horizontal one where cost = y5 = 4. Next we will do a vertical cut with x1. Since this cut passes through two segments (created by previous horizontal cut), it’s total cost will be 2\*x1 = 2\*4. Similarly next horizontal cut (y3) will pass through two segments and will cost 2\*y3 = 2\*3. We can proceed in similar way and get overall cost as 4 + 4\*2 + 3\*2 + 2\*2 + 2\*4 + 1\*3 + 1\*3 + 1\*6 = 42.

  [Chinese Version]: https://hr-filepicker.s3.amazonaws.com/feb14/chinese/1319-chinese.md
  [Russian Version]: https://hr-filepicker.s3.amazonaws.com/feb-14/russian/1319-russian.md