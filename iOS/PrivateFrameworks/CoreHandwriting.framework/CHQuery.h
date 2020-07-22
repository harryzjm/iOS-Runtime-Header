//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <CoreHandwriting/CHRecognitionSessionObserver-Protocol.h>

@class CHRecognitionSession, CHRecognitionSessionResult, NSString;
@protocol CHQueryDelegate, OS_dispatch_queue;

@interface CHQuery : NSObject <CHRecognitionSessionObserver>
{
    NSObject<OS_dispatch_queue> *_processingQueue;
    CHRecognitionSessionResult *_lastProcessedSessionResult;
    _Bool __queryActive;
    id <CHQueryDelegate> _delegate;
    CHRecognitionSession *_recognitionSession;
}

@property(nonatomic) _Bool _queryActive; // @synthesize _queryActive=__queryActive;
@property(readonly, retain, nonatomic) CHRecognitionSession *recognitionSession; // @synthesize recognitionSession=_recognitionSession;
@property(nonatomic) id <CHQueryDelegate> delegate; // @synthesize delegate=_delegate;
- (void)recognitionSessionDidUpdateRecognitionResult:(id)arg1;
- (_Bool)wantsHighFrequencyNotifications;
- (void)_updateForRecognitionSessionResultChangeIfNeeded;
- (void)waitForPendingUpdates;
- (void)pause;
- (void)start;
- (void)dealloc;
- (id)initWithRecognitionSession:(id)arg1;
- (id)init;
@property(readonly, retain, nonatomic) NSString *debugName;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
- (id)q_sessionResult;
- (void)q_queryResultDidChange;
- (void)q_setNeedsQueryResultUpdating;
- (void)q_updateQueryResult;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
