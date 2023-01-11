//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBViewMorphAnimatorDataSource-Protocol.h>

@class NSString;

@interface SBPIPMorphAnimatorDataSource : NSObject <SBViewMorphAnimatorDataSource>
{
    _Bool _gestureInitiated;
    int _targetProcessIdentifier;
    NSString *_scenePersistenceIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isGestureInitiated) _Bool gestureInitiated; // @synthesize gestureInitiated=_gestureInitiated;
@property(readonly, nonatomic) NSString *scenePersistenceIdentifier; // @synthesize scenePersistenceIdentifier=_scenePersistenceIdentifier;
@property(readonly, nonatomic) int targetProcessIdentifier; // @synthesize targetProcessIdentifier=_targetProcessIdentifier;
- (double)targetFinalCornerRadiusForAnimator:(id)arg1;
- (struct CGRect)targetFinalFrameForAnimator:(id)arg1;
- (struct CGRect)sourceAppLayoutFrameForAnimator:(id)arg1;
- (struct CGRect)sourceContentFrameForAnimator:(id)arg1;
- (_Bool)isContentFromFillGravityForAnimator:(id)arg1;
- (id)init;
- (id)initWithTargetProcessIdentifier:(int)arg1 scenePersistenceIdentifier:(id)arg2 gestureInitiated:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
