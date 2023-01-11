//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoVisibilityManager-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol SVVideoQueueObserving, SVVideoTransitionManager, SVVideoVisibilityMonitorProviding, SVVideoVisiblePercentageManager;

@interface SVVideoVisibilityManager : NSObject <SVVideoVisibilityManager>
{
    id <SVVideoVisibilityMonitorProviding> _visibilityMonitorProvider;
    id <SVVideoTransitionManager> _transitionManager;
    id <SVVideoQueueObserving> _queueObserver;
    id <SVVideoVisiblePercentageManager> _visiblePercentageManager;
    NSMutableDictionary *_visibilityMonitors;
}

@property(readonly, nonatomic) NSMutableDictionary *visibilityMonitors; // @synthesize visibilityMonitors=_visibilityMonitors;
@property(readonly, nonatomic) id <SVVideoVisiblePercentageManager> visiblePercentageManager; // @synthesize visiblePercentageManager=_visiblePercentageManager;
@property(readonly, nonatomic) id <SVVideoQueueObserving> queueObserver; // @synthesize queueObserver=_queueObserver;
@property(readonly, nonatomic) id <SVVideoTransitionManager> transitionManager; // @synthesize transitionManager=_transitionManager;
@property(readonly, nonatomic) id <SVVideoVisibilityMonitorProviding> visibilityMonitorProvider; // @synthesize visibilityMonitorProvider=_visibilityMonitorProvider;
- (void).cxx_destruct;
- (void)unlock;
- (void)lock;
- (void)updateVisibility;
- (void)stopMonitoringVideo:(id)arg1;
- (void)startMonitoringVideo:(id)arg1;
- (id)initWithTransitionManager:(id)arg1 queueObserver:(id)arg2 visibilityMonitorProvider:(id)arg3 visiblePercentageManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

