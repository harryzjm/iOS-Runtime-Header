//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCaptureDeviceInput, NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVCaptureDeviceInternal : NSObject
{
    int openRefCount;
    int configLockRefCount;
    int configLockPid;
    _Bool usingDevice;
    AVCaptureDeviceInput *activeInput;
    NSMutableArray *activeReactions;
}

- (void)dealloc;
- (id)init;

@end

