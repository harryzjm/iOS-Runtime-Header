//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface IMCommSafetySettingsManager : NSObject
{
    int _notificationToken;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_semaphore> *_updateInProgress;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *updateInProgress; // @synthesize updateInProgress=_updateInProgress;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue; // @synthesize isolationQueue=_isolationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
- (void)_connectToFamilyCircle:(CDUnknownBlockType)arg1;
- (void)_updateSettings;
- (void)dealloc;
- (id)init;

@end
