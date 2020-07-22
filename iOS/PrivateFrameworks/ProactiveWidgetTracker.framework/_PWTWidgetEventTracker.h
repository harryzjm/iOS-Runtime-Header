//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PETDistributionEventTracker, PETGoalConversionEventTracker, PETScalarEventTracker;

@interface _PWTWidgetEventTracker : NSObject
{
    NSString *_identifier;
    PETScalarEventTracker *_resizeTracker;
    PETGoalConversionEventTracker *_conversionTracker;
    PETScalarEventTracker *_updateTracker;
    PETDistributionEventTracker *_screenLingerTracker;
    PETScalarEventTracker *_foregroundingTracker;
    _Bool _hasReceivedActiveDisplayModeChangeNotificationOnce;
    _Bool _isCurrentlyVisible;
    _Bool _willBecomeVisible;
    _Bool _didBecomeVisibleWhileLocked;
    _Bool _widgetIsForeground;
    _Bool _widgetWasEverForeground;
    long long _activeDisplayMode;
    double _lastAppearTime;
}

@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)userEngagedWithWidget;
- (void)widgetDidBecomeForeground:(_Bool)arg1;
- (void)widgetActiveDisplayModeDidChange:(long long)arg1 withMaximumSize:(struct CGSize)arg2;
- (void)widgetPerformedUpdateWithResult:(unsigned long long)arg1;
- (void)widgetDidDisappear;
- (void)widgetWillDisappear;
- (void)widgetDidAppear;
- (void)widgetWillAppear;
- (id)initWithIdentifier:(id)arg1;

@end
