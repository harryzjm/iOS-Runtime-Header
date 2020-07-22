//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MKAnnotationContainerViewAccessibility
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (_Bool)accessibilityIsShowingAnnotationCallout;
- (void)selectAnnotationView:(id)arg1 animated:(_Bool)arg2 avoid:(struct CGRect)arg3;
- (void)deselectAnnotationView:(id)arg1 animated:(_Bool)arg2;
- (void)_accessibilityZoom:(_Bool)arg1 point:(struct CGPoint)arg2;
- (id)_accessibilityAnnotationViews;
- (id)_accessibilityAnnotationCalloutView;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)isAccessibilityElement;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint)arg1;
- (void)accessibilityZoomInAtPoint:(struct CGPoint)arg1;
- (_Bool)accessibilityPerformEscape;
- (id)_accessibilityFilterVisibleElements:(id)arg1;
- (id)accessibilityElements;

@end

