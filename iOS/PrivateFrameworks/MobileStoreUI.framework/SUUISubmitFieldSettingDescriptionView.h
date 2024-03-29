//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SUUIFieldSettingDescription, SUUIInputViewElement, UILabel;

__attribute__((visibility("hidden")))
@interface SUUISubmitFieldSettingDescriptionView
{
    double _aggregateLabelWidth;
    SUUIInputViewElement *_inputViewElement;
    UILabel *_label;
    SUUIFieldSettingDescription *_settingDescription;
}

+ (struct CGSize)sizeThatFitsWidth:(double)arg1 settingDescription:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForSettingDescription:(id)arg1 context:(id)arg2;
+ (_Bool)prefetchResourcesForSettingDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;
- (void).cxx_destruct;
- (id)_currentControllerValue;
- (void)_addSubmitInputWithElement:(id)arg1;
- (void)_addInputWithElement:(id)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)reloadWithSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)setEnabled:(_Bool)arg1;

@end

