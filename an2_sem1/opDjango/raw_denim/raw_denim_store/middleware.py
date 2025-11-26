class MiddlewareNou:
    def __init__(self, get_response) -> None:
        self.get_response = get_response

    def __call__(self, request):
        request.proprietate_noua = 17
        response = self.get_response(request)
        response['header_nou'] = 'valoare'
        if response.has_header('Content-Type') and 'text/html' in response['Content-Type']:
            content = response.content.decode('utf-8')
            new_content = content.replace(
                '</body>',
                '<div>Continut suplimentar</div></body>'
            )
            response.content = new_content.encode('utf-8')
            response['Content-Length'] = len(response.content)
            return response
