//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDCameraRemoteStreamProtocol-Protocol.h>

@class IDSSession, NSString;

@protocol HMDCameraRemoteStreamReceiverProtocol <HMDCameraRemoteStreamProtocol>
@property(readonly, nonatomic) IDSSession *session;
- (void)setupReceiver:(NSString *)arg1;
@end

