# # Lab 2 — Gymnasium Environments Tour
#
# În acest notebook explorăm câteva medii, modul lor de inițializare, particularități, seeding, wrappers și rularea unui agent aleator.

# ## 🔹 Setup / Importuri

import sys, numpy as np, matplotlib.pyplot as plt
import gymnasium as gym
print('Python:', sys.version)
print('Gymnasium:', gym.__version__)

# ## ⚖️ CartPole-v1
#
# **CartPole** este unul dintre cele mai simple și mai utilizate medii din `gymnasium`, ideal pentru a înțelege conceptele de *stare*, *acțiune*, *recompensă* și *episoade*.  
# Scopul agentului este să **mențină o bară verticală echilibrată** pe un cărucior care se deplasează pe o linie orizontală.
#
# ---
#
# ### ⚙️ Descrierea mediului
#
# - 🧩 **Spațiul de observație (`observation_space`)**  
#   Vector cu 4 valori continue:
#   1. Poziția căruciorului *(cart position)*  
#   2. Viteza căruciorului *(cart velocity)*  
#   3. Unghiul barei *(pole angle)*  
#   4. Viteza unghiulară a barei *(pole angular velocity)*  
#
#   Exemplu: `[-0.005, 0.03, 0.012, -0.05]`
#
# - 🎮 **Spațiul de acțiuni (`action_space`)**  
#   Discret, cu două posibile acțiuni:
#   - `0` → împinge căruciorul spre stânga  
#   - `1` → împinge căruciorul spre dreapta  
#
# - 🏆 **Recompensă (`reward`)**  
#   +1 pentru fiecare pas în care bara rămâne în poziție stabilă.  
#   Episodul se termină dacă bara cade prea mult (|angle| > 12°) sau dacă căruciorul părăsește zona permisă (|position| > 2.4).  
#
# - ⏱️ **Durata maximă**  
#   500 de pași per episod (în versiunea `v1`).
#
# ---
#
# ### 📘 Documentație oficială
#
# 🔗 [CartPole-v1 — Gymnasium Documentation](https://gymnasium.farama.org/environments/classic_control/cart_pole/)
#
# ---
#
# ### 💬 Curiozitate
#
# Acesta este unul dintre primele exemple de RL!!! —  
# în anii ’80–’90, agenți *Q-learning* și *Policy Gradient* erau antrenați să învețe echilibrul doar prin încercări și recompense, fără nicio informație explicită despre fizică.
#
# ---
#
# **Obiectiv:**  
# > Agentul trebuie să maximizeze recompensa totală (să țină bara echilibrată cât mai mult timp).

import gymnasium as gym
import matplotlib.pyplot as plt
from matplotlib import animation
from IPython.display import HTML, display
import pandas as pd

# === Inițializare mediu ===
env = gym.make("CartPole-v1", render_mode="rgb_array")
obs, info = env.reset(seed=42)

frames = []
states = []
actions = []
rewards = []

# === Rulare episod random ===
for t in range(200):
    action = env.action_space.sample()
    obs, reward, terminated, truncated, info = env.step(action)

    frames.append(env.render()) 
    states.append(obs)
    actions.append(action)
    rewards.append(reward)

    if terminated or truncated:
        break

env.close()

# === Rezumat episod ===
steps = len(states)
total_reward = sum(rewards)
print(f"🧩 Episod încheiat în {steps} pași")
print(f"🏆 Recompensă totală: {total_reward:.2f}\n")

# === Tabel cu stări și acțiuni ===
df = pd.DataFrame(states, columns=["Cart Position", "Cart Velocity", "Pole Angle", "Pole Angular Velocity"])
df["Action"] = actions
df["Reward"] = rewards
display(df.head(10))

# === Animație ===
fig, ax = plt.subplots()
im = ax.imshow(frames[0])
ax.axis("off")
ax.set_title("CartPole-v1 — Random agent")

def update(frame):
    im.set_data(frame)
    return [im]

ani = animation.FuncAnimation(
    fig, update, frames=frames, interval=50, blit=True, repeat=False
)

plt.close(fig)
display(HTML(ani.to_jshtml()))

# ## 🏔️ MountainCar-v0
#
# **MountainCar** este un mediu clasic de control din `gymnasium`, folosit pentru a studia conceptele de **explorare**, **recompense întârziate** și **învățare în medii sub-optime**.  
# Scopul agentului este să **urce o mașinuță pe vârful dealului din dreapta**, deși motorul nu este suficient de puternic pentru a ajunge direct acolo.
#
# Agentul trebuie să învețe să **balanseze între cei doi versanți** (stânga–dreapta) pentru a acumula suficientă energie cinetică și a depăși obstacolul.
#
# ---
#
# ### ⚙️ Descrierea mediului
#
# - 🧩 **Spațiul de observație (`observation_space`)**  
#   Vector cu **2 valori continue**:
#   1. Poziția mașinii *(position)*  
#   2. Viteza mașinii *(velocity)*  
#
#   Exemplu: `[-0.45, 0.02]`
#
#   Domenii posibile:  
#   - Poziția ∈ [−1.2, 0.6]  
#   - Viteza ∈ [−0.07, 0.07]
#
# - 🎮 **Spațiul de acțiuni (`action_space`)**  
#   Discret, cu **3 acțiuni posibile**:
#   - `0` → accelerează spre stânga  
#   - `1` → nu accelerează (rămâne pe loc)  
#   - `2` → accelerează spre dreapta  
#
# - 🏆 **Recompensă (`reward`)**  
#   - −1 pentru fiecare pas (agentul este penalizat continuu până când rezolvă sarcina).  
#   - Episodul se termină dacă:
#     - Poziția mașinii ≥ `0.5` (ajunge în vârful dealului din dreapta) → succes 🎉  
#     - Numărul de pași depășește limita maximă (default: 200).  
#
# - ⏱️ **Durata maximă**  
#   200 de pași per episod.
#
# ---
#
# ### 📘 Documentație oficială
#
# 🔗 [MountainCar-v0 — Gymnasium Documentation](https://gymnasium.farama.org/environments/classic_control/mountain_car/)
#
# ---
#
# ### 💬 Curiozitate
#
# Acest mediu este un exemplu clasic de **problemă cu recompensă întârziată** —  
# agentul trebuie să învețe că acțiunile „negative” (alunecarea înapoi) pot fi **necesare** pentru a atinge scopul final.  
#
# În primele experimente, algoritmi precum *Q-learning* și *SARSA* au fost testați aici pentru a evalua **strategiile de explorare vs. exploatare**.
#
# ---
#
# **Obiectiv:**  
# > Agentul trebuie să ajungă în vârful dealului din dreapta (poziția ≥ 0.5) în cât mai puțini pași, învățând să folosească inerția și să planifice acțiuni eficiente pe termen lung.

import gymnasium as gym
import matplotlib.pyplot as plt
from matplotlib import animation
from IPython.display import HTML, display
import pandas as pd

# === Inițializare mediu ===
env = gym.make("MountainCar-v0", render_mode="rgb_array")
obs, info = env.reset(seed=42)

frames = []         
states = []         
actions = []        
rewards = []        

# === Rulare episod random ===
for t in range(200): 
    action = env.action_space.sample()
    obs, reward, terminated, truncated, info = env.step(action)

    frames.append(env.render())  
    states.append(obs)
    actions.append(action)
    rewards.append(reward)

    if terminated or truncated:
        break

env.close()

# === Rezumat episod ===
steps = len(states)
total_reward = sum(rewards)
print(f"🏔️ Episod încheiat în {steps} pași")
print(f"🏆 Recompensă totală: {total_reward:.2f}\n")

# === Tabel cu stări și acțiuni ===
df = pd.DataFrame(states, columns=["Position", "Velocity"])
df["Action"] = actions
df["Reward"] = rewards
display(df.head(10))  

# === Animație ===
fig, ax = plt.subplots()
im = ax.imshow(frames[0])
ax.axis("off")
ax.set_title("MountainCar-v0 — Random agent")

def update(frame):
    im.set_data(frame)
    return [im]

ani = animation.FuncAnimation(
    fig, update, frames=frames, interval=50, blit=True, repeat=False
)

plt.close(fig)
display(HTML(ani.to_jshtml()))

# ### 🧩 TODO-uri pentru studenți
# 1. Modificați codul astfel încât să ruleze 10 episoade și să afișeze media recompenselor.
# 2. Implementați un agent simplu care accelerează spre dreapta doar dacă viteza > 0 ("greedy").
# 3. Comparați numărul de pași până la succes între agentul aleator și agentul „greedy”.

# ## 🧊 FrozenLake-v1
#
# **FrozenLake** este un mediu clasic din `gymnasium` care modelează o problemă de **navigare într-un mediu discret și stocastic**.  
# Agentul trebuie să ajungă dintr-un punct de start `S` la un punct țintă `G`, deplasându-se pe o suprafață alunecoasă de gheață, fără să cadă în găurile / copcile `H`.  
#
# Este un exemplu excelent pentru a studia conceptele de **politică stocastică**, **tranziții nedeterministe**, **explorare sigură** și **valoarea stărilor**.
#
# ---
#
# ### ⚙️ Descrierea mediului
#
# - 🧩 **Spațiul de observație (`observation_space`)**  
#   Discret, reprezentând poziția agentului pe o grilă pătrată (de exemplu 4×4 → 16 stări posibile).  
#   Fiecare stare este indexată de la `0` la `n-1`.  
#   Exemplu: `obs = 5` înseamnă că agentul se află pe a doua linie, a doua coloană.
#
# - 🎮 **Spațiul de acțiuni (`action_space`)**  
#   Discret, cu **4 acțiuni posibile**:
#   - `0` → mergi la **stânga**  
#   - `1` → mergi la **jos**  
#   - `2` → mergi la **dreapta**  
#   - `3` → mergi la **sus**
#
# - 🏆 **Recompensă (`reward`)**  
#   - `+1` dacă agentul ajunge la țintă `G`;  
#   - `0` în toate celelalte cazuri.  
#   Nu există penalizare explicită pentru cădere, dar episodul se încheie instantaneu dacă agentul ajunge într-o gaură `H`.
#
# - ⏱️ **Durata maximă**  
#   100 de pași per episod (implicit).
#
# ---
#
# ### 🌨️ Configurația hărții
#
# Harta standard 4×4 arată astfel:
# SFFF
# FHFH
# FFFH
# HFFG
#
#
# Legenda:
# - **S** – poziția de start  
# - **F** – gheață sigură (*Frozen tile*)  
# - **H** – gaură (*Hole*)  
# - **G** – țintă (*Goal*)  
#
# ---
#
# ### ❄️ Mod „alunecos” (`is_slippery=True`)
#
# Când mediul este configurat cu `is_slippery=True`, acțiunile au un caracter **stocastic**:  
# agentul poate aluneca în altă direcție decât cea intenționată, cu o probabilitate predefinită (~33%).  
#
# Acest comportament transformă problema într-un **proces de decizie markovian stocastic**, unde tranzițiile nu mai sunt deterministe.
#
# ---
#
# ### 📘 Documentație oficială
#
# 🔗 [FrozenLake-v1 — Gymnasium Documentation](https://gymnasium.farama.org/environments/toy_text/frozen_lake/)
#
#
# ---
#
# **Obiectiv:**  
# > Agentul trebuie să învețe o politică optimă care să maximizeze șansa de a ajunge la țintă `G`, evitând găurile `H`, chiar și atunci când suprafața este alunecoasă.
#

import gymnasium as gym
import numpy as np
import matplotlib.pyplot as plt
from matplotlib import animation
from IPython.display import HTML, display
import pandas as pd

# === Inițializare mediu ===
env = gym.make("FrozenLake-v1", map_name="4x4", is_slippery=True, render_mode="rgb_array")
obs, info = env.reset(seed=42)

frames = []        
states = [obs]      
actions = []        
rewards = []        

# === Agent aleator ===
for step in range(100):
    action = env.action_space.sample()
    obs, reward, terminated, truncated, info = env.step(action)

    frames.append(env.render())
    actions.append(action)
    rewards.append(reward)
    states.append(obs)

    if terminated or truncated:
        break

env.close()

# === Rezumat episod ===
steps = len(actions)
total_reward = sum(rewards)
success = rewards[-1] == 1.0 if rewards else False

print(f"🧊 Episod finalizat în {steps} pași.")
print(f"🏆 Recompensă totală: {total_reward:.2f}")
print("✅ Agentul a ajuns la țintă!" if success else "💀 Agentul NU a ajuns la țintă.")

# === Tabel cu tranzițiile ===
df = pd.DataFrame({
    "Step": np.arange(1, steps + 1),
    "State": states[:-1],
    "Action": actions,
    "Next State": states[1:],
    "Reward": rewards
})
action_labels = {0: "⬅️ Left", 1: "⬇️ Down", 2: "➡️ Right", 3: "⬆️ Up"}
df["Action"] = df["Action"].map(action_labels)
display(df.head(10))

# === Animație episod ===
fig, ax = plt.subplots(figsize=(3, 3))
im = ax.imshow(frames[0])
ax.axis("off")
ax.set_title("FrozenLake-v1 — Random Agent")

def update(frame):
    im.set_data(frame)
    return [im]

ani = animation.FuncAnimation(
    fig, update, frames=frames, interval=400, blit=True, repeat=False
)

plt.close(fig)
display(HTML(ani.to_jshtml()))

# ### 🧩 TODO-uri
# 1. Rulați codul cu `is_slippery=False` și observați diferențele.
# 2. Rulați 1000 de episoade și estimați probabilitatea de succes a unui agent random.
# 3. Înlocuiți agentul aleator cu unul care preferă acțiunea `➡️` și observați impactul.
# 4. Modificați harta folosind o specificație custom, conform codului de mai jos și încercați să rulați un episod, cu tot cu vizualizare.

# ### Custom map (exemplu)

custom_desc = ['SFFF','FHFH','FFFH','HFFG']
env = gym.make('FrozenLake-v1', desc=custom_desc, is_slippery=False, render_mode='rgb_array')

# ## 🎲 Seeding
#
# Două rulări consecutive ale aceluiași cod pot produce **rezultate diferite**, deoarece multe componente ale mediilor și algoritmilor folosesc **numere pseudo-aleatoare** (de exemplu: acțiuni aleatorii, inițializări de greutăți, zgomot Gaussian, etc.).
#
# Pentru a controla acest comportament, folosim conceptul de **random seed** — o valoare numerică ce determină punctul de plecare al generatorului de numere aleatoare.  
# Astfel, dacă folosim același *seed*, experimentul va produce **exact aceleași rezultate** la fiecare rulare.
#
# ---
#
# ### ⚙️ Seeding în Gymnasium
#
# În `gymnasium`, sursele de aleatorism sunt:
# - **Mediul (`env`)** — folosește un generator intern pentru inițializarea stărilor;  
# - **Spațiul de acțiuni (`action_space`)** — folosește un RNG separat pentru acțiuni aleatorii;  
# - **Biblioteca NumPy** — poate fi folosită de agent sau de wrapper-e pentru decizii stocastice.
#
# Pentru a asigura consistența totală, trebuie să setăm seed-ul **în toate cele trei locuri**:

import gymnasium as gym
import numpy as np

env = gym.make("CartPole-v1", render_mode="rgb_array")

# Seed pentru mediu
obs, info = env.reset(seed=42)

# Seed pentru spațiul de acțiuni
env.action_space.seed(42)

# Seed pentru NumPy
np.random.seed(42)

# Test seeding
for i in range(10):
    print("Primul sample:", env.action_space.sample())

# ## 🧰 Wrappers — `TimeLimit`, `RecordEpisodeStatistics`, `TransformObservation`
#
# În `gymnasium`, **wrappers** sunt obiecte care înconjoară mediul original și îi adaugă funcționalități suplimentare, fără a-i modifica codul sursă.  
# Ele reprezintă o metodă elegantă de **extindere modulară** a mediilor RL, permițând logare, transformări, limitări și preprocesări automate.
#
# ---
#
# ### 🔹 Exemple de wrapper-e frecvente
#
# - **`TimeLimit(env, max_episode_steps)`**  
#   Limitează durata unui episod la un număr fix de pași.  
#   Este util pentru a preveni blocarea antrenamentelor atunci când agentul nu atinge o stare terminală.
#
# - **`RecordEpisodeStatistics(env)`**  
#   Înregistrează automat informații despre fiecare episod — numărul de pași, recompensa totală, timpii etc.  
#   Datele sunt accesibile ulterior prin `env.return_queue` sau `info`.
#
# - **`TransformObservation(env, func)`**  
#   Aplică o funcție asupra observațiilor înainte de a fi returnate agentului (ex: normalizare, extragerea unei componente, conversie în tensori).  
#   Este folosit des pentru **preprocesarea datelor** înainte de inputul într-o rețea neuronală.
#
# ---
#
# ### 🧠 De ce sunt importante
#
# Wrapperele permit:
# - controlul și instrumentarea mediilor fără a le modifica direct;  
# - reutilizarea codului între experimente;  
# - logare și analiză mai simplă a performanței agenților.
#
# > Practic, un wrapper este ca un „filtru” care se aplică peste mediu — adăugând o nouă funcționalitate la fiecare pas sau reset.
#
# ---

import gymnasium as gym
import numpy as np

from gymnasium.wrappers import (
    TimeLimit,
    RecordEpisodeStatistics,
    TransformObservation
)

# === Creăm mediul de bază ===
env = gym.make("CartPole-v1")

# === Aplicăm wrapper-ele ===
env = TimeLimit(env, max_episode_steps=300)  
env = RecordEpisodeStatistics(env)           
env = TransformObservation(env, lambda obs: obs / np.linalg.norm(obs))  

# === Resetăm mediul ===
obs, info = env.reset(seed=42)
print("🔹 Observație normalizată (primii 4 parametri):", np.round(obs, 4))

# === Rulare scurtă cu agent aleator ===
total_reward = 0
for t in range(50):
    action = env.action_space.sample()
    obs, reward, terminated, truncated, info = env.step(action)
    total_reward += reward
    if terminated or truncated:
        break

env.close()

# === Rezumat episod ===
print(f"\n📊 Rezumat episod:")
print(f"   - Pași executați: {t+1}")
print(f"   - Recompensă totală: {total_reward:.2f}")
if "episode" in info:
    print(f"   - Media recompenselor (din RecordEpisodeStatistics): {info['episode']['r'].mean():.2f}")
