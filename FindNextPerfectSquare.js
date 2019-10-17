function findNextSquare(sq) {
  // Return the next square if sq if a perfect square, -1 otherwise
  let validate = Math.sqrt(sq)
  if(Number.isInteger(validate)){
    let nextSqr = (Math.sqrt(sq)) + 1
    return nextSqr ** 2
  }
  return -1;
}