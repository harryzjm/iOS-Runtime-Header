//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BCSNotificationServiceConnection;
@protocol OS_dispatch_queue;

@interface BCSNFCReaderConnection : NSObject
{
    BCSNotificationServiceConnection *_notificationServiceConnection;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)disconnect;
- (void)stopReaderWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)startReaderWithDelegate:(id)arg1 errorHandler:(CDUnknownBlockType)arg2 interruptionHandler:(CDUnknownBlockType)arg3;
- (long long)_hardwareSupportState;
- (void)checkHardwareSupportStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)_enableNFC;
- (void)enableNFCWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)_isNFCEnabled;
- (void)checkNFCEnabledWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end
