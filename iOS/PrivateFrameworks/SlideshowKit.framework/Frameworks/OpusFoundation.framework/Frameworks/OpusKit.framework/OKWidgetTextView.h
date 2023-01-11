//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OpusKit/UITextViewDelegate-Protocol.h>

@class NSString, UITextView;

@interface OKWidgetTextView <UITextViewDelegate>
{
    UITextView *_textView;
}

+ (id)supportedSettings;
- (void)setSettingAttributedText:(id)arg1;
- (id)settingAttributedText;
- (void)setSettingText:(id)arg1;
- (id)settingText;
- (void)setSettingScrollEnabled:(_Bool)arg1;
- (_Bool)settingScrollEnabled;
- (void)setSettingOverflowEnabled:(_Bool)arg1;
- (_Bool)settingOverflowEnabled;
- (void)setSettingContentInset:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)settingContentEdgeInsets;
- (void)setSettingTextAlignment:(long long)arg1;
- (long long)settingTextAlignment;
- (void)setSettingTextBackgroundColor:(id)arg1;
- (id)settingTextBackgroundColor;
- (void)setSettingTextColor:(id)arg1;
- (id)settingTextColor;
- (void)setSettingFontSize:(float)arg1;
- (float)settingFontSize;
- (void)setSettingFontName:(id)arg1;
- (id)settingFontName;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithWidget:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
