//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDMessageChangeHookResponder-Protocol.h>
#import <EmailDaemon/EFLoggable-Protocol.h>

@class NSArray, NSDate, NSString;

@interface EDWidgetUpdateController : NSObject <EFLoggable, EDMessageChangeHookResponder>
{
    NSArray *_timelineControllers;
    NSDate *_lastUpdate;
    long long _numberOfUpdates;
}

+ (id)log;
- (void).cxx_destruct;
@property(nonatomic) long long numberOfUpdates; // @synthesize numberOfUpdates=_numberOfUpdates;
@property(retain, nonatomic) NSDate *lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property(retain, nonatomic) NSArray *timelineControllers; // @synthesize timelineControllers=_timelineControllers;
- (void)_writeUserDefaults;
- (void)_restoreFromUserDefaults;
- (void)persistenceDidChangeFlags:(id)arg1 messages:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceDidAddMessages:(id)arg1 generationWindow:(id)arg2;
- (void)_updateLastUpdateInformation;
- (void)_refreshTimelines;
- (long long)_activityDelay;
- (void)_runActivity;
- (void)dealloc;
- (void)_scheduleActivity;
- (id)initWithWidgetBundleIdentifier:(id)arg1 widgetKindIdentifiers:(id)arg2 hookRegistry:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
