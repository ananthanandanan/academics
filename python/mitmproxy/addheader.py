"""Add an HTTP header to each response."""


class AddHeader:
    def __init__(self):
        self.num = 2001

    def response(self, flow):
        self.num = self.num + 1
        flow.response.headers["count"] = str(self.num)


addons = [
    AddHeader()
]