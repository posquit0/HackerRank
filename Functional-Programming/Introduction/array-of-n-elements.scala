object Solution {
  def f(num: Int): List[Int] = List.fill(num)(1)
  def main(args: Array[String]) {
    println(f(readInt).length)
  }
}