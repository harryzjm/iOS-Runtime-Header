//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface RCWaveformSelectionOverlayAccessibility
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (CDStruct_73a5d3ca)_axSelectedTimeRange;
- (void)setEditingEnabled:(_Bool)arg1;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)accessibilityElements;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (_Bool)_axIsShowingSelectionBars;

@end

