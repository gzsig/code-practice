function sortNumber(a, b) {
  return a - b;
}

function cakes(recipe, available) {
  if (!recipe || !available) {
    return 0;
  }
  recipe = Object.entries(recipe);
  let cakes = [];
  for (let i = 0; i < recipe.length; i++) {
    if (available[recipe[i][0]] === null) {
      return 0;
    }
    cakes.push(available[recipe[i][0]] / recipe[i][1]);
  }
  cakes.sort(sortNumber);
  if (isNaN(cakes[0])) {
    return 0;
  }
  return Math.floor(cakes[0]);
}