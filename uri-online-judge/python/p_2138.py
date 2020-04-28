
def char_freq(str):
  dict ={}
  for n in str:
    keys = dict.keys();
    if n in keys:
      dict[n] += 1;
    else:
      dict[n] = 1
  return dict

def sort(dict):
  mv = 0
  mk = '0'
  for key, value in dict.items():
    if (value > mv):
      mv = value
      mk = key
    if (value == mv and int(mk) < int(key)):
      mv = value
      mk = key
  return mk

while (True):
  try:
    nums = str(input())
    resDict = char_freq(nums)
    res = sort(resDict)
    print(res)
  except StopIteration:
    break

