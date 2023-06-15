//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AmbientUI/NSObject-Protocol.h>

@class NSArray, NSString, SBHAppLibraryVisualConfiguration, SBHFloatingDockVisualConfiguration, SBHFloatyFolderVisualConfiguration, SBHFolderIconVisualConfiguration, SBHIconAccessoryVisualConfiguration, SBHIconLabelVisualConfiguration, SBHRootFolderVisualConfiguration, SBHSidebarVisualConfiguration, SBIconListModel, UIFont;

@protocol SBIconListLayout <NSObject>
@property(readonly, nonatomic) struct SBIconImageInfo iconImageInfo;
- (struct UIEdgeInsets)layoutInsetsForOrientation:(long long)arg1;
- (unsigned long long)numberOfRowsForOrientation:(long long)arg1;
- (unsigned long long)numberOfColumnsForOrientation:(long long)arg1;

@optional
@property(readonly, nonatomic) _Bool widgetsSupportDynamicText;
@property(readonly, nonatomic) struct UIEdgeInsets widgetContentMarginsWithBackgroundRemoved;
@property(readonly, nonatomic) struct UIEdgeInsets widgetContentMargins;
@property(readonly, nonatomic) double widgetScaleFactor;
@property(readonly, nonatomic) _Bool usesAlternateLayout;
@property(readonly, nonatomic) unsigned long long supportedIconGridSizeClasses;
@property(readonly, nonatomic) struct SBHIconGridSizeClassSizes iconGridSizeClassSizes;
@property(readonly, copy, nonatomic) SBHFloatingDockVisualConfiguration *floatingDockVisualConfiguration;
@property(readonly, copy, nonatomic) SBHRootFolderVisualConfiguration *rootFolderVisualConfiguration;
@property(readonly, copy, nonatomic) SBHAppLibraryVisualConfiguration *appLibraryVisualConfiguration;
@property(readonly, copy, nonatomic) SBHSidebarVisualConfiguration *sidebarVisualConfiguration;
@property(readonly, copy, nonatomic) SBHFloatyFolderVisualConfiguration *floatyFolderVisualConfiguration;
@property(readonly, copy, nonatomic) SBHFolderIconVisualConfiguration *folderIconVisualConfiguration;
@property(readonly, copy, nonatomic) SBHIconAccessoryVisualConfiguration *iconAccessoryVisualConfiguration;
@property(readonly, nonatomic) unsigned long long rotatedLayoutClusterGridSizeClass;
- (void)noteIcons:(NSArray *)arg1 didDropAtCoordinate:(struct SBIconCoordinate)arg2 inList:(SBIconListModel *)arg3;
- (double)editingAnimationStrengthForGridSizeClass:(unsigned long long)arg1;
- (UIFont *)accessoryFontForContentSizeCategory:(NSString *)arg1 options:(unsigned long long)arg2;
- (SBHIconLabelVisualConfiguration *)labelVisualConfigurationForContentSizeCategory:(NSString *)arg1 options:(unsigned long long)arg2;
- (UIFont *)labelFontForContentSizeCategory:(NSString *)arg1 options:(unsigned long long)arg2;
- (struct CGSize)iconSpacingForOrientation:(long long)arg1;
- (struct SBIconImageInfo)iconImageInfoForGridSizeClass:(unsigned long long)arg1;
@end

