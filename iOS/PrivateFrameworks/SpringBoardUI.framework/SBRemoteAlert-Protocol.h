//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUI/NSObject-Protocol.h>

@class SBSRemoteAlertConfigurationContext, SBSRemoteAlertDefinition;
@protocol SBRemoteAlertDelegate;

@protocol SBRemoteAlert <NSObject>
+ (void)requestWithDefinition:(SBSRemoteAlertDefinition *)arg1 context:(SBSRemoteAlertConfigurationContext *)arg2 delegate:(id <SBRemoteAlertDelegate>)arg3 completion:(void (^)(id <SBRemoteAlert>, NSError *))arg4;
@property(readonly, nonatomic) __weak id <SBRemoteAlertDelegate> remoteAlertDelegate;
@end

