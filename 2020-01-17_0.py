from selenium import webdriver
import pdb

driver = webdriver.Firefox()
driver.get("https://google.com/")
pdb.set_trace()

driver.close()
driver.quit()

