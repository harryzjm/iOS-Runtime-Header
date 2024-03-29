//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIFont, UIImageSymbolConfiguration, UITraitCollection;

__attribute__((visibility("hidden")))
@interface SFNavigationBarMetrics : NSObject
{
    _Bool _usesNavigationBarHeightForSheetPresentation;
    UITraitCollection *_traitCollectionForFontMetrics;
    double _minimumBarHeight;
    UIFont *_defaultLabelFont;
    UIFont *_defaultBoldFont;
    UIFont *_narrowEditingLabelFont;
    _Bool _narrowEditingScaleFactorNeedsUpdate;
    double _narrowEditingScaleFactor;
    double _safariBarHeight;
    double _safariViewControllerBarHeight;
    double _safariSquishHeightQuantizationOffset;
    double _safariViewControllerSquishHeightQuantizationOffset;
    double _statusBarHeight;
    UIImageSymbolConfiguration *_accessoryImageSymbolConfiguration;
    UIImageSymbolConfiguration *_squishedAccessoryImageSymbolConfiguration;
    UIImageSymbolConfiguration *_mediumButtonImageSymbolConfiguration;
    double _accessibilityImageScale;
    double _urlOutlineCornerRadius;
    double _defaultBarHeight;
    double _urlContainerTop;
    double _urlOutlineHeight;
    double _urlLabelVerticalOffset;
    double _urlLabelAccessoryItemSquishedVerticalOffset;
    double _urlLabelAccessoryLockItemVerticalOffset;
    double _distanceFromLabelBaselineToURLOutlineBottom;
    UITraitCollection *_traitCollectionForButtonMetrics;
}

- (void).cxx_destruct;
- (id)init;

@end

