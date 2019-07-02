//
//  XNViewController.m
//  XNUtils
//
//  Created by Luigi on 06/13/2019.
//  Copyright (c) 2019 Luigi. All rights reserved.
//

#import "XNViewController.h"
#import "XNMacro.h"

@interface XNViewController ()

@end

@implementation XNViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    XNButton *button = [[XNButton alloc] initWithFrame:CGRectMake(100, 100, 100, 100)];
    [button setBackgroundColor:COLOR_BLACK_2C];
    [button setTitleColor:COLOR_WHITE forState:UIControlStateNormal];
    [button setTitle:@"sadada" forState:UIControlStateNormal];
    button.buttonImagePosition = XNButtonImagePosition_Right;
    [button setImage:[UIImage imageNamed:@"my_ic_coupon"] forState:UIControlStateNormal];
    [self.view addSubview:button];

    NSDictionary *dict = @{@"key":@"阿嘎斯",@"array":@[@"阿斯顿",@{@"key":@"打撒"}]};
    NSLog(@"--dict = %@",@[dict]);

}

- (void)viewWillLayoutSubviews{
   
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
