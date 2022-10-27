import webbrowser as wb

def webauto():
    chrome_path = 'C:/Program Files (x86)/Google/Chrome/Application/chrome.exe %s'
    URLS = ("https://www.instagram.com/codingwithsagar/", "https://www.youtube.com/channel/UC9EM16FgJ0yxKW8j9NBpOyQ",
            "google.co.in", "https://telegram.me/sagar4840")

    for url in URLS:
        print("Opening: " + url)
        wb.get(chrome_path).open(url)

webauto()
