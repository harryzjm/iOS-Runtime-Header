//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, _TtC9AACClient26AECAssessmentConfiguration;
@protocol _TtP9AACClient28AECAssessmentSessionDelegate_;

@interface _TtC9AACClient20AECAssessmentSession : NSObject
{
    MISSING_TYPE *configuration;
    MISSING_TYPE *stateAntiphony;
    MISSING_TYPE *taskQueue;
    MISSING_TYPE *policyBundleFactory;
    MISSING_TYPE *configurationValidator;
    MISSING_TYPE *policySession;
    MISSING_TYPE *updateSubscription;
    MISSING_TYPE *delegate;
}

- (void).cxx_destruct;
- (void)end;
- (void)updateWithConfiguration:(id)arg1;
- (void)begin;
- (id)initWithConfiguration:(id)arg1 queue:(id)arg2;
- (id)init;
@property(nonatomic, readonly) _Bool isActive;
@property(nonatomic) __weak id <_TtP9AACClient28AECAssessmentSessionDelegate_> delegate; // @synthesize delegate;
@property(nonatomic, retain) _TtC9AACClient26AECAssessmentConfiguration *configuration; // @synthesize configuration;

@end
