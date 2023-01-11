//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PXCMMPosterHeaderViewSpec : NSObject
{
    _Bool _canShowStatus;
    unsigned int _titleFontDescriptorSymbolicTraits;
    unsigned int _subtitleFontDescriptorSymbolicTraits;
    unsigned int _topGradientFontDescriptorSymbolicTraits;
    unsigned int _statusFontDescriptorSymbolicTraits;
    unsigned int _bottomGradientFontDescriptorSymbolicTraits;
    long long _titleFontTextStyle;
    double _titleBaselineOffset;
    long long _subtitleFontTextStyle;
    double _subtitleBaselineOffset;
    long long _topGradientFontTextStyle;
    double _topGradientBaselineOffset;
    long long _statusFontTextStyle;
    double _statusBaselineOffset;
    long long _bottomGradientFontTextStyle;
    double _bottomGradientBaselineOffset;
}

@property(readonly, nonatomic) double bottomGradientBaselineOffset; // @synthesize bottomGradientBaselineOffset=_bottomGradientBaselineOffset;
@property(readonly, nonatomic) unsigned int bottomGradientFontDescriptorSymbolicTraits; // @synthesize bottomGradientFontDescriptorSymbolicTraits=_bottomGradientFontDescriptorSymbolicTraits;
@property(readonly, nonatomic) long long bottomGradientFontTextStyle; // @synthesize bottomGradientFontTextStyle=_bottomGradientFontTextStyle;
@property(readonly, nonatomic) double statusBaselineOffset; // @synthesize statusBaselineOffset=_statusBaselineOffset;
@property(readonly, nonatomic) unsigned int statusFontDescriptorSymbolicTraits; // @synthesize statusFontDescriptorSymbolicTraits=_statusFontDescriptorSymbolicTraits;
@property(readonly, nonatomic) long long statusFontTextStyle; // @synthesize statusFontTextStyle=_statusFontTextStyle;
@property(readonly, nonatomic) _Bool canShowStatus; // @synthesize canShowStatus=_canShowStatus;
@property(readonly, nonatomic) double topGradientBaselineOffset; // @synthesize topGradientBaselineOffset=_topGradientBaselineOffset;
@property(readonly, nonatomic) unsigned int topGradientFontDescriptorSymbolicTraits; // @synthesize topGradientFontDescriptorSymbolicTraits=_topGradientFontDescriptorSymbolicTraits;
@property(readonly, nonatomic) long long topGradientFontTextStyle; // @synthesize topGradientFontTextStyle=_topGradientFontTextStyle;
@property(readonly, nonatomic) double subtitleBaselineOffset; // @synthesize subtitleBaselineOffset=_subtitleBaselineOffset;
@property(readonly, nonatomic) unsigned int subtitleFontDescriptorSymbolicTraits; // @synthesize subtitleFontDescriptorSymbolicTraits=_subtitleFontDescriptorSymbolicTraits;
@property(readonly, nonatomic) long long subtitleFontTextStyle; // @synthesize subtitleFontTextStyle=_subtitleFontTextStyle;
@property(readonly, nonatomic) double titleBaselineOffset; // @synthesize titleBaselineOffset=_titleBaselineOffset;
@property(readonly, nonatomic) unsigned int titleFontDescriptorSymbolicTraits; // @synthesize titleFontDescriptorSymbolicTraits=_titleFontDescriptorSymbolicTraits;
@property(readonly, nonatomic) long long titleFontTextStyle; // @synthesize titleFontTextStyle=_titleFontTextStyle;
- (id)initWithPresentationStyle:(long long)arg1;
- (id)init;

@end

