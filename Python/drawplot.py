import matplotlib.pyplot as plt
import xlrd


#求数组部分平均值
def my_mean(list, loc, n):
    sum = 0
    for i in range(2*n+1):
        sum = sum +list[loc-n+i]
    return sum/(2*n+1)


wb = xlrd.open_workbook(r'C:\python practice\sin plot\statics.xlsx')
sheet1 = wb.sheet_by_index(0)

'''
#绘制原数据
x_data = []
row0 = sheet1.row_values(0)

for i in range(120):
    x_data.append(row0[i])
 
for j in range(3):
    y_data = []
    rowj = sheet1.row_values(j+1)
    for k in range(120):
        y_data.append(rowj[k])
    plt.plot(x_data, y_data, linewidth=1)
'''

half = 5
x_data = []
row0 = sheet1.row_values(0)
for i in range(120):
    if(i>=half)and(i<120-half):
        x_data.append(row0[i])
        print(row0[i])

for j in range(3):
    y_data = []
    rowj = sheet1.row_values(j+1)
    for k in range(120):
        if (k>=half) and (k<120-half):
            temp=my_mean(rowj, k, half)
            y_data.append(temp)

    plt.plot(x_data, y_data, linewidth=1)

plt.title(u"I-t")
plt.xlabel(u"t")
plt.ylabel(u"I")

plt.show()
