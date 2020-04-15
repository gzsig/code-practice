function streetFighterSelection(fighters, position, moves) {
  res = [];
  for (let i = 0; i < moves.length; i++) {
    if (moves[i] == "up") {
      position[0] = position[0] == 1 ? 0 : 0;
      res.push(fighters[0][position[1]]);
    } else if (moves[i] == "down") {
      position[0] = position[0] == 1 ? 1 : 1;
      res.push(fighters[1][position[1]]);
    } else if (moves[i] == "left") {
      position[1] =
        position[1] == 0 ? fighters[0].length - 1 : (position[1] -= 1);
      res.push(fighters[position[0]][position[1]]);
    } else if (moves[i] == "right") {
      position[1] =
        position[1] == fighters[0].length - 1 ? 0 : (position[1] += 1);
      res.push(fighters[position[0]][position[1]]);
    }
  }

  return res;
}