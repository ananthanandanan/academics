from mitmproxy import http


class HTTPRecordModifier:

    def __init__(self, flow: http.HTTPFlow):
        self.flow = flow

    def set_request_header(self, headers):
        for header_key, header_value in headers.items():
            self.flow.request.headers[header_key] = header_value

    def set_request_body(self, body):
        self.flow.request.content = bytes(body, "utf-8")

    def set_request_method(self, method):
        self.flow.request.method = method

    def set_request_query(self, key, value):
        self.flow.request.query[key] = value

    def set_response_status_code(self, code):
        self.flow.response.status_code = code

    def set_response_header(self, headers):
        for header_key, header_value in headers.items():
            self.flow.response.headers[header_key] = header_value

    def set_response_body(self, body):
        self.flow.response.content = bytes(body, "utf-8")

    def create_mocked_response(self, code=200, header={}, body=""):
        self.flow.response = http.HTTPResponse.make(
            code, bytes(body, "utf-8"), header)
