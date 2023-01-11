//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NTKUtilityComplicationFactory;

@interface NTKWhistlerAnalogFaceViewComplicationFactory
{
    NTKUtilityComplicationFactory *_complicationFactory;
}

- (void).cxx_destruct;
- (_Bool)_convertCircularSlot:(id)arg1 toPosition:(long long *)arg2;
- (_Bool)_convertCornerSlot:(id)arg1 toPosition:(long long *)arg2;
- (id)_cornerKeylineViewForSlot:(id)arg1;
- (_Bool)_isCornerComplicationForSlot:(id)arg1;
- (_Bool)_isCenterComplicationForSlot:(id)arg1;
- (unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1 faceView:(id)arg2;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4;
- (void)loadLayoutRulesForFaceView:(id)arg1 dialDiameter:(double)arg2;
- (void)loadLayoutRulesForFaceView:(id)arg1;
- (id)customEditOptionContainerViewForSlot:(id)arg1;
- (long long)complicationPickerStyleForSlot:(id)arg1;
- (id)curvedPickerMaskForSlot:(id)arg1;
- (id)keylineViewForComplicationSlot:(id)arg1;
- (struct CGPoint)circularComplicationCenterForSlot:(id)arg1 inFaceBounds:(struct CGRect)arg2;
- (id)initForDevice:(id)arg1;

@end
