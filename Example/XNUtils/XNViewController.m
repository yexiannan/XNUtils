//
//  XNViewController.m
//  XNUtils
//
//  Created by Luigi on 06/13/2019.
//  Copyright (c) 2019 Luigi. All rights reserved.
//

#import "XNViewController.h"
#import "NSArray+XNArray.h"
#import "NSDictionary+XNDictionary.h"

@interface XNViewController ()

@end

@implementation XNViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    NSObject *obj = [NSObject new];
    NSDictionary *dict = @{
                           @"key1_0": @"可以显示中文了",
                           @"key1_1" : @"value1_1",
                           @"obj" : obj,
                           @"key1_2" : @[
                                   @{
                                       @"list1" : @"我是list1 \0 list1"
                                       },
                                   @{
                                       @"list2" : @"我是list2"
                                       }
                                   ],
                           @"key_3" : @"~^\\1\0name\0loriange/^~  end"
                           };
    NSLog(@"----- dict = %@",@[dict]);
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
