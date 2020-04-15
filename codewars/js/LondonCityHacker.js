function londonCityHacker(journey) {
  let price = 0
  for (let i = 0; i < journey.length; i++){
    price += typeof journey[i] === "number" ? 1.5 : 2.4
    if(typeof journey[i] === 'number' && typeof journey[i+1] === 'number') {i++}
  }
  price = price.toFixed(2)
  return `£${price}`
}