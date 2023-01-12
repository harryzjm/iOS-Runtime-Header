//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterKit/NSObject-Protocol.h>

@class NSString, PRPosterColor;

@protocol PREditorColorPickerColor <NSObject>
@property(readonly, copy, nonatomic) NSString *localizedName;
@property(readonly, nonatomic) PRPosterColor *rightSliderColor;
@property(readonly, nonatomic) PRPosterColor *leftSliderColor;
@property(readonly, copy, nonatomic) PRPosterColor *baseColor;
@property(readonly, nonatomic) double initialVariation;
@property(readonly) _Bool isVibrantColor;
@property(readonly) _Bool isCustomColor;
- (PRPosterColor *)displayColorWithVariation:(double)arg1;
- (PRPosterColor *)colorWithVariation:(double)arg1;
@end

