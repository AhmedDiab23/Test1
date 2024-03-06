import numpy as np
import matplotlib.pyplot as plt
from scipy.stats import norm
mean = 0
std_dev = 1
random_numbers = np.random.normal(mean, std_dev,100)
plt.figure(figsize=(10,6))
plt.hist(random_numbers, bins=15 , density='true', alpha=0.5, color='blue',label= 'custom bins')
plt.hist(random_numbers, bins='auto' , density='true', alpha=0.5, color='green',label= 'numpy bins')

plt.plot(x, norm.pdf(x,mean,std_dev),color='red',label='true dist')
plt.xlabel('value')
plt.ylabel('density')
plt.title('normal dist histo')
plt.legend()
plt.grid('true')
plt.show()
