//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <XCUIAutomation/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol XCUIApplicationManaging <NSObject>
- (void)launchProcessWithPath:(NSString *)arg1 bundleID:(NSString *)arg2 arguments:(NSArray *)arg3 environmentVariables:(NSDictionary *)arg4 completion:(void (^)(id, NSError *))arg5;
@end

