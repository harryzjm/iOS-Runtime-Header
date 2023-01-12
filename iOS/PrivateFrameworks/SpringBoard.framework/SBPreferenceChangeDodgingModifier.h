//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SBPreferenceChangeDodgingModifier
{
    NSString *_identifier;
    _Bool _animated;
    unsigned long long _phase;
    _Bool _resignLifecycleManagement;
    _Bool _boostUpdatedIdentifier;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isResigningLifecycleManagement) _Bool boostUpdatedIdentifier; // @synthesize boostUpdatedIdentifier=_boostUpdatedIdentifier;
@property(nonatomic, getter=isResigningLifecycleManagement) _Bool resignLifecycleManagement; // @synthesize resignLifecycleManagement=_resignLifecycleManagement;
- (long long)animationBehaviorModeForIdentifier:(id)arg1;
- (id)zOrderedIdentifiers;
- (id)modelForInvalidatedModel:(id)arg1;
- (id)handleAnimationCompletionEvent:(id)arg1;
- (id)handlePreferenceChangeEvent:(id)arg1;
- (id)initWithIdentifier:(id)arg1 animated:(_Bool)arg2;

@end
