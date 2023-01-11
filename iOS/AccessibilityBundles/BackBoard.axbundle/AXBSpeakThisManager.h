//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSProcessDeathWatcher;
@protocol OS_dispatch_queue;

@interface AXBSpeakThisManager : NSObject
{
    NSObject<OS_dispatch_queue> *_speakThisQueue;
    BSProcessDeathWatcher *_accessibilityUIServerDeathWatcher;
}

+ (void)didUpdateAccessibilityUIServerPID;
+ (void)initializeMonitor;
- (void).cxx_destruct;
- (void)_startWatchingForDeathOfAccessibilityUIServerPID;
- (void)_notifySpeakThisOfSettingsChange;
- (id)init;

@end
