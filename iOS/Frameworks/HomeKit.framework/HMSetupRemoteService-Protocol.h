//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMSetupAccessoryDescription, NSError, NSUUID;

@protocol HMSetupRemoteService
- (void)setupInterruptedWithError:(NSError *)arg1;
- (void)setupFailedWithError:(NSError *)arg1;
- (void)setHomeUUID:(NSUUID *)arg1 accessoryDescription:(HMSetupAccessoryDescription *)arg2;
@end
