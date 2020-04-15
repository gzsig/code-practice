var whatTimeIsIt = function(angle) {
  angle = Math.floor(angle*2)
  let hrs = Math.floor(angle/60)
  let min = Math.floor(angle%60)
  
  if(hrs === 0) {hrs = 12}
  if(hrs < 10) {hrs = `0${hrs}`}
  if(min < 10) {min = `0${min}`}
  
  
  let time = `${hrs}:${min}`
  return time;
}