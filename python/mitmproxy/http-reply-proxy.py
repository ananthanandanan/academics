"""Send a reply from the proxy without sending any data to the remote server."""
from mitmproxy import http
from mitmproxy import ctx


def request(flow: http.HTTPFlow) -> None:
    if flow.request.pretty_url == "https://www.youtube.com/":
        flow.response = http.HTTPResponse.make(
            200,  # (optional) status code
            b"Hello World",  # (optional) content
            {"Content-Type": "text/html"}  # (optional) headers
        )
        ctx.log.info("You have a message bro.....")
