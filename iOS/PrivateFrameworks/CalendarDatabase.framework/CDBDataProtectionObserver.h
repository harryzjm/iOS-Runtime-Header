//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CalDeviceLockObserver;

@interface CDBDataProtectionObserver : NSObject
{
    CDUnknownBlockType _stateChangedCallback;
    CalDeviceLockObserver *_deviceLockObserver;
}

+ (id)stateChangedNotificationName;
@property(retain, nonatomic) CalDeviceLockObserver *deviceLockObserver; // @synthesize deviceLockObserver=_deviceLockObserver;
@property(copy, nonatomic) CDUnknownBlockType stateChangedCallback; // @synthesize stateChangedCallback=_stateChangedCallback;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool dataIsAccessible;
- (void)_deviceLockStateChanged;
- (id)init;

@end

