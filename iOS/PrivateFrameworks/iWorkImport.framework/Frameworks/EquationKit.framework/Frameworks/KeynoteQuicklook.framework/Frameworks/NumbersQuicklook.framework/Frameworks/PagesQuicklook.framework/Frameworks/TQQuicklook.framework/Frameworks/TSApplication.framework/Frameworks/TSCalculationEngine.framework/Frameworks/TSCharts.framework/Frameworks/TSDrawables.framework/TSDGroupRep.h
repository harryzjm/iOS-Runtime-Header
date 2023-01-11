//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSDrawables/TSDMagicMoveMatching-Protocol.h>

@class NSArray, NSOrderedSet;

@interface TSDGroupRep <TSDMagicMoveMatching>
{
    struct CGRect mLastBoundsForStandardKnobs;
    NSOrderedSet *mCachedGroupedChildReps;
}

- (void).cxx_destruct;
- (id)p_groupedChildReps;
- (void)updateChildrenFromLayout;
@property(readonly, nonatomic) NSArray *allRepsContainedInGroup;
- (void)updateFromLayout;
- (struct CGRect)frameInUnscaledCanvasForMarqueeSelecting;
- (struct CGRect)frameInUnscaledCanvas;
- (void)recursivelyDrawInContext:(struct CGContext *)arg1 keepingChildrenPassingTest:(CDUnknownBlockType)arg2;
- (struct CGRect)clipRect;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)p_groupInfo;

@end
