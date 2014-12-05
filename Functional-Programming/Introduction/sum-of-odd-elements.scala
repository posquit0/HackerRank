object Solution {
  def f(arr: List[Int]): Int = (arr fold 0) { (x, y) => if ((y & 1) == 1) x + y else x }
  def main(args: Array[String]) {
    println(f(io.Source.stdin.getLines.toList.map(_.trim).map(_.toInt)))
  }
}