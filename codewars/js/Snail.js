function snail(array) {
  let w = array[0].length;
  let h = array.length;
  let qtdeCamadas = ((Math.min(w, h) + 1) / 2) | 0;
  let resp = []
  let singleArr = []
  for (let i = 0; i < qtdeCamadas; i++) {
    temp = peel(i, i, w - i * 2, h - i * 2, array);
    resp.push(temp);
  }
  resp.forEach((e)=>{
    for(let i = 0; i < e.length; i++){
      singleArr.push(e[i])
    }
  })
  console.log(singleArr);
  return singleArr
}

function peel(xi, yi, w, h, arr) {
  let x = xi,
    y = yi,
    xf = xi + w - 1,
    yf = yi + h - 1,
    snailArr = [];
  while (x <= xf) {
    // console.log(x + ", " + y);
    console.log(arr[y][x]);
    snailArr.push(arr[y][x]);
    x++;
  }
  x = xf;
  y++;
  while (y <= yf) {
    // console.log(x + ", " + y);
    console.log(arr[y][x]);
    snailArr.push(arr[y][x]);
    y++;
  }
  y = yf;
  x--;
  while (x >= xi) {
    // console.log(x + ", " + y);
    console.log(arr[y][x]);
    snailArr.push(arr[y][x]);
    x--;
  }
  x = xi;
  y--;
  while (y > yi) {
    // console.log(x + ", " + y);
    console.log(arr[y][x]);
    snailArr.push(arr[y][x]);
    y--;
  }
  return snailArr;
}

snail([[1, 2, 3], [4, 5, 6], [7, 8, 9]]);
// snail([
//   [1, 2, 3, 4, 5, 6],
//   [20, 21, 22, 23, 24, 7],
//   [19, 32, 33, 34, 25, 8],
//   [18, 31, 36, 35, 26, 9],
//   [17, 30, 29, 28, 27, 10],
//   [16, 15, 14, 13, 12, 11]
// ]);
// , [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36]
