//
//  HWConfigurationHelper.h
//  MyPersonalLibrary
//
//  Created by 黄炜 on 2018/3/14.
//  Copyright © 2018年 黄炜. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HWConfigurationHelper : NSObject

+(void)setApplicationStartupDefaults;

+(BOOL)getBoolValueForConfigurationKey:(NSString *)_objectkey;

+(NSString *)getStringValueForConfigurationKey:(NSString *)_objectkey;

+(void)setBoolValueForConfigurationKey:(NSString *)_objectkey withValue:(BOOL)_boolValue;

@end
