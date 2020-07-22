//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreFollowUpUI/NSObject-Protocol.h>

@class FLFollowUpAction, FLFollowUpItem;

@protocol FLExtensionRemoteContextInterface <NSObject>
- (void)processFollowUpItem:(FLFollowUpItem *)arg1 selectedAction:(FLFollowUpAction *)arg2 completion:(void (^)(_Bool))arg3;

@optional
- (void)followUpPerformUpdateWithCompletionHandler:(void (^)(unsigned long long))arg1;
@end

