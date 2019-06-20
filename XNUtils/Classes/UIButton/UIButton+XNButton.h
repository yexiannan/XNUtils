//
//  UIButton+XNButton.h
//  Car-league_Finacing
//
//  Created by apple on 2019/3/28.
//  Copyright © 2019 lxy. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIButton (XNButton)
+ (UIButton *)newButtonWithBackgroundImage:(nullable UIImage *)image TitleNormalColor:(UIColor *)titleNormalColor Font:(UIFont *)font TitleNormal:(NSString *)titleNormal Taget:(id)taget Action:(SEL)action;
@end

NS_ASSUME_NONNULL_END
