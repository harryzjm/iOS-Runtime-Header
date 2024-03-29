//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, SKUISuggestedHandlesSettingsHeaderFooterDescription, UILabel;

__attribute__((visibility("hidden")))
@interface SKUISuggestedHandlesSettingsHeaderFooterDescriptionView
{
    NSMutableArray *_buttons;
    SKUISuggestedHandlesSettingsHeaderFooterDescription *_description;
    UILabel *_label;
}

+ (id)_helpLabelWithDescription:(id)arg1 forWidth:(double)arg2;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 settingsHeaderFooterDescription:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForSettingsHeaderFooterDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForSettingsHeaderFooterDescription:(id)arg1 context:(id)arg2;
+ (_Bool)prefetchResourcesForSettingsHeaderFooterDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;
- (void).cxx_destruct;
- (void)_buttonAction:(id)arg1;
- (void)layoutSubviews;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)reloadWithSettingsHeaderFooterDescription:(id)arg1 width:(double)arg2 context:(id)arg3;

@end

