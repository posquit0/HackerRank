object Solution {
  def permute(s: String): String = {
    s.sliding(2, 2).map(_.reverse).mkString
  }
  def main(args: Array[String]) {
    val n = readInt()
    (0 until n).foreach(_ => println(permute(readLine())))
  }
}