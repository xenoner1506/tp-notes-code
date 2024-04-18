from flask import Flask


app = Flask(__name__)


@app.route("/")
def hello_world():
    return 'Hello, World!'


@app.route('/about')
def about():
    return '<H1><u>This is the about page</u></H1>'


if __name__ == '__main__':
    app.run(host="0.0.0.0")
