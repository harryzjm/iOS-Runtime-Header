//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class CTCallCenter, IMAVCallManager;
@protocol NSObject, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIDictationTelephonyMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    CTCallCenter *_callCentre;
    IMAVCallManager *_facetimeCallManager;
    id <NSObject> _notificationToken;
    _Bool _telephonyActivity;
    CDUnknownBlockType _activityChanged;
}

@property(copy) CDUnknownBlockType activityChanged; // @synthesize activityChanged=_activityChanged;
@property(readonly, nonatomic) _Bool telephonyActivity; // @synthesize telephonyActivity=_telephonyActivity;
- (void)_backgroundReset;
- (void)_backgroundInit;
- (void)dealloc;
- (id)init;
- (void)start;

@end

