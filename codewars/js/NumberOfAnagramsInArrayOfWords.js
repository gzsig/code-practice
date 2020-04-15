function anagramCounter (wordsArray) {
  let counter = 0
    for (let i = 0; i<wordsArray.length; i++){
      let wordArray = wordsArray[i].split("")
      wordArray.sort()
      wordArray=wordArray.join("")
      wordsArray[i]=wordArray
    }
    for (let i = 0; i < wordsArray.length ; i++){
      for (let j = i+1; j < wordsArray.length; j++){
        counter = wordsArray[i] === wordsArray[j] ? counter+1 : counter 
      }
    }
  
    return counter;
  }