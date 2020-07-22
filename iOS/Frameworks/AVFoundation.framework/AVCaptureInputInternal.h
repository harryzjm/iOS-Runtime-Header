//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class AVCaptureSession;
@protocol OS_dispatch_queue;

@interface AVCaptureInputInternal : NSObject
{
    AVCaptureSession *session;
    NSObject<OS_dispatch_queue> *figCaptureSessionSyncQueue;
    struct OpaqueFigCaptureSession *figCaptureSession;
}

- (void)dealloc;
- (id)init;

@end

