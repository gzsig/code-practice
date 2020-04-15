function calorie (member){

  let rmr = member[1] == "f" ? (- 161) + (10 * member[4]) + (6.25 * member[3]) - (5 * member[2])  : 5 + (10 * member[4]) + (6.25 * member[3]) - (5 * member[2])
  
  member[5] == "little activity" ? rmr = rmr * 1.2 : member[5] == "moderately active" ? rmr = rmr * 1.55 : member[5] == "very active" ? rmr = rmr * 1.7 : rmr = rmr * 1.9;
  
  return  `${member[0]}´s daily calorie requirement is ${(Math.round(rmr * 100) / 100).toFixed(2)} kcal.`
  }