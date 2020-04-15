function wave(word){
  let waveArr = []
  for (let i = 0; i < word.length; i++){
    word = word.split("")
    if (word[i] === " "){
      if(i>0) {word[i-1] = word[i-1].toLowerCase()}
      word = word.join('')
      continue
    }
    if(i>0) {word[i-1] = word[i-1].toLowerCase()}
    word[i] = word[i].toUpperCase()
    word = word.join('')
    waveArr.push(word)
  }
  return waveArr
}