import requests
from github import Github
from pprint import pprint
import subprocess
import os
import time

__author__ = "K N Anantha nandanan"


class GithubRepofinder(object):
    """
    Fetches all the information regarding the commits of a repository to a json file.
    
    required args: github_username
    """

    def __init__(self, github_username, date, nos):
        self.url = f"https://api.github.com/users/{github_username}"
        self.user_info = requests.get(self.url)
        self.g_root = Github()
        self.g_username = github_username
        self.date = date
        self.nos = nos

    def userExist(self):
        """
        Checks if the user data being fetched is valid or not
        """
        if self.user_info.status_code == 404:
            print("This user doesn't exist")
        else:
            if self.user_info.status_code == 200:
                repos = self.g_root.get_user(self.g_username).get_repos()
                self.storeRepo(repos)

    def storeRepo(self, repos):
        """
        Runs the subprocess in shell and writes it to a file
        """
        with open('data.json', 'w+') as outfile:
            for repo in repos:
                if self.nos < 0:
                    break
                self.nos -= 1
                git_url = 'https://github.com/' + \
                    self.g_username + '/' + str(repo.name)
                subprocess.Popen(['perceval', 'git', "--json-line",
                                  git_url, "--from-date", self.date], stdout=outfile)
                time.sleep(1)
        print("The process is over")


### Start of the program

def main():

    github_user = input("Enter the Github username=> ")
    no_of_repo = int(
        input("Enter the no of repository commits to be fetched=>"))
    date = input(
        "The data from which the commits need to be fetched[yyyy-mm-dd]=>")
    gf = GithubRepofinder(github_user, date, no_of_repo)
    gf.userExist()


if __name__ == "__main__":
    main()
