//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VUIAppleTVChannelLogoLayout, VUIButtonLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIFeaturedCellOverlayLayout : NSObject
{
    long long _overlayType;
    VUIAppleTVChannelLogoLayout *_channelLogoLayout;
    VUITextLayout *_titleLayout;
    VUITextLayout *_subtitleLayout;
    VUITextLayout *_disclaimerLayout;
    VUIButtonLayout *_buttonLayout;
    VUIButtonLayout *_textButtonLayout;
}

+ (id)layoutWithLayout:(id)arg1 overlayType:(long long)arg2 element:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) VUIButtonLayout *textButtonLayout; // @synthesize textButtonLayout=_textButtonLayout;
@property(retain, nonatomic) VUIButtonLayout *buttonLayout; // @synthesize buttonLayout=_buttonLayout;
@property(retain, nonatomic) VUITextLayout *disclaimerLayout; // @synthesize disclaimerLayout=_disclaimerLayout;
@property(retain, nonatomic) VUITextLayout *subtitleLayout; // @synthesize subtitleLayout=_subtitleLayout;
@property(retain, nonatomic) VUITextLayout *titleLayout; // @synthesize titleLayout=_titleLayout;
@property(retain, nonatomic) VUIAppleTVChannelLogoLayout *channelLogoLayout; // @synthesize channelLogoLayout=_channelLogoLayout;
@property(nonatomic) long long overlayType; // @synthesize overlayType=_overlayType;
- (void)_setupLayouts;
- (id)initWithOverlayType:(long long)arg1;

@end
