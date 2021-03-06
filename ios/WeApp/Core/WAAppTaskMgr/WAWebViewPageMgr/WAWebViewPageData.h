//
//  WAPageModel.h
//  WeAppExample
//
//  Created by lionvoom on 2020/11/22.
//  Copyright © 2020 wept. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WATabbarStyle.h"
#import "WAPageStyle.h"

@interface WAWebViewPageData : NSObject
@property (nonatomic, assign) NSInteger pageId;
@property (nonatomic, copy) NSString *pagePath;
@property (nonatomic, copy) NSDictionary *query;
@property (nonatomic, copy) NSString *openType;
@property (nonatomic, strong) WAPageStyle *pageStyle;
@property (nonatomic, strong) WATabbarStyle *tabbarStyle;

@property (nonatomic, copy) NSString *backType;
@property (nonatomic, assign) BOOL isTabbarVC;
@end
