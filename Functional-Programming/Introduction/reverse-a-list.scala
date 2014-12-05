object Solution {
  def f(arr:List[Int]):List[Int] = (arr foldLeft List.empty[Int]) { (x, y) => y :: x }
  def main(args: Array[String]) {
    println(f(io.Source.stdin.getLines.toList.map(_.trim).map(_.toInt)).mkString("\n"))
  }
}