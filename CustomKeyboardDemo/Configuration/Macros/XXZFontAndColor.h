//
//  XXZFontAndColor.h
//  Author From Xavier Zachary
//
//  Created by Zachary on 14/10/29.
//  Copyright © 2015年 com.xxzing.future. All rights reserved.
//

#ifndef XXZFontAndColor_h
#define XXZFontAndColor_h

/* ***************************************************** */
//字体大小
#define BOLD_l0 [UIFont boldSystemFontOfSize:10.0] //四级加粗标题
#define BOLD_l2 [UIFont boldSystemFontOfSize:12.0] //三级加粗标题
#define BOLD_l4 [UIFont boldSystemFontOfSize:14.0] //二级加粗标题
#define BOLD_l6 [UIFont boldSystemFontOfSize:16.0] //一级加粗标题
#define BOLD_l8 [UIFont boldSystemFontOfSize:18.0]
#define BOLD_20 [UIFont boldSystemFontOfSize:20.0]

#define SYSTEM_20 [UIFont systemFontOfSize:20.0]
#define SYSTEM_l8 [UIFont systemFontOfSize:18.0]
#define SYSTEM_l6 [UIFont systemFontOfSize:16.0] //一级标题
#define SYSTEM_l4 [UIFont systemFontOfSize:14.0] //二级标题
#define SYSTEM_l3 [UIFont systemFontOfSize:13.0]
#define SYSTEM_l2 [UIFont systemFontOfSize:12.0] //三级标题
#define SYSTEM_l1 [UIFont systemFontOfSize:11.0]
#define SYSTEM_l0 [UIFont systemFontOfSize:10.0] //四级标题

#if isiPhone6p //6 plus series

#define Multiple 1.5

#define FONT_BOLD_l0  BOLD_l0*Multiple //四级加粗标题
#define FONT_BOLD_l2 BOLD_l2*Multiple //三级加粗标题
#define FONT_BOLD_l4 BOLD_l4*Multiple //二级加粗标题
#define FONT_BOLD_l6 BOLD_l6*Multiple //一级加粗标题
#define FONT_BOLD_l8 BOLD_l8*Multiple
#define FONT_BOLD_20 BOLD_20*Multiple

#define FONT_20 SYSTEM_20*Multiple
#define FONT_l8 SYSTEM_l8*Multiple
#define FONT_l6 SYSTEM_l6*Multiple //一级标题
#define FONT_l4 SYSTEM_l4*Multiple //二级标题
#define FONT_l3 SYSTEM_l3*Multiple
#define FONT_l2 SYSTEM_l2*Multiple //三级标题
#define FONT_l1 SYSTEM_l1*Multiple
#define FONT_l0 SYSTEM_l0*Multiple //四级标题

#else

#define FONT_BOLD_l0  BOLD_l0//四级加粗标题
#define FONT_BOLD_l2 BOLD_l2 //三级加粗标题
#define FONT_BOLD_l4 BOLD_l4 //二级加粗标题
#define FONT_BOLD_l6 BOLD_l6 //一级加粗标题
#define FONT_BOLD_l8 BOLD_l8
#define FONT_BOLD_20 BOLD_20

#define FONT_20 SYSTEM_20
#define FONT_l8 SYSTEM_l8
#define FONT_l6 SYSTEM_l6 //一级标题
#define FONT_l4 SYSTEM_l4 //二级标题
#define FONT_l3 SYSTEM_l3
#define FONT_l2 SYSTEM_l2 //三级标题
#define FONT_l1 SYSTEM_l1
#define FONT_l0 SYSTEM_l0 //四级标题

#endif


/* ***************************************************** */
//颜色
#define UICOLOR_FROM_RGB(r, g, b)         [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:1]
#define UICOLOR_FROM_RGBA(r, g, b, a)   [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:(a)]

#define UICOLOR_FROM_YELLOW   [UIColor colorWithRed:0.988 green:0.710 blue:0.067 alpha:1.0]
#define UICOLOR_FROM_BACKGROUND [UIColor colorWithRed:0.945 green:0.953 blue:0.945 alpha:1.000]

//[UIColor colorWithRed:0.949 green:0.957 blue:0.949 alpha:1.000]

#define UICOLOR_LIGHT UICOLOR_FROM(@"#818589")
#define UICOLOR_DARK UICOLOR_FROM(@"#2d3841")

#define WHITE_COLOR     [UIColor whiteColor]
#define BLACK_COLOR     [UIColor blackColor]
#define CYAN_COLOR       [UIColor cyanColor]


#endif /* XXZFontAndColor_h */
