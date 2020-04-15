function sumIntervals(intervals){
  let sm = 100000;
  let lg = 0;
  let arr = [];
  initialLength = 0;
  finalLength = 0;
  for(let i = 0; i < intervals.length; i++){
    if (intervals[i][0] < sm) sm = intervals[i][0];
    if (intervals[i][1] > lg) lg = intervals[i][1];
  }
  for (let i = sm; i <= lg; i++) {
    arr.push(i)
  }
  initialLeng = arr.length
  for(let i = 0; i < intervals.length; i++){
    for (let j = intervals[i][0]; j < intervals[i][1]; j++){
      let index = arr.indexOf(j)
      if(arr.includes(j)) arr.splice(index,1)
    }
  }
  finalLeng = arr.length;
  return initialLeng - finalLeng
}



sumIntervals([
  [1,5],
  [10, 20],
  [1, 6],
  [16, 19],
  [5, 11]
])