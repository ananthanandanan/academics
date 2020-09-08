from selenium import webdriver

driver = webdriver.Chrome()

driver.get('https://www.youtube.com/')

search_box = driver.find_element_by_xpath('//*[@id="search"]')

print(driver.title)


driver.quit()