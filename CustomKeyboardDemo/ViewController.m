//
//  ViewController.m
//  CustomKeyboardDemo
//
//  Created by Jiayu_Zachary on 16/1/21.
//  Copyright © 2016年 Zachary. All rights reserved.
//

#import "ViewController.h"
#import "DigitalKeyboard.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    self.view.backgroundColor = UICOLOR_FROM_BACKGROUND;
    
    UITextField *textField = [[UITextField alloc] init];
    textField.frame = CGRectMake(100, 100, SCREEN_WIDTH-100*2, 30*RATIO_WIDTH);
    textField.backgroundColor = [UIColor cyanColor];
    textField.tag = 601;
    textField.placeholder = @"请输入实收金额(必填)";
    textField.keyboardType = UIKeyboardTypeDecimalPad;
    textField.clearButtonMode = UITextFieldViewModeWhileEditing;
//    textField.delegate = self;
    textField.font = FONT_l2;
    textField.textColor = UICOLOR_DARK;
    textField.textAlignment = NSTextAlignmentCenter;
    [self.view addSubview:textField];
    
    UITextField *textField11 = [[UITextField alloc] init];
    textField11.frame = CGRectMake(100, CGRectGetMaxY(textField.frame)+100, SCREEN_WIDTH-100*2, 30*RATIO_WIDTH);
    textField11.backgroundColor = [UIColor cyanColor];
    textField11.tag = 601;
    textField11.placeholder = @"请输入实收金额(必填)";
    textField11.keyboardType = UIKeyboardTypeDecimalPad;
    textField11.clearButtonMode = UITextFieldViewModeWhileEditing;
    //    textField.delegate = self;
    textField11.font = FONT_l2;
    textField11.textColor = UICOLOR_DARK;
    textField11.textAlignment = NSTextAlignmentCenter;
    [self.view addSubview:textField11];
    
    [self loadDigitalKeyboard:textField keyboardType:XXZKeyboardTypeNumberPad];
    [self loadDigitalKeyboard:textField11 keyboardType:XXZKeyboardTypeDecimalPad];
}

//数字键盘
- (void)loadDigitalKeyboard:(UITextField *)textField keyboardType:(XXZKeyboardType)keyboardType{
     DigitalKeyboard *digitalKeyboard = [[DigitalKeyboard alloc] initWithFrame:CGRectZero];
    digitalKeyboard.keyBoardType = keyboardType;
    [digitalKeyboard setCustomKeyboard:textField];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
