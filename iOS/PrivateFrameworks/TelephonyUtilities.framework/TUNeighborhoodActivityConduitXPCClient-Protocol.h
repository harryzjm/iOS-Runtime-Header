//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSUUID, TUNearbyDeviceHandle;

@protocol TUNeighborhoodActivityConduitXPCClient <NSObject>
- (oneway void)splitSessionEnded:(TUNearbyDeviceHandle *)arg1;
- (oneway void)splitSessionStarted:(TUNearbyDeviceHandle *)arg1;
- (oneway void)tvDeviceDisappeared:(TUNearbyDeviceHandle *)arg1;
- (oneway void)tvDeviceAppeared:(TUNearbyDeviceHandle *)arg1;

@optional
- (void)cancelSplitSessionApproval;
- (void)approveSplitSessionForConversation:(NSUUID *)arg1 requestedFromDevice:(TUNearbyDeviceHandle *)arg2 pullContext:(long long)arg3 completion:(void (^)(_Bool, NSError *))arg4;
@end

