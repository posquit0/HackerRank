object Solution {
  def reduceString(s: String): String = {
    s.distinct
  }
  def main(args: Array[String]) {
    println(reduceString(readLine().trim))
  }
}