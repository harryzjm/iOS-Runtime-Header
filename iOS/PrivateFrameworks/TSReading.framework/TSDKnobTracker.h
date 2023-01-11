//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSReading/TSDLayoutManipulatingTracker-Protocol.h>

@class TSDAutoscroll, TSDInteractiveCanvasController, TSDKnob, TSDRep;

@interface TSDKnobTracker : NSObject <TSDLayoutManipulatingTracker>
{
    TSDRep *mRep;
    TSDKnob *mKnob;
    struct CGPoint mCurrentPosition;
    struct CGPoint mKnobOffset;
    _Bool mDidBegin;
    _Bool mDidDrag;
    _Bool mDragEnding;
    _Bool mEndedOperationDueToESC;
    _Bool mIsInspectorDrivenTracking;
    TSDAutoscroll *mAutoscroll;
}

@property(retain, nonatomic) TSDAutoscroll *autoscroll; // @synthesize autoscroll=mAutoscroll;
@property(readonly, nonatomic) struct CGPoint knobOffset; // @synthesize knobOffset=mKnobOffset;
@property(readonly, nonatomic) _Bool endedOperationDueToESC; // @synthesize endedOperationDueToESC=mEndedOperationDueToESC;
@property(nonatomic) _Bool dragEnding; // @synthesize dragEnding=mDragEnding;
@property(nonatomic) struct CGPoint currentPosition; // @synthesize currentPosition=mCurrentPosition;
@property(nonatomic) _Bool didDrag; // @synthesize didDrag=mDidDrag;
@property(readonly, nonatomic) _Bool didBegin; // @synthesize didBegin=mDidBegin;
@property(retain, nonatomic) TSDKnob *knob; // @synthesize knob=mKnob;
@property(nonatomic) _Bool isInspectorDrivenTracking; // @synthesize isInspectorDrivenTracking=mIsInspectorDrivenTracking;
@property(retain, nonatomic) TSDRep *rep; // @synthesize rep=mRep;
- (_Bool)operationShouldBeDynamic;
- (_Bool)supportsAlignmentGuides;
- (void)commitChangesForReps:(id)arg1;
- (_Bool)shouldOpenCommandGroupToCommitChangesForReps:(id)arg1;
- (void)changeDynamicLayoutsForReps:(id)arg1;
- (int)allowedAutoscrollDirections;
- (double)unscaledStartAutoscrollThreshold;
- (void)autoscrollWillNotStart;
- (void)updateAfterAutoscroll:(id)arg1;
- (_Bool)wantsAutoscroll;
- (void)i_resetCurrentPositionToKnobPositionIfAppropriate;
- (void)i_setKnobOffset:(struct CGPoint)arg1;
- (void)willEndMovingKnobDueToESC;
- (_Bool)shouldEndMovingKnobOnESC;
- (_Bool)shouldUseKnobOffset;
- (_Bool)allowHUDToDisplay;
- (_Bool)shouldHideSelectionHighlight;
- (_Bool)shouldHideOtherKnobs;
- (unsigned long long)enabledKnobMask;
- (struct CGAffineTransform)transformInRootForStandardKnobs;
- (struct CGRect)currentBoundsForStandardKnobs;
- (void)endMovingKnob;
- (void)beginMovingKnob;
- (struct CGPoint)convertKnobPositionToUnscaledCanvas:(struct CGPoint)arg1;
- (void)moveKnobToCanvasPosition:(struct CGPoint)arg1;
- (void)moveKnobToRepPosition:(struct CGPoint)arg1;
@property(readonly, nonatomic) double delay;
@property(readonly, nonatomic) TSDInteractiveCanvasController *icc;
- (void)dealloc;
- (id)initWithRep:(id)arg1 knob:(id)arg2;

@end

