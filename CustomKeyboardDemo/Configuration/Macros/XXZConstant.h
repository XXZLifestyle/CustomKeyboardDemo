//
//  XXZConstant.h
//  Author From Xavier Zachary
//
//  Created by Zachary on 14/10/29.
//  Copyright © 2015年 com.xxzing.future. All rights reserved.
//

#ifndef XXZConstant_h
#define XXZConstant_h

#pragma mark - Constants (宏 常量)

/* ***************************************************** */
#define SecondsOfDay            (24.f * 60.f * 60.f) //一天的秒数
#define Seconds(Days)           (24.f * 60.f * 60.f * (Days)) //秒数
#define MillisecondsOfDay       (24.f * 60.f * 60.f * 1000.f)(UL) //一天的毫秒数
#define Milliseconds(Days)      (24.f * 60.f * 60.f * 1000.f * (Days))(UL) //毫秒数

/* ***************************************************** */
#define XXZStatusBarHeight      (20.f) //状态栏
#define XXZTopBarHeight         (44.f) //导航条
#define XXZTabBarHeight         (49.f) //工具栏
#define XXZStatusAndNavHeight (XXZStatusBarHeight+XXZTopBarHeight)
#define XXZCellDefaultHeight   (44.f) //cell默认高度

//侧栏宽
#define SLIDE_WIDTH 80*RATIO_WIDTH

//底栏宽
#define BOTTOM_HEIGHT 44*RATIO_WIDTH

//键盘高度
#define XXZEnglishKeyboardHeight  (216.f)
#define XXZChineseKeyboardHeight  (252.f)

/* ***************************************************** */
#define IS_LOGIN @"isLogin"
#define INFO_CACHE_NAME @"ShopInfo"
#define IMAGE_CACHE_NAME @"AllImage"
#define MAIN_PATH_KEY @"main_path"

#define EDIT_INFO_NOTIFICATION @"editInfoController"
#define CITY_INFO_NOTIFICATION @"cityInfoNotification"
#define AREA_INFO_NOTIFICATION @"areaInfoNotification"
#define NUM_NOTIFICATION @"numNofication"
#define LOGIN_NOTIFICATION @"loginNotification"

#define ADD_ITEM @"add_item_array"
#define TOP_UP_MONEY @"top_up_money"
#define UPDATE_NUM @"update_num"

#endif /* XXZConstant_h */