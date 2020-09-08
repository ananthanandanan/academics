from selenium import webdriver

driver = webdriver.Chrome()
driver.get('https://www.google.com/')
search_box = driver.find_element_by_xpath('//*[@id="tsf"]/div[2]/div[1]/div[1]/div/div[2]/input')


search_box.send_keys('selenium')
search_box.submit()
