//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SYApplicationStateObserver, SYDocumentWorkflowsActivityChangeHandler, SYDocumentWorkflowsCloseConfirmationSettings;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SYDocumentWorkflowsActivityObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_observerQueue;
    SYApplicationStateObserver *_appStateObserver;
    SYDocumentWorkflowsCloseConfirmationSettings *_closeConfirmationSettings;
    SYDocumentWorkflowsActivityChangeHandler *_handler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SYDocumentWorkflowsActivityChangeHandler *handler; // @synthesize handler=_handler;
- (void)_updateLinkedDocuments;
- (void)_handleActiveUserActivityChangeAfterDelay:(id)arg1;
- (void)_handleActiveUserActivityChange:(id)arg1;
- (void)userActivityPersistentIdentifierWasChanged:(id)arg1 persistentIdentifier:(id)arg2 previousValue:(id)arg3;
- (void)userActivityDidBecomeCurrent:(id)arg1 current:(_Bool)arg2;
- (void)_handleAppResignActive:(id)arg1;
- (void)_handleAppBecomeActive:(id)arg1;
- (void)registerForAppStateNotifications;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

