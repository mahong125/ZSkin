//
//  ZImageSkin.h
//  ZSkin
//
//  Created by peter.shi on 16/7/14.
//  Copyright © 2016年 peter.shi. All rights reserved.
//

#import <Foundation/Foundation.h>

@class UIImage;
@class UIColor;

/**
 *  ZImageSkin
 */
@interface ZImageSkin : NSObject

@property (nonatomic) NSString *path;

- (id)initWithPath:(NSString *)path;

- (UIImage *)imageNamed:(NSString *)name;

+ (UIImage *)imageNamed:(NSString *)name inBundle:(NSString *)bundleName;

@end
