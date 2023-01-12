//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSError, SBSRemoteAlertHandle;

@protocol SBSRemoteAlertHandleObserver <NSObject>

@optional
- (void)remoteAlertHandle:(SBSRemoteAlertHandle *)arg1 didInvalidateWithError:(NSError *)arg2;
- (void)remoteAlertHandleDidDeactivate:(SBSRemoteAlertHandle *)arg1;
- (void)remoteAlertHandleDidActivate:(SBSRemoteAlertHandle *)arg1;
@end

