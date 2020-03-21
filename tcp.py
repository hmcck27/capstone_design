import requests
import time
import random
for i in range(10):
    value = random.randint(0,100)
    if value == 0:
        continue
    requests.get("https://api.thingspeak.com/update?api_key=WF4CJG43NEMP3M9A&field1=" +str(value))
    time.sleep(20)
    
##url = 'https://api.thingspeak.com/update?api_key=WF4CJG43NEMP3M9A&field1=55'
##r = requests.get(url)
##r.encoding = 'utf8'
##print(r.text)
