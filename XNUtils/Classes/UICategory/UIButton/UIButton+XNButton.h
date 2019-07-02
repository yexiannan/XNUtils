//
//  UIButton+XNButton.h
//  Car-league_Finacing
//
//  Created by apple on 2019/3/28.
//  Copyright © 2019 lxy. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger ,XNButtonImagePosition) {
    XNButtonImagePosition_Left,
    XNButtonImagePosition_Right,
    XNButtonImagePosition_Top,
    XNButtonImagePosition_Bottom,
};

@interface UIButton (XNButton)
/**
 图片位置
 */
@property (nonatomic, assign) XNButtonImagePosition buttonImagePosition;

+ (UIButton *)newButtonWithBackgroundImage:(nullable UIImage *)image TitleNormalColor:(UIColor *)titleNormalColor Font:(UIFont *)font TitleNormal:(NSString *)titleNormal Taget:(nullable id)taget Action:(nullable SEL)action;

@end

NS_ASSUME_NONNULL_END
