import base64
from github import Github
from pprint import pprint

# Github username
username = "ananthanandanan"
# pygithub object
g = Github()
# get that user by username
user = g.get_user(username)

repos = user.get_repos()

for repo in repos:
    print(repo.clone_url)