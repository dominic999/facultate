# # Generated from: lab1_gym_intro.ipynb
# # Converted at: 2026-10-15T16:10:26.456Z
# # Next step (optional): refactor into modules & generate tests with RunCell
# # Quick start: pip install runcell
#
# # # Lab 1 — Gymnasium Intro (cu un agent simplu, random, fără algoritmi de RL)
#
#
# # ## 1) Crearea mediului
#
#
# import gymnasium as gym
#
# env = gym.make("CartPole-v1", render_mode="rgb_array")
# obs, info = env.reset()
# type(obs), env.observation_space, env.action_space
#
# # ## 2) Agent random (CartPole)
#
#
# # ## 🏗️ Mediul CartPole-v1
# # 
# # **CartPole** este unul dintre cele mai simple și mai utilizate medii din `gymnasium`, ideal pentru a înțelege conceptele de *stare*, *acțiune*, *recompensă* și *episoade*.  
# # Scopul agentului este să **mențină o bară verticală echilibrată** pe un cărucior care se deplasează pe o linie orizontală.
# # 
# # ---
# # 
# # ### ⚙️ Descrierea mediului
# # 
# # - 🧩 **Spațiul de observație (`observation_space`)**  
# #   Vector cu 4 valori continue:
# #   1. Poziția căruciorului *(cart position)*  
# #   2. Viteza căruciorului *(cart velocity)*  
# #   3. Unghiul barei *(pole angle)*  
# #   4. Viteza unghiulară a barei *(pole angular velocity)*  
# # 
# #   Exemplu: `[-0.005, 0.03, 0.012, -0.05]`
# # 
# # - 🎮 **Spațiul de acțiuni (`action_space`)**  
# #   Discret, cu două posibile acțiuni:
# #   - `0` → împinge căruciorul spre stânga  
# #   - `1` → împinge căruciorul spre dreapta  
# # 
# # - 🏆 **Recompensă (`reward`)**  
# #   +1 pentru fiecare pas în care bara rămâne în poziție stabilă.  
# #   Episodul se termină dacă bara cade prea mult (|angle| > 12°) sau dacă căruciorul părăsește zona permisă (|position| > 2.4).  
# # 
# # - ⏱️ **Durata maximă**  
# #   500 de pași per episod (în versiunea `v1`).
# # 
# # ---
# # 
# # ### 📘 Documentație oficială
# # 
# # 🔗 [CartPole-v1 — Gymnasium Documentation](https://gymnasium.farama.org/environments/classic_control/cart_pole/)
# # 
# # ---
# # 
# # ### 💬 Curiozitate
# # 
# # Acesta este unul dintre primele exemple de RL!!! —  
# # în anii ’80–’90, agenți *Q-learning* și *Policy Gradient* erau antrenați să învețe echilibrul doar prin încercări și recompense, fără nicio informație explicită despre fizică.
# # 
# # ---
# # 
# # **Obiectiv:**  
# # > Agentul trebuie să maximizeze recompensa totală (să țină bara echilibrată cât mai mult timp).
# # 


import gymnasium as gym
import matplotlib.pyplot as plt
from matplotlib import animation
from IPython.display import HTML

env = gym.make("CartPole-v1", render_mode="rgb_array")
obs, info = env.reset()
frames = []

for t in range(200):
    action = env.action_space.sample()
    obs, reward, terminated, truncated, info = env.step(action)
    frames.append(env.render())
    if terminated or truncated:
        break
env.close()

# === Rezultat ===
fig, ax = plt.subplots()
im = ax.imshow(frames[0])
ax.axis("off")

def update(frame):
    im.set_data(frame)
    return [im]

ani = animation.FuncAnimation(fig, update, frames=frames, interval=50, blit=True)
ani = animation.FuncAnimation(
    fig, update, frames=frames, interval=50, blit=True
)
plt.show()


# ## TODO
# 1. Inspectați `observation_space`/`action_space` și explicați semnificația lor.
# 2. Măriți episoadele și observați efectul asupra reward-ului total.
# 
# Vom discuta mult mai multe în laboratoarele viitoare.
