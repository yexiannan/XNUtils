//
//  UIButton+XNButton.m
//  Car-league_Finacing
//
//  Created by apple on 2019/3/28.
//  Copyright © 2019 lxy. All rights reserved.
//

#import "UIButton+XNButton.h"

@implementation UIButton (XNButton)
+ (UIButton *)newButtonWithBackgroundImage:(nullable UIImage *)image TitleNormalColor:(UIColor *)titleNormalColor Font:(UIFont *)font TitleNormal:(NSString *)titleNormal Taget:(id)taget Action:(SEL)action{
    UIButton *button = [UIButton new];
    [image isKindOfClass:[UIImage class]]?[button setBackgroundImage:image forState:UIControlStateNormal]:nil;
    [button.titleLabel setFont:font];
    [button setTitleColor:titleNormalColor forState:UIControlStateNormal];
    [button setTitle:titleNormal forState:UIControlStateNormal];
    [button addTarget:taget action:action forControlEvents:UIControlEventTouchUpInside];

    return button;
}
@end
