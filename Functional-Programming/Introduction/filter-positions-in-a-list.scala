object Solution {
  def f(arr: List[Int]) : List[Int] = arr.tail.toIterator.sliding(1, 2).toList.flatten
  def main(args: Array[String]) {
    println(f(io.Source.stdin.getLines.toList.map(_.trim).map(_.toInt)).mkString("\n"))
  }
}