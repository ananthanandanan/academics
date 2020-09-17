from mitmproxy import http


def log_network(http_record):
    if isinstance(http_record, http.HTTPResponse):
        print("HTTP CODE --> {}".format(str(http_record.status_code)))
    elif isinstance(http_record, http.HTTPRequest):
        print("HTTP METHOD --> {}".format(http_record.method))
    print("-" * 70)
    print("HEADERS --> {}".format(str(http_record.headers)))
    print("-" * 70)
    print("BODY ---> {}".format(str(http_record.content)))
    print("-" * 70)