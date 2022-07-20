import requests

headers = {
    'authority': 'essenceofhinduism.ml',
    'accept': 'application/json',
    'user-agent': 'Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/96.0.4664.45 Safari/537.36',
    'x-emby-authorization': 'MediaBrowser Client="Jellyfin Web", Device="Chrome", DeviceId="TW96aWxsYS81LjAgKFgxMTsgTGludXggeDg2XzY0KSBBcHBsZVdlYktpdC81MzcuMzYgKEtIVE1MLCBsaWtlIEdlY2tvKSBDaHJvbWUvOTYuMC40NjY0LjQ1IFNhZmFyaS81MzcuMzZ8MTYzODU1NDI1ODczMw11", Version="10.7.6", Token="cf57883760a240f3943bb020b302bf0e"',
    'sec-gpc': '1',
    'sec-fetch-site': 'same-origin',
    'sec-fetch-mode': 'cors',
    'sec-fetch-dest': 'empty',
    'accept-language': 'en-GB,en-US;q=0.9,en;q=0.8',
}

UserID = '4a73caab50464bb8b8c26d28fc85dae5'
Date = '2021-12-12'
response = requests.get(f'https://essenceofhinduism.ml/user_usage_stats/{UserID}/{Date}/GetItems', headers=headers)
#response = requests.get('https://essenceofhinduism.ml/user_usage_stats/PlayActivity', headers=headers)
response = response.json()
print(response)

#NB. Original query string below. It seems impossible to parse and
#reproduce query strings 100% accurately so the one below is given
#in case the reproduced version is not "correct".
# response = requests.get('https://essenceofhinduism.ml/System/ActivityLog/Entries?startIndex=0&limit=100&minDate=2021-12-08T15%3A26%3A20.965Z&hasUserId=true', headers=headers)
# 56486122c60446cf9aa8a65426f76a36