object Solution {
  def f(delim: Int, arr: List[Int]) : List[Int] = (arr :\ List.empty[Int]) { (x, y) => if (x < delim) x :: y else y }
  def main(args: Array[String]) {
    var lines = io.Source.stdin.getLines.toList
    println(f(lines(0).toInt, lines.map(_.trim).map(_.toInt)).map(_.toString).mkString("\n"))
  }
}
