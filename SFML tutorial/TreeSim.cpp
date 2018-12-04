//#include "TreeSim.h"
//
//TreeSim::TreeSim()
//{
//	this->mMonth = 0;
//}
//
//void TreeSim::setmMonth(int nMonth)
//{
//	this->mMonth = nMonth;
//}
//
//int TreeSim::getmMonth()
//{
//	return this->mMonth;
//}
//
//void TreeSim::runSim()
//{
//	TreeSim userTree;
//	sf::RenderWindow window(sf::VideoMode(1000, 1000), "sup");
//	sf::Event event;
//
//	while (userTree.mMonth != 12)
//	{
//		userTree.incmMonth();
//
//		window.clear();
//	
//		userTree.mtStats.setmNumWater(userTree.getUserWater(window));
//		userTree.mtStats.setmNumFert(userTree.getUserFert(window));
//
//		window.display();
//		
//	}
//
//
//	/*	while (until window is closed)	//figure out smfl window
//		{
//			userTree.incmMonth();
//
//			userTree.mtStats.setmNumWater(userTree.getUserWater());
//			userTree.mtStats.setmNumFert(userTree.getUserFert());
//
//
//
//		}
//
//		*/
//}
//
//
//int TreeSim::getUserWater(sf::RenderWindow &window)
//{
//	int water = 0;
//
//	sf::Text text;
//	sf::Font font;
//
//	text.setFont(font);
//	text.setString("Enter the Number of Times a Week you'd like to Water your Tree for Month ");	//figure out how to show mMonths
//	text.setCharacterSize(24);
//	text.setFillColor(sf::Color::Black);
//
//	window.draw(text);		//figure out how to display
//	window.display();		//does this need to be here or in the runSim loop?
//
//	sf::Event event;
//
//	while (window.pollEvent(event))
//	{
//		if (event.type == sf::Event::KeyPressed)
//		{
//			if (event.key.code == sf::Keyboard::Key::Num7)
//			{
//				water = 7;
//			}
//
//			else if (event.key.code == sf::Keyboard::Key::Num6)
//			{
//				water = 6;
//			}
//
//			else if (event.key.code == sf::Keyboard::Key::Num5)
//			{
//				water = 5;
//			}
//
//			else if (event.key.code == sf::Keyboard::Key::Num4)
//			{
//				water = 4;
//			}
//			
//			else if (event.key.code == sf::Keyboard::Key::Num3)
//			{
//				water = 3;
//			}
//
//			else if (event.key.code == sf::Keyboard::Key::Num2)
//			{
//				water = 2;
//			}
//
//			else if (event.key.code == sf::Keyboard::Key::Num1)
//			{
//				water = 1;
//			}
//
//			else
//			{
//				water = 0;
//			}
//		}
//	}
//
//
//
//
//	/*cout << "Enter the Number of Times a Week you'd like to Water your Tree for Month " << mMonth << endl;
//	cin >> water;*/
//
//	return water;
//
//}
//
//int TreeSim::getUserFert(sf::RenderWindow &window)
//{
//	int fert = 0;
//
//	sf::Text text;
//	sf::Font font;
//
//	text.setFont(font);
//	text.setString("Enter the Number of Times a Week you'd like to Fertilize your Tree for Month ");	//figure out how to show mMonths
//	text.setCharacterSize(24);
//	text.setFillColor(sf::Color::Black);
//
//	window.draw(text);
//	window.display();		//does this need to be here or in runSim loop?
//
//	sf::Event event;
//
//	while (window.pollEvent(event))
//	{
//		if (event.type == sf::Event::KeyPressed)
//		{
//			if (event.key.code == sf::Keyboard::Key::Num7)
//			{
//				fert = 7;
//			}
//
//			else if (event.key.code == sf::Keyboard::Key::Num6)
//			{
//				fert = 6;
//			}
//
//			else if (event.key.code == sf::Keyboard::Key::Num5)
//			{
//				fert = 5;
//			}
//
//			else if (event.key.code == sf::Keyboard::Key::Num4)
//			{
//				fert = 4;
//			}
//
//			else if (event.key.code == sf::Keyboard::Key::Num3)
//			{
//				fert = 3;
//			}
//
//			else if (event.key.code == sf::Keyboard::Key::Num2)
//			{
//				fert = 2;
//			}
//
//			else if (event.key.code == sf::Keyboard::Key::Num1)
//			{
//				fert = 1;
//			}
//
//			else
//			{
//				fert = 0;
//			}
//		}
//	}
//	return fert;
//}
//
//void TreeSim::incmMonth()
//{
//	mMonth = mMonth + 1;
//}