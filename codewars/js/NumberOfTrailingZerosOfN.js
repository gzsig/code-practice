function zeros(n) {
  var result = 0;
  return n / 5 > 0 ? ~~(result += n / 5 + zeros(n / 5)) : 0;
}


// REFACTOR

zeros = (n) => n / 5 > 0 ? ~~( n / 5 + zeros(n / 5)) : 0;