//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIFont.h>

@interface UIFont (NFLAdditions)
+ (double)nfl_tightenedLineSpacingForString:(id)arg1 forFont:(id)arg2 minimumLineSpacingMultiple:(double)arg3;
+ (struct CGRect)nfl_boundingBoxForString:(id)arg1 forFont:(id)arg2;
+ (id)nfl_drukTextBoldForSize:(double)arg1;
+ (id)nfl_drukWideMediumForSize:(double)arg1;
+ (id)nfl_systemFontNameForWeight:(double)arg1 condensed:(_Bool)arg2;
+ (id)nfl_systemFontNameForWeight:(double)arg1;
+ (id)_nfl_fontNameWithPrefix:(id)arg1 midfix:(id)arg2 suffix:(id)arg3;
+ (id)nfl_fontWithName:(id)arg1 size:(double)arg2;
+ (id)_nfl_fontWeightLookup;
@end
