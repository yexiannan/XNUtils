//
//  XNMacro.h
//  XNUtils
//
//  Created by Luigi on 2019/5/30.
//  Copyright © 2019 Luigi. All rights reserved.
//

#ifndef XNMacro_h
#define XNMacro_h

#import "NSArray+XNArray.h"
#import "NSDate+XNDate.h"
#import "UIColor+XNColor.h"
#import "UIFont+XNFont.h"
#import "UIView+YYAdd.h"
#import "UIView+XNView.h"
#import "UIImage+XNImage.h"
#import "CALayer+XNLayer.h"


//---------------------------Log打印时间戳与日志所在文件位置---------------------------
#ifdef DEBUG
#define NSLog(...) printf("\n [Date:%f]\n [Function:%s]\n [Line:%d]\n %s\n",[[NSDate date]timeIntervalSince1970], __FUNCTION__, __LINE__,[[NSString stringWithFormat:__VA_ARGS__] UTF8String]);
#else
#define NSLog(format, ...)
#endif


//--------------------------生成 weak automatic 变量------------------------
#ifndef weakify
#if __has_feature(objc_arc)
#define weakify(x) \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Wshadow\"") \
autoreleasepool{} __weak __typeof__(x) __weak_##x##__ = x; \
_Pragma("clang diagnostic pop")
#else
#define weakify(x) \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Wshadow\"") \
autoreleasepool{} __block __typeof__(x) __block_##x##__ = x; \
_Pragma("clang diagnostic pop")
#endif  // end arc
#endif  // end weakify

//-------------------------生成 strong automatic 变量------------------------------
#ifndef strongify
#if __has_feature(objc_arc)
#define strongify(x) \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Wshadow\"") \
try{} @finally{} __typeof__(x) x = __weak_##x##__; \
_Pragma("clang diagnostic pop")
#else
#define strongify(x) \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Wshadow\"") \
try{} @finally{} __typeof__(x) x = __block_##x##__; \
_Pragma("clang diagnostic pop")
#endif  // end arc
#endif  // end strongify

//--------------------------添加线程锁------------------------
#define CLLOCK(lock) dispatch_semaphore_wait(lock, DISPATCH_TIME_FOREVER);
#define CLUNLOCK(lock) dispatch_semaphore_signal(lock);

//-------------------------判断代理是否响应-------------------------
#define DELEGATE_IS_READY(x) (self.delegate && [self.delegate respondsToSelector:@selector(x)])


//------------------------屏幕适配-----------------------------
//屏幕高度
#define SCREEN_HEIGHT    ([UIScreen mainScreen].bounds.size.height)
//屏幕宽度
#define SCREEN_WIDTH    ([UIScreen mainScreen].bounds.size.width)
//导航栏高度
#define NavigationBarHeight 44.f
//底部标签栏高度
#define TabBarHeight 49.f
//比例宽度
#define Ratio_WIDTH_375     (SCREEN_WIDTH/375.f)
//比例高度
#define Ratio_HEIGHT_667    (SCREEN_HEIGHT/667.f)

#endif /* XNMacro_h */
