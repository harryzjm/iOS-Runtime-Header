//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface MusicLibraryAddKeepLocalControlAccessibility
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)setControlStatus:(struct MusicLibraryAddKeepLocalControlStatus)arg1 animated:(_Bool)arg2;
- (unsigned long long)accessibilityTraits;
- (id)_accessibilityCustomActionLabelForControlStatus:(struct MusicLibraryAddKeepLocalControlStatus)arg1;
- (id)_accessibilityValueForStatusType:(long long)arg1 andDownloadProgress:(double)arg2;
- (id)_accessibilityLabelForStatusType:(long long)arg1;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (_Bool)_accessibilityisStatusStructValidated;
@property(retain, nonatomic, setter=_accessibilitySetCustomActionLabel:) NSString *_accessibilityCustomActionLabel;

@end
