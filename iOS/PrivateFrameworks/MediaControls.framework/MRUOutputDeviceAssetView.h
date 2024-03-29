//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class BSUIEmojiLabelView, MRUAssetView, MRUOutputDeviceAsset, MRUVisualStylingProvider, NSString;

__attribute__((visibility("hidden")))
@interface MRUOutputDeviceAssetView : UIView
{
    MRUOutputDeviceAsset *_asset;
    NSString *_title;
    NSString *_glyphState;
    MRUVisualStylingProvider *_stylingProvider;
    BSUIEmojiLabelView *_titleLabel;
    MRUAssetView *_assetView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MRUAssetView *assetView; // @synthesize assetView=_assetView;
@property(retain, nonatomic) BSUIEmojiLabelView *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(retain, nonatomic) NSString *glyphState; // @synthesize glyphState=_glyphState;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) MRUOutputDeviceAsset *asset; // @synthesize asset=_asset;
- (void)updateVisibility;
- (void)updateContentSizeCategory;
- (void)updateVisualStyling;
- (void)visualStylingProviderDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

