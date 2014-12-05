object Solution {
  // def f(num: Int, arr: List[Int]): List[Int] = (arr foldLeft List.empty[Int]) { (x, y) => x ++ (for (i <- (1 to num).toList) yield y) }
  def f(num: Int, arr: List[Int]): List[Int] = arr.flatMap(List.fill(num)(_))
  def displayResult(arr: List[Int]) = println(f(arr(0).toInt, arr.drop(1)).map(_.toString).mkString("\n"))
  def main(args: Array[String]) { 
    displayResult(io.Source.stdin.getLines.toList.map(_.trim).map(_.toInt))
  }
}