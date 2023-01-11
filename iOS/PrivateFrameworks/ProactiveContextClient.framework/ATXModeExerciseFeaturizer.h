//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveContextClient/ATXModeFeaturizer-Protocol.h>

@class NSString, _CDClientContext, _CDContextualChangeRegistration;
@protocol ATXModeFeaturizerDelegate;

@interface ATXModeExerciseFeaturizer : NSObject <ATXModeFeaturizer>
{
    _CDClientContext *_userContext;
    _CDContextualChangeRegistration *_registration;
    _Bool _isInWorkout;
    id <ATXModeFeaturizerDelegate> _delegate;
}

- (void).cxx_destruct;
@property _Bool isInWorkout; // @synthesize isInWorkout=_isInWorkout;
@property(nonatomic) __weak id <ATXModeFeaturizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setUpContextIfNecessary;
- (id)_createWorkoutPredicate;
- (void)stopListening;
- (void)beginListening;
- (id)provideFeatures;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
