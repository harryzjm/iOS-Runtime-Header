//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVRoutePickerView.h"

@class AVButton, AVLayoutItemAttributes, NSString;

__attribute__((visibility("hidden")))
@interface AVPlaybackControlsRoutePickerView : AVRoutePickerView
{
    AVButton *_customButton;
    _Bool _secondGenerationButton;
    _Bool _removed;
    _Bool _hasAlternateAppearance;
    _Bool _hasFullScreenAppearance;
    AVLayoutItemAttributes *_layoutAttributes;
    NSString *_currentMicaPackageName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *currentMicaPackageName; // @synthesize currentMicaPackageName=_currentMicaPackageName;
@property(nonatomic) _Bool hasFullScreenAppearance; // @synthesize hasFullScreenAppearance=_hasFullScreenAppearance;
@property(nonatomic) _Bool hasAlternateAppearance; // @synthesize hasAlternateAppearance=_hasAlternateAppearance;
@property(nonatomic, getter=isRemoved) _Bool removed; // @synthesize removed=_removed;
@property(readonly, nonatomic) AVLayoutItemAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
- (void)_updateLayoutItem;
- (struct CGSize)intrinsicContentSize;
- (void)updateButtonAppearance;
- (void)_updateCustomButtonMicaPackage;
- (void)setPrioritizesVideoDevices:(_Bool)arg1;
@property(readonly, nonatomic) AVButton *customButton;
- (void)layoutAttributesDidChange;
@property(nonatomic) struct CGSize extrinsicContentSize;
@property(nonatomic, getter=isCollapsed) _Bool collapsed;
@property(nonatomic, getter=isIncluded) _Bool included;
@property(readonly, nonatomic, getter=isCollapsedOrExcluded) _Bool collapsedOrExcluded;
- (id)initWithSecondGenerationButton:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

