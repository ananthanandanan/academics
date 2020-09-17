import json
from mitmproxy import http, proxy, options
import http_modifier, log
import time

breakpoint_url = ""
mocked_response_code = 200
mocked_request_body = ""
mocked_response_body = ""
mocked_request_header = {}
mocked_response_header = {}
mocked_request_method = ""

class MainScript(object):
  
  def response(self, flow: http.HTTPFlow):
    """
    Event for handling response before sending it back to the client
    """


  def request(self, flow: http.HTTPFlow):
    """
    Event for handling request after receiving it from the client
    """
  def run(self):
    self.response()
    self.request()


def main():
  server = MainScript()
  server.run()

if __name__ == "__main__":
  main()