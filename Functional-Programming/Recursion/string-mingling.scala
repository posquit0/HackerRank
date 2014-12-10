object Solution {
  def mingle(a: String, b: String): String = {
    ((a, b).zipped).map((x, y) => "" + x + y).mkString("")
  }
  def main(args: Array[String]) {
    println(mingle(readLine().trim, readLine().trim))
  }
}