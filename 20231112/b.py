# 定义四种书的价格
prices = [20, 15, 13, 6]

# 定义一个函数，输入钱的数额，输出每种书的购买量
def buy_books(money):
  # 初始化一个列表，存储每种书的购买量，初始值为0
  books = [0] * len(prices)
  # 对价格列表进行降序排序
  prices.sort(reverse=True)
  # 从最贵的书开始，遍历价格列表
  for i in range(len(prices)):
    # 计算当前价格的书可以买多少本，取整数部分
    num = money // prices[i]
    # 如果可以买到至少一本
    if num > 0:
      # 更新钱的数额，减去买书的花费
      money -= num * prices[i]
      # 更新购买量列表，记录当前价格的书的购买量
      books[i] = num
    # 如果钱已经用完，或者所有的书都买过了，退出循环
    if money == 0 or i == len(prices) - 1:
      break
  # 返回购买量列表
  return books

# 输入钱的数额，转换为整数
money = int(input())
# 调用函数，得到每种书的购买量
books = buy_books(money)
# 输出每种书的购买量，用空格分隔
print(*books)
