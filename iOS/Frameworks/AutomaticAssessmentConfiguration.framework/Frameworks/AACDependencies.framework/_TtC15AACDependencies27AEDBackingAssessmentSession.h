//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol _TtP15AACDependencies35AEDBackingAssessmentSessionDelegate_;

@interface _TtC15AACDependencies27AEDBackingAssessmentSession : NSObject
{
    MISSING_TYPE *configuration;
    MISSING_TYPE *policyBundleFactory;
    MISSING_TYPE *configurationValidator;
    MISSING_TYPE *policySession;
    MISSING_TYPE *state;
    MISSING_TYPE *delegate;
}

- (void).cxx_destruct;
- (void)end;
- (void)begin;
- (id)initWithConfiguration:(id)arg1;
- (id)init;
@property(nonatomic, readonly) _Bool isActive;
@property(nonatomic) __weak id <_TtP15AACDependencies35AEDBackingAssessmentSessionDelegate_> delegate; // @synthesize delegate;

@end
