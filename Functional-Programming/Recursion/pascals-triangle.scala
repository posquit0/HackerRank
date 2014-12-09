object Solution {
  def pascal(row: Int, col: Int): Int = {
    if (col == 0 || col == row) 1
    else if (col < 0 ||  col > row) 0
    else pascal(row - 1, col - 1) + pascal(row - 1, col)
  }
  def main(args: Array[String]) {
    (0 until readInt).foreach(r => println((0 to r).map(c => pascal(r, c)).mkString(" ")))
  }
}