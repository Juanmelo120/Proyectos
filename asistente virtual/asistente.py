import speech_recognition as sr
import pyttsx3
import webbrowser
import vlc
import time
import requests

engine = pyttsx3.init()
engine.say("Hola, ¿en que te puedo ayudar?")
engine.runAndWait()

r = sr.Recognizer()
with sr.Microphone() as source:
    print("Di algo")
    audio = r.listen(source)
    texto = r.recognize_google(audio, language="es-ES")
    textoCopia = texto.lower()
    print("Dijiste", textoCopia)

if "hola" in textoCopia:
    engine.say("Hola, me agrada saludarte")
elif "hora" in textoCopia:
    from datetime import datetime
    hora = datetime.now().strftime("%H:%M")
    engine.say(f"La hora es{hora}")
elif "youtube" in textoCopia:
    engine.say("Por supuesto, ya te dirijo a youtube")
    webbrowser.open("https://www.youtube.com")
elif "canción" in textoCopia:
    time.sleep(1)
    archivomp3 = 'Aplicaciones Open Source/asistente virtual/turista.mp3'
    player = vlc.MediaPlayer(archivomp3)
    player.play()
    time.sleep(190)
    player.stop()
elif "clima" in textoCopia:
    api_key = "cd7101dd9e0b45d4a0a230856250906"
    ciudad = "Bogotá"
    url = f"http://api.weatherapi.com/v1/current.json?key={api_key}&q={ciudad}&lang=es"
    respuesta = requests.get(url).json()
    engine.say(f"El clima en Bogotá son: {respuesta['current']['condition']["text"]}")
elif "noticias" in textoCopia:
    API_KEY = "f69cf3dcac166d11caf604ee3f355260"
    url = f"https://gnews.io/api/v4/top-headlines?lang=es&country=mx&token={API_KEY}"
    r = requests.get(url).json()
    if 'articles' in r:
        for a in r['articles'][:5]:
            engine.say(f"{a['title']}")
            print(f"📰 {a['title']}")
else:
    engine.say("no entendi lo que quisiste decir")

engine.runAndWait()