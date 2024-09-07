import numpy as np
import matplotlib.pyplot as plt

#dados conhecidos
t_inicial = 0
g_terra = 9.81
l_pendulo = 1
m_pendulo = 1
theta_inicial = 0.1
omega_inicial = 0
var_tempo = 0.1

#ajustes
n_steps = int(25/var_tempo)
theta = np.zeros(n_steps)
dis_tempo = np.linspace(0, 25, n_steps)
forca_acel = -(g_terra/l_pendulo) * np.sin(theta_inicial)

#atualização da posição theta para os primeiros intervalos onde não se conhece theta(i-1)
theta[0] = theta_inicial
theta_passado = -(theta[1]) + 2 * theta_inicial + -(g_terra/l_pendulo) * np.sin(theta_inicial) * (var_tempo)**2
theta[1] = (2 * theta[0]) - theta_passado + forca_acel * (var_tempo)**2

#calculo do movimento do pendulo
for i in range(1, n_steps-1):
    forca_ajustada = -(g_terra/l_pendulo) * np.sin(theta[i])
    theta[i+1] = (2 * theta[i]) - theta[i-1] + forca_ajustada * (var_tempo)**2

plt.figure(figsize=(10, 5))
plt.plot(dis_tempo, theta)
plt.xlabel("Tempo")
plt.ylabel("Angulo (rad)")
plt.show()