//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol WBSCyclerTestSuite, WBSCyclerTestTarget;

@interface WBSCyclerTestRunner : NSObject
{
    _Bool _stopRequested;
    NSMutableArray *_pendingRequestQueue;
    NSMutableArray *_pendingRequestCompletionHandlerQueue;
    _Bool _running;
    id <WBSCyclerTestSuite> _testSuite;
    id <WBSCyclerTestTarget> _target;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
@property(readonly, nonatomic) id <WBSCyclerTestTarget> target; // @synthesize target=_target;
@property(readonly, nonatomic) id <WBSCyclerTestSuite> testSuite; // @synthesize testSuite=_testSuite;
- (id)_descriptionForErrorCode:(long long)arg1;
- (id)_errorWithCode:(long long)arg1;
- (void)_handleNextPendingRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_performNextIterationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_stop;
- (void)handleRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestStop;
- (void)runWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithTestSuite:(id)arg1 target:(id)arg2;
- (id)init;

@end
