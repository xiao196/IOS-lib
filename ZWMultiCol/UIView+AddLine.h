//
//  UIView+AddLine.h
//  ZWMultiTbv
//
//  Created by chenzhengwang on 13-12-6.
//  Copyright (c) 2013年 zwchen. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView(AddLine)

- (UIView *)addTopLineWithWidth:(CGFloat)width color:(UIColor *)color;
- (UIView *)addBottomLineWithWidth:(CGFloat)width color:(UIColor *)color;

- (UIView *)addVerticalLineWithWidth:(CGFloat)width color:(UIColor *)color atX:(CGFloat)x;

- (UIView *)addLineWithRect:(CGRect)rect color:(UIColor *)color;

@end
