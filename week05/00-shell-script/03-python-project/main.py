import numpy as np
from scipy.optimize import curve_fit
from matplotlib import pyplot as plt


sigma = 1
mu = 12
size = 10000
seed = 42

np.random.seed(seed)
gauss = lambda x, mu, sigma, nu: (nu / (2 * np.pi)**.5 / sigma) * np.exp(-(mu - x)**2 / sigma**2)

x = np.linspace(mu - 5 * sigma, mu + 5 * sigma, 1001)
x_bins = np.linspace(mu - 5 * sigma, mu + 5 * sigma, 101)
data = np.random.normal(loc=mu, scale=sigma, size=size)

y_data, x_data, _ = plt.hist(data, x_bins, label="Random data")

fit_parameters, cov_parameters = curve_fit(gauss, xdata=(x_data[1:] + x_data[:-1]) / 2, ydata=y_data, p0=(mu, sigma, 1))

plt.plot(x, gauss(x, *fit_parameters), label="Fit")
plt.yscale("log")
plt.xlabel("x")
plt.ylabel(r"$\log y$")
plt.title("Model simulation")
plt.tight_layout()
plt.legend()

plt.show()
