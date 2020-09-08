from selenium import webdriver

driver = webdriver.Chrome()
driver.get('https://youtube.com')
search_box = driver.find_element_by_xpath('//*[@id="search"]')

## send the search variable
search_box.send_keys('cricket')

search_butn = driver.find_element_by_id("search-icon-legacy")

## send action click
search_butn.click()