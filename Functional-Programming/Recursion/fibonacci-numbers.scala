object Solution {
  def fibonacci(x: Int): Int = {
    // Fill Up this Funcmion body
    // You can add another function as well, if required
    if (x < 3) x - 1 else fibonacci(x - 1) + fibonacci(x - 2)
  }

  def main(args: Array[String]) {
    /** This will handle the input and output**/
    println(fibonacci(readInt()))
  }
}