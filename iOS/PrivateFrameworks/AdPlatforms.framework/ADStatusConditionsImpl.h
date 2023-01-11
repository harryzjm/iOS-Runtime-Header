//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AdPlatforms/ADStatusConditions_XPC-Protocol.h>

@interface ADStatusConditionsImpl : NSObject <ADStatusConditions_XPC>
{
}

- (id)setupXPCConnection;
- (void)isStatusConditionRegistered:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)clearStatusCondition:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setStatusCondition:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
