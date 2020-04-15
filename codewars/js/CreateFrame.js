const frame = (text, char) => {
  let size = 0
  let row = ""
  let res = []
  let temp = ""
  let space = 0
  text.forEach((word)=>{
    size = word.length > size ? word.length : size
  })
  
  text.forEach((word)=>{
    if (word.length === size){
      temp = `${char} ${word} ${char}`
      res.push(temp)
    } else {
      space = size - word.length
      temp = `${char} ${word} ${" ".repeat(space)}${char}`
      res.push(temp)
    }
  })
  
  for (let i =0 ; i < size+4; i++){
    row += char
  }
  let hold = row
  console.log(row)
  res.forEach((w)=>{
    row += "\n" + w
  })
  row += "\n" + hold
  console.log(row)
  return row;
};