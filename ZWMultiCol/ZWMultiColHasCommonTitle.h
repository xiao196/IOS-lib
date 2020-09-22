//
//  ZWMultiColHasCommonTitle.h
//  ZWMultiTbv
//
//  Created by chenzhengwang on 13-12-6.
//  Copyright (c) 2013年 zwchen. All rights reserved.
//

/*
 *      _______________________________
 *      |            strTitle         |
 *      |-----------------------------|
 *      |_title1_|__title2__|_title2__|
*/

#import <Foundation/Foundation.h>

@interface ZWMultiColHasCommonTitle : NSObject
{
    NSInteger m_nStartCol;
    NSInteger m_nNum;//合并列数目
    NSString *m_strTitle;
}

@property (nonatomic, assign)NSInteger nStartCol;
@property (nonatomic, assign)NSInteger nNum;
@property (nonatomic, retain)NSString *strTitle;

@end
