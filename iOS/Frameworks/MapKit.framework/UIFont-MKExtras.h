//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIFont.h>

@interface UIFont (MKExtras)
+ (_Bool)_mapkit_accessibilityTextEnabled;
+ (_Bool)_mapkit_ax3TextEnabled;
+ (id)_mapkit_preferredFontForTextStyleTimeDisplayInTableViewCell:(id)arg1 addingSymbolicTraits:(unsigned int)arg2 useMonospace:(_Bool)arg3;
+ (id)_mapkit_preferredFontForTextStyleTimeDisplayInTableViewCell:(id)arg1 addingSymbolicTraits:(unsigned int)arg2;
+ (id)_mapkit_preferredFontForTextStyle:(id)arg1 weight:(double)arg2 contentSizeCategory:(id)arg3 symbolicTraits:(unsigned int)arg4;
+ (id)_mapkit_preferredFontForTextStyleInTableViewCell:(id)arg1 weight:(double)arg2 contentSizeCategory:(id)arg3 symbolicTraits:(unsigned int)arg4;
+ (id)_mapkit_preferredFontForTextStyleInTableViewCell:(id)arg1 weight:(double)arg2;
+ (id)_mapkit_preferredFontForTextStyleInTableViewCell:(id)arg1 addingSymbolicTraits:(unsigned int)arg2;
+ (id)_mapkit_preferredFontForTextStyleInTableViewCell:(id)arg1;
+ (id)_contentSizeCategoryInTableViewCellWithContentSizeCategory:(id)arg1;
- (id)traitCollectionFromTraitEnvironment:(id)arg1;
- (double)_mapkit_scaledValueForValue:(double)arg1 scalingForMacIdiom:(_Bool)arg2 respectingTraitEnvironment:(id)arg3;
- (double)_mapkit_scaledValueForValue:(double)arg1;
- (id)_mapkit_fontWithSymbolicTraits:(unsigned int)arg1;
- (id)_mapkit_fontWithWeight:(double)arg1;
- (id)_mapkit_fontByAddingFeaturesForTabularFigures;
- (id)_mapkit_fontByAddingFeaturesForTimeDisplay;
- (id)_mapkit_fontByAddingFeaturesForTimeDisplayUseMonospace:(_Bool)arg1;
- (double)_mapkit_lineHeight;
@end
