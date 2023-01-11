//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AutomaticAssessmentConfiguration/_TtP15AACDependencies35AEDBackingAssessmentSessionDelegate_-Protocol.h>

@class _TtC15AACDependencies27AEDBackingAssessmentSession;
@protocol AEAssessmentSessionDelegate;

@interface AEAssessmentSession : NSObject <_TtP15AACDependencies35AEDBackingAssessmentSessionDelegate_>
{
    id <AEAssessmentSessionDelegate> _delegate;
    _TtC15AACDependencies27AEDBackingAssessmentSession *_backingSession;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <AEAssessmentSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)backingAssessmentSession:(id)arg1 wasInterruptedWithError:(id)arg2;
- (void)backingAssessmentSession:(id)arg1 failedToBeginWithError:(id)arg2;
- (void)backingAssessmentSessionDidEnd:(id)arg1;
- (void)backingAssessmentSessionDidBegin:(id)arg1;
- (void)end;
- (void)begin;
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (id)initWithConfiguration:(id)arg1;

@end
