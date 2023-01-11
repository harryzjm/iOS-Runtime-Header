//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/SBIconListLayout-Protocol.h>

@class NSMutableDictionary, NSString, SBHClockIconVisualConfiguration, SBHFloatyFolderVisualConfiguration, SBHFolderIconVisualConfiguration, SBHIconAccessoryVisualConfiguration, SBHSidebarVisualConfiguration, SBIconListGridLayoutConfiguration, UIFont;

@interface SBIconListGridLayout : NSObject <SBIconListLayout, BSDescriptionProviding>
{
    NSMutableDictionary *_labelFonts;
    UIFont *_accessoryFont;
    UIFont *_accessoryBoldFont;
    SBIconListGridLayoutConfiguration *_layoutConfiguration;
}

@property(readonly, copy, nonatomic) SBIconListGridLayoutConfiguration *layoutConfiguration; // @synthesize layoutConfiguration=_layoutConfiguration;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (struct SBIconCoordinate)iconCoordinateForIndex:(unsigned long long)arg1 forOrientation:(long long)arg2 inList:(id)arg3;
@property(readonly, copy, nonatomic) SBHSidebarVisualConfiguration *sidebarVisualConfiguration;
@property(readonly, copy, nonatomic) SBHFloatyFolderVisualConfiguration *floatyFolderVisualConfiguration;
@property(readonly, copy, nonatomic) SBHClockIconVisualConfiguration *clockIconVisualConfiguration;
@property(readonly, copy, nonatomic) SBHFolderIconVisualConfiguration *folderIconVisualConfiguration;
- (id)accessoryBoldFont;
- (id)accessoryFont;
- (id)accessoryFontForContentSizeCategory:(id)arg1 options:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) SBHIconAccessoryVisualConfiguration *iconAccessoryVisualConfiguration;
- (id)labelVisualConfigurationForContentSizeCategory:(id)arg1 options:(unsigned long long)arg2;
- (id)labelFontForContentSizeCategory:(id)arg1 options:(unsigned long long)arg2;
- (void)noteIcons:(id)arg1 didDropAtCoordinate:(struct SBIconCoordinate)arg2 inList:(id)arg3;
@property(readonly, nonatomic) _Bool usesAlternateLayout;
- (struct UIEdgeInsets)layoutInsetsForOrientation:(long long)arg1;
@property(readonly, nonatomic) unsigned long long maximumIconCount;
- (unsigned long long)numberOfRowsForOrientation:(long long)arg1;
- (unsigned long long)numberOfColumnsForOrientation:(long long)arg1;
@property(readonly, nonatomic) struct SBIconImageInfo iconImageInfo;
- (id)init;
- (id)initWithLayoutConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
