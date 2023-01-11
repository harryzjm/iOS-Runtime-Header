//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CarPlaySupport/CPSApplicationStateObserving-Protocol.h>
#import <CarPlaySupport/CPSButtonDelegate-Protocol.h>

@class CPNavigationAlert, CPSApplicationStateMonitor, CPSNavigationAlertView, NSString, NSTimer;
@protocol CPSNavigationAlertQueueDelegate, CPTemplateDelegate;

@interface CPSNavigationAlertQueue : NSObject <CPSButtonDelegate, CPSApplicationStateObserving>
{
    id <CPSNavigationAlertQueueDelegate> _delegate;
    CPNavigationAlert *_currentAlert;
    CPSNavigationAlertView *_currentAlertView;
    NSTimer *_alertTimer;
    id <CPTemplateDelegate> _templateDelegate;
    CPSApplicationStateMonitor *_applicationStateMonitor;
}

@property(nonatomic) __weak CPSApplicationStateMonitor *applicationStateMonitor; // @synthesize applicationStateMonitor=_applicationStateMonitor;
@property(nonatomic) __weak id <CPTemplateDelegate> templateDelegate; // @synthesize templateDelegate=_templateDelegate;
@property(retain, nonatomic) NSTimer *alertTimer; // @synthesize alertTimer=_alertTimer;
@property(readonly, nonatomic) CPSNavigationAlertView *currentAlertView; // @synthesize currentAlertView=_currentAlertView;
@property(readonly, nonatomic) CPNavigationAlert *currentAlert; // @synthesize currentAlert=_currentAlert;
@property(readonly, nonatomic) __weak id <CPSNavigationAlertQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)applicationStateMonitor:(id)arg1 didBecomeActive:(_Bool)arg2;
- (void)didSelectButton:(id)arg1;
- (void)_visibleAlertTimerFired:(id)arg1;
- (void)_startAlertAnimations;
- (_Bool)_canBeginAnimatingAlert;
- (void)beginAnimatingAlertIfPossible;
- (void)dismissCurrentNavigationAlertAnimated:(_Bool)arg1 context:(unsigned long long)arg2;
- (void)prepareNavigationAlert:(id)arg1 templateDelegate:(id)arg2 animated:(_Bool)arg3;
@property(readonly, nonatomic) _Bool canDisplayAlert;
- (id)initWithDelegate:(id)arg1 applicationStateMonitor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

