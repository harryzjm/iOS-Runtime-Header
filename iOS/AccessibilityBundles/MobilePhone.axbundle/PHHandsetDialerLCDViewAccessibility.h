//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PHHandsetDialerLCDViewAccessibility
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)_accessibilitySubviews;
- (void)updateAddAndDeleteButtonForText:(id)arg1 name:(id)arg2 animated:(_Bool)arg3;
- (void)deleteCharacter;
- (void)setText:(id)arg1 needsFormat:(_Bool)arg2;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (_Bool)hasText;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_voStatusChanged:(id)arg1;
- (double)_accessibilityAllowedGeometryOverlap;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 forDialerType:(int)arg2;
- (_Bool)shouldGroupAccessibilityChildren;

@end
