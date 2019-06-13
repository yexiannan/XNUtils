//
//  UIColor+XNColor.h
//  XNUtils
//
//  Created by Luigi on 2019/5/31.
//  Copyright © 2019 Luigi. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

#define COLOR_WHITE cHEXCOLOR(0xffffff)
#define COLOR_GARY_BG cHEXCOLOR(0xf5f5f5)
#define COLOR_BLACK_2C cHEXCOLOR(0x2c2c2c)
#define COLOR_BLACK_4C cHEXCOLOR(0x4c4c4c)
#define COLOR_GARY_A1 cHEXCOLOR(0xa1a1a1)
#define COLOR_GARY_E1 cHEXCOLOR(0xe1e1e1)
#define COLOR_PLACEHOLDER cHEXCOLOR(0xC7C7CD)

#define cHEXCOLOR(_hex_) [UIColor colorWithHexString:((__bridge NSString *)CFSTR(#_hex_))]
#define cHEXACOLOR(_hex_,alpha) [UIColor colorWithHexString:((__bridge NSString *)CFSTR(#_hex_)) Alpha:alpha]

@interface UIColor (XNColor)
+ (instancetype)colorWithHexString:(NSString *)hexStr;
+ (instancetype)colorWithHexString:(NSString *)hexStr Alpha:(CGFloat)alpha;
@end

NS_ASSUME_NONNULL_END
