//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDCameraSessionID;

@protocol HMDSnapshotRequestHandlerProtocol <NSObject>
- (void)requestSnapshot:(HMDCameraSessionID *)arg1 streamingTierType:(unsigned long long)arg2 completionHandler:(void (^)(HMDSnapshotFile *, NSError *))arg3;
@end

