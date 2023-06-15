//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SUUIFieldSettingDescription, SUUIInputViewElement, UILabel, UITextField;

__attribute__((visibility("hidden")))
@interface SUUITextFieldSettingDescriptionView
{
    double _aggregateLabelWidth;
    SUUIInputViewElement *_inputViewElement;
    UILabel *_label;
    SUUIFieldSettingDescription *_settingDescription;
    UITextField *_textField;
}

+ (struct CGSize)sizeThatFitsWidth:(double)arg1 settingDescription:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForSettingDescription:(id)arg1 context:(id)arg2;
+ (_Bool)prefetchResourcesForSettingDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;
- (void).cxx_destruct;
- (void)_fillLayoutWithView:(id)arg1 labelForBaselinePosition:(id)arg2;
- (void)_updateTextFieldValue:(id)arg1;
- (id)_currentControllerValue;
- (void)_arrangeTextField:(id)arg1 andLabel:(id)arg2;
- (void)_alignView:(id)arg1 withBaselineLabel:(id)arg2 font:(id)arg3 offsetX:(double)arg4 fitWidth:(double)arg5;
- (void)_addTextInputWithElement:(id)arg1;
- (void)_addLabelWithElement:(id)arg1;
- (void)_addInputWithElement:(id)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)reloadWithSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)setEnabled:(_Bool)arg1;
- (void)commitEdits;
- (void)beginEdits;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

