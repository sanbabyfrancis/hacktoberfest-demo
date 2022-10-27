# import requests module
import requests
from requests.auth import HTTPBasicAuth

# Making a get request
response = requests.get('https://api.github.com / user, ',
			auth = HTTPBasicAuth('user', 'pass'))

# print request object
print(response)
