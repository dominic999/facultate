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

import random

import gymnasium as gym
import matplotlib.pyplot as plt
from matplotlib import animation
from IPython.display import HTML, display
import pandas as pd

# === Inițializare mediu ===
env = gym.make("MountainCar-v0", render_mode="rgb_array")

frames = [[] for i in range(10)]         
states = []         
actions = []        
rewards = []        
rewards_per_ep = 0

# === Rulare de 10 ori ===
# for ep in range(10):
#     obs, info = env.reset(seed=42)
#     print(f"Ep no: {ep}")
#     # === Rulare episod random ===
#     for t in range(200): 
#         action = env.action_space.sample()
#         obs, reward, terminated, truncated, info = env.step(action)
#         rewards_per_ep += reward
#         frames[ep].append(env.render())  
#         states.append(obs)
#         actions.append(action)
#         rewards.append(reward)
#
#         if terminated or truncated:
#             break

# === Aici este metoda greedy ===
for ep in range(10):
    obs, info = env.reset(seed=42)
    print(f"Ep no: {ep}")
    # === Rulare episod greedy ===
    for t in range(200): 
        if obs[1] > 1:
            action = 2
        else: 
            action = random.randint(0,1)
        obs, reward, terminated, truncated, info = env.step(action)
        rewards_per_ep += reward
        frames[ep].append(env.render())  
        states.append(obs)
        actions.append(action)
        rewards.append(reward)

        if terminated or truncated:
            break

env.close()
rewards_per_ep = rewards_per_ep / 10
# === Rezumat episod ===
steps = len(states)
total_reward = sum(rewards)
print(f"Media recompenselor a fost: {rewards_per_ep}")
print(f"🏔️ Episod încheiat în {steps} pași")
print(f"🏆 Recompensă totală: {total_reward:.2f}\n")

# === Tabel cu stări și acțiuni ===
df = pd.DataFrame(states, columns=["Position", "Velocity"])
df["Action"] = actions
df["Reward"] = rewards
display(df.head(10))  

def update(frame):
    im.set_data(frame)
    return [im]

# === Animație ===
for i in range(10):
    fig, ax = plt.subplots()
    im = ax.imshow(frames[i][0])
    ax.axis("off")
    ax.set_title(f"MountainCar-v0-ep{i} — Random agent")
    ani = animation.FuncAnimation(
        fig, update, frames=frames[i], interval=50, blit=True, repeat=False
    )
    plt.show()

# ### 🧩 TODO-uri pentru studenți
# 1. Modificați codul astfel încât să ruleze 10 episoade și să afișeze media recompenselor.
# 2. Implementați un agent simplu care accelerează spre dreapta doar dacă viteza > 0 ("greedy").
# 3. Comparați numărul de pași până la succes între agentul aleator și agentul „greedy”.
