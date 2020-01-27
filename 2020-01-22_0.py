from flask import Flask
import pdb

app = Flask(__name__)

@app.route('/')
def index():
    pdb.set_trace()
    return "Hello"

if __name__ == '__main__':
    app.debug = True
    app.run(host='0.0.0.0', port=8000)

