import requests                 # 加载 requests 库，用于网页获取
from bs4 import BeautifulSoup   # 加载 BeautifulSoup 库，用于解析获取的网页
import json
import jsonpath


url="http://www.nmc.cn/rest/province/AZJ"
response =requests.get(url)
html_str = response.content.decode()

# 把json格式字符串转换成python对象
jsonobj = json.loads(html_str)

# 从根节点开始，匹配code节点
citylist = jsonpath.jsonpath(jsonobj,'$..code')

# print(citylist)

for city in citylist:
    url = 'http://www.nmc.cn/publish/forecast/AZJ/' + city + ".html"
    strHtml = requests.get(url)
    strHtml.encoding = strHtml.apparent_encoding  # 指定源网页编码方式作为文字解码方式
    soup = BeautifulSoup(strHtml.text, 'lxml')
    #data = [[]]
    # 城市名称
    city_name = soup.select('#breadcrumb > li.active')

    for i in range(1, 9):  # 将 Copy selector 代码粘贴在（‘’）内
        # 整点时间
        city_time = soup.select('#day0 > div:nth-child(' + str(i) + ') > div:nth-child(1)')
        # 整点气温
        city_temperature = soup.select('#day0 > div:nth-child(' + str(i) + ') > div:nth-child(4)')
        # 整点降水量
        city_rain = soup.select('#day0 > div:nth-child(' + str(i) + ') > div:nth-child(3)')
        # 整点风速
        city_wind = soup.select('#day0 > div:nth-child(' + str(i) + ') > div:nth-child(5)')
        # 整点气压
        city_pressure = soup.select('#day0 > div:nth-child(' + str(i) + ') > div:nth-child(7)')
        # 整点相对湿度
        city_humidity = soup.select('#day0 > div:nth-child(' + str(i) + ') > div:nth-child(8)')
        # print(city_name[0].get_text()[0:2], " ", city_time[0].get_text()[-5:], " ", city_temperature[0].get_text(), " ",
        #       city_rain[0].get_text(), " ", city_wind[0].get_text(), " ", city_pressure[0].get_text(), " ",
        #       city_humidity[0].get_text())

        #写入文件
        with open("zhejiang_weather.txt", "a",encoding='utf-8') as f:
            if city_name:
                f.write("%s\t" % city_name[0].get_text()[0:2])
            else:
                f.write("null\t")

            if city_time:
                f.write("%s\t" % city_time[0].get_text()[-5:])
            else:
                f.write("null\t")

            if city_temperature:
                f.write("%s\t" % city_temperature[0].get_text())
            else:
                f.write("null\t")
            if city_rain:
                if(city_rain[0].get_text()=='-'):
                    f.write("0.0mm\t")
                else:
                    f.write("%s\t" % city_rain[0].get_text())
            else:
                f.write("null\t")

            if city_wind:
                f.write("%s\t" % city_wind[0].get_text())
            else:
                f.write("null\t")

            if city_pressure:
                f.write("%s\t" % city_pressure[0].get_text())
            else:
                f.write("null\t")

            if city_humidity:
                f.write("%s\t" % city_humidity[0].get_text())
            else:
                f.write("null\t")
            f.write("\n")



