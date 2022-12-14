# CMake generated Testfile for 
# Source directory: /home/codio/workspace/hw2/hw2_tests/hw2_tests/amazon_tests
# Build directory: /home/codio/workspace/hw2/hw2_tests/hw2_tests/amazon_tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(DatabaseReadback.EmptyDatabase "/home/codio/workspace/hw2/hw2_tests/hw2_tests/amazon_tests/amazon_tests" "--gtest_filter=DatabaseReadback.EmptyDatabase")
add_test(DatabaseReadback.Book "/home/codio/workspace/hw2/hw2_tests/hw2_tests/amazon_tests/amazon_tests" "--gtest_filter=DatabaseReadback.Book")
add_test(DatabaseReadback.Clothing "/home/codio/workspace/hw2/hw2_tests/hw2_tests/amazon_tests/amazon_tests" "--gtest_filter=DatabaseReadback.Clothing")
add_test(DatabaseReadback.Movie "/home/codio/workspace/hw2/hw2_tests/hw2_tests/amazon_tests/amazon_tests" "--gtest_filter=DatabaseReadback.Movie")
add_test(DatabaseReadback.User "/home/codio/workspace/hw2/hw2_tests/hw2_tests/amazon_tests/amazon_tests" "--gtest_filter=DatabaseReadback.User")
add_test(DatabaseReadback.Mixed "/home/codio/workspace/hw2/hw2_tests/hw2_tests/amazon_tests/amazon_tests" "--gtest_filter=DatabaseReadback.Mixed")
add_test(ConsoleInterface.Quit "/home/codio/workspace/hw2/hw2_tests/hw2_tests/amazon_tests/amazon_tests" "--gtest_filter=ConsoleInterface.Quit")
add_test(ConsoleInterface.HitBook "/home/codio/workspace/hw2/hw2_tests/hw2_tests/amazon_tests/amazon_tests" "--gtest_filter=ConsoleInterface.HitBook")
add_test(ConsoleInterface.HitClothing "/home/codio/workspace/hw2/hw2_tests/hw2_tests/amazon_tests/amazon_tests" "--gtest_filter=ConsoleInterface.HitClothing")
add_test(ConsoleInterface.HitMovie "/home/codio/workspace/hw2/hw2_tests/hw2_tests/amazon_tests/amazon_tests" "--gtest_filter=ConsoleInterface.HitMovie")
add_test(ConsoleInterface.CaseInsensitive "/home/codio/workspace/hw2/hw2_tests/hw2_tests/amazon_tests/amazon_tests" "--gtest_filter=ConsoleInterface.CaseInsensitive")
add_test(ConsoleInterface.HugeQuantity "/home/codio/workspace/hw2/hw2_tests/hw2_tests/amazon_tests/amazon_tests" "--gtest_filter=ConsoleInterface.HugeQuantity")
add_test(ConsoleInterface.AddOneToCart "/home/codio/workspace/hw2/hw2_tests/hw2_tests/amazon_tests/amazon_tests" "--gtest_filter=ConsoleInterface.AddOneToCart")
add_test(Database.BuyCart "/home/codio/workspace/hw2/hw2_tests/hw2_tests/amazon_tests/amazon_tests" "--gtest_filter=Database.BuyCart")
add_test(DatabaseReadback.ThreeBooks "/home/codio/workspace/hw2/hw2_tests/hw2_tests/amazon_tests/amazon_tests" "--gtest_filter=DatabaseReadback.ThreeBooks")
add_test(DatabaseReadback.ThreeClothes "/home/codio/workspace/hw2/hw2_tests/hw2_tests/amazon_tests/amazon_tests" "--gtest_filter=DatabaseReadback.ThreeClothes")
add_test(DatabaseReadback.ThreeMovies "/home/codio/workspace/hw2/hw2_tests/hw2_tests/amazon_tests/amazon_tests" "--gtest_filter=DatabaseReadback.ThreeMovies")
add_test(ConsoleInterface.AddTwoItems "/home/codio/workspace/hw2/hw2_tests/hw2_tests/amazon_tests/amazon_tests" "--gtest_filter=ConsoleInterface.AddTwoItems")
add_test(ConsoleInterface.AddTwoIdenticalItems "/home/codio/workspace/hw2/hw2_tests/hw2_tests/amazon_tests/amazon_tests" "--gtest_filter=ConsoleInterface.AddTwoIdenticalItems")
add_test(Database.BuyCartTwoItems "/home/codio/workspace/hw2/hw2_tests/hw2_tests/amazon_tests/amazon_tests" "--gtest_filter=Database.BuyCartTwoItems")
add_test(ConsoleInterface.OrMultipleHit "/home/codio/workspace/hw2/hw2_tests/hw2_tests/amazon_tests/amazon_tests" "--gtest_filter=ConsoleInterface.OrMultipleHit")
add_test(ConsoleInterface.AndMultipleHit "/home/codio/workspace/hw2/hw2_tests/hw2_tests/amazon_tests/amazon_tests" "--gtest_filter=ConsoleInterface.AndMultipleHit")
add_test(ConsoleInterface.AddToTwoUsersCarts "/home/codio/workspace/hw2/hw2_tests/hw2_tests/amazon_tests/amazon_tests" "--gtest_filter=ConsoleInterface.AddToTwoUsersCarts")
add_test(ConsoleInterface.AddSameProductTwoUsersCarts "/home/codio/workspace/hw2/hw2_tests/hw2_tests/amazon_tests/amazon_tests" "--gtest_filter=ConsoleInterface.AddSameProductTwoUsersCarts")
add_test(ConsoleInterface.AddTwoProductsTwoUsers "/home/codio/workspace/hw2/hw2_tests/hw2_tests/amazon_tests/amazon_tests" "--gtest_filter=ConsoleInterface.AddTwoProductsTwoUsers")
add_test(Database.BuyTwoProductsTwoUsers "/home/codio/workspace/hw2/hw2_tests/hw2_tests/amazon_tests/amazon_tests" "--gtest_filter=Database.BuyTwoProductsTwoUsers")
add_test(ConsoleInterface.BuyCartInsufficientFunds "/home/codio/workspace/hw2/hw2_tests/hw2_tests/amazon_tests/amazon_tests" "--gtest_filter=ConsoleInterface.BuyCartInsufficientFunds")
add_test(Database.BuyCartInsufficientFunds "/home/codio/workspace/hw2/hw2_tests/hw2_tests/amazon_tests/amazon_tests" "--gtest_filter=Database.BuyCartInsufficientFunds")
add_test(ConsoleInterface.AddItemToMultipleUsers "/home/codio/workspace/hw2/hw2_tests/hw2_tests/amazon_tests/amazon_tests" "--gtest_filter=ConsoleInterface.AddItemToMultipleUsers")
add_test(Database.BuySingleStockItemMultipleUsers "/home/codio/workspace/hw2/hw2_tests/hw2_tests/amazon_tests/amazon_tests" "--gtest_filter=Database.BuySingleStockItemMultipleUsers")
add_test(ConsoleErrors.ViewCartUnknownUser "/home/codio/workspace/hw2/hw2_tests/hw2_tests/amazon_tests/amazon_tests" "--gtest_filter=ConsoleErrors.ViewCartUnknownUser")
add_test(ConsoleErrors.BuyCartUnknownUser "/home/codio/workspace/hw2/hw2_tests/hw2_tests/amazon_tests/amazon_tests" "--gtest_filter=ConsoleErrors.BuyCartUnknownUser")
add_test(ConsoleErrors.AddInvalidHitToCart "/home/codio/workspace/hw2/hw2_tests/hw2_tests/amazon_tests/amazon_tests" "--gtest_filter=ConsoleErrors.AddInvalidHitToCart")
add_test(AmazonStress.Buy10000Products "/home/codio/workspace/hw2/hw2_tests/hw2_tests/amazon_tests/amazon_tests" "--gtest_filter=AmazonStress.Buy10000Products")
add_test(AmazonStress.AndSearch10000Products "/home/codio/workspace/hw2/hw2_tests/hw2_tests/amazon_tests/amazon_tests" "--gtest_filter=AmazonStress.AndSearch10000Products")
