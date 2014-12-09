object Solution {
  def f(n: Int) = (1 to n).foreach(_ => println("Hello World"))
  def main(args: Array[String]) {
    var n = readInt
    f(n)
  }
}
