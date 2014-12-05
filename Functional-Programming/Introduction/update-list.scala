object Solution {
  def f(arr:List[Int]):List[Int] = arr.map(_.abs)
  def main(args: Array[String]) {
    println(f(io.Source.stdin.getLines.toList.map(_.trim).map(_.toInt)).map(_.toString).mkString("\n"))
  }
}