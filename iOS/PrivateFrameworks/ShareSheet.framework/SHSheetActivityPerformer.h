//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSOperationQueue, SHSheetActivityPerformerResult, SHSheetSession, UIActivity, UIActivityViewController;
@protocol SHSheetActivityPerformerDelegate, SHSheetActivityPerformerPresentationInterface;

@interface SHSheetActivityPerformer : NSObject
{
    UIActivity *_activity;
    SHSheetSession *_session;
    id <SHSheetActivityPerformerDelegate> _delegate;
    id <SHSheetActivityPerformerPresentationInterface> _presentationController;
    long long _state;
    SHSheetActivityPerformerResult *_result;
    UIActivityViewController *_activityViewController;
    CDUnknownBlockType _completionHandler;
    NSArray *_activityItemProviderOperations;
    NSOperationQueue *_activityItemProviderOperationQueue;
    unsigned long long _backgroundTaskIdentifier;
    unsigned long long _beginPerformingActivityTimestamp;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long beginPerformingActivityTimestamp; // @synthesize beginPerformingActivityTimestamp=_beginPerformingActivityTimestamp;
@property(nonatomic) unsigned long long backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
@property(retain, nonatomic) NSOperationQueue *activityItemProviderOperationQueue; // @synthesize activityItemProviderOperationQueue=_activityItemProviderOperationQueue;
@property(retain, nonatomic) NSArray *activityItemProviderOperations; // @synthesize activityItemProviderOperations=_activityItemProviderOperations;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) UIActivityViewController *activityViewController; // @synthesize activityViewController=_activityViewController;
@property(retain, nonatomic) SHSheetActivityPerformerResult *result; // @synthesize result=_result;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <SHSheetActivityPerformerPresentationInterface> presentationController; // @synthesize presentationController=_presentationController;
@property(nonatomic) __weak id <SHSheetActivityPerformerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak SHSheetSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) UIActivity *activity; // @synthesize activity=_activity;
- (void)_didFinishAllBackgroundOperations;
- (_Bool)_shouldExecuteItemOperation:(id)arg1;
- (_Bool)_enqueueBackgroundOperationsIfNeeded;
- (void)_configureActivityAfterPreparation;
- (void)_configureActivityBeforePreparation;
- (void)_handlePresentationCompletion;
- (void)_performPresentationWithViewController:(id)arg1;
- (void)_prepareActivityPresentation;
- (_Bool)_presentPopoverContentViewController;
- (void)_prepareActivityWithCompletion:(CDUnknownBlockType)arg1;
- (void)_start;
- (void)_executeActivity;
- (id)_resolvedActivityItems;
- (void)_completePerformingActivityWithState:(long long)arg1 returnedItems:(id)arg2 error:(id)arg3;
- (void)_finishWithState:(long long)arg1;
- (void)finishWithSuccess:(_Bool)arg1;
- (void)cancel;
- (void)performWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool isRunning;
- (void)dealloc;
- (id)initWithActivity:(id)arg1 session:(id)arg2;

@end
