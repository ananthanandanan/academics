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

params = (
    ('days', '28'),
    ('end_date', '2021-12-12'),
    ('filter', 'Movie'),
    ('stamp', '1639331605194'),
    ('timezoneOffset', '1'),
)

response = requests.get('https://essenceofhinduism.ml/user_usage_stats/HourlyReport', headers=headers, params=params)
response = response.json()
print(response)

#NB. Original query string below. It seems impossible to parse and
#reproduce query strings 100% accurately so the one below is given
#in case the reproduced version is not "correct".
# response = requests.get('https://essenceofhinduism.ml/user_usage_stats/HourlyReport?days=28&end_date=2021-12-12&filter=Movie&stamp=1639331605194&timezoneOffset=5.5', headers=headers)