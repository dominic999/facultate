import socket
import math

from flask import Flask, jsonify
from flask import request

app = Flask(__name__)


def get_container_ip():
    hostname = socket.gethostname()
    ip_address = socket.gethostbyname(hostname)

    if not ip_address.startswith("127."):
        return ip_address

    with socket.socket(socket.AF_INET, socket.SOCK_DGRAM) as sock:
        sock.connect(("10.255.255.255", 1))
        return sock.getsockname()[0]

@app.route('/')
def hello():
    return "Dominic Tirdea 402/2024!"

'''
This method expects a json content.
Use header: 'Content-Type: application/json'
'''
@app.route('/post', methods=['POST'])
def post_method():
    print("Got from user: ", request.get_json())
    print(request.get_json()['value']*2)
    return jsonify({'got_it': 'yes'})

@app.route("/item/<item>")
def get_item(item):
    return {"item_id": item}

@app.route('/ip')
def container_ip():
    return jsonify({"ip": get_container_ip()})

@app.route('/<name>')
def hello_name(name):
    return "Hello {}!".format(name)


@app.route("/get-submask", methods=['POST'])
def get_submask():
    print(request.get_json())
    ip = request.get_json()['ip']
    noduri = request.get_json()['noduri']
    masca = 4 - math.ceil(noduri/255)
    print(math.ceil(noduri/255))

    masca_totala = "".join(["255." if i < masca else "0." for i in range(4)])
    masca_totala = masca_totala[:-1]

    return masca_totala


if __name__ == '__main__':
    app.run(host='0.0.0.0', port=8001)
