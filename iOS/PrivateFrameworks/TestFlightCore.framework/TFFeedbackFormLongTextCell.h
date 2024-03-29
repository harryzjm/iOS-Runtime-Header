//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TFFeedbackEntryLongText, UITextView;

__attribute__((visibility("hidden")))
@interface TFFeedbackFormLongTextCell
{
    UITextView *_textView;
    TFFeedbackEntryLongText *_longTextEntry;
}

+ (id)_createTextViewFontForTraitCollection:(id)arg1;
+ (double)_adjustedTextViewHeightForCandidateHeight:(double)arg1 font:(id)arg2;
+ (struct CGSize)_sizeToFitText:(id)arg1 fittingSize:(struct CGSize)arg2 inTraitEnvironment:(id)arg3;
+ (struct UIEdgeInsets)_textViewInsetsInTraitEnvironment:(id)arg1;
+ (struct CGSize)sizeForEntry:(id)arg1 dataSource:(id)arg2 fittingSize:(struct CGSize)arg3 inTraitEnvironment:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) TFFeedbackEntryLongText *longTextEntry; // @synthesize longTextEntry=_longTextEntry;
@property(readonly, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void)_prepareForDisplayWithTraitCollection:(id)arg1;
- (void)_updateCellHeightForTextUpdatesInTableView:(id)arg1;
- (void)_updateCellHeightForTextIfNecessary;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)setDisplayedDataString:(id)arg1;
- (unsigned long long)displayableDataType;
- (void)applyContentsOfEntry:(id)arg1;
- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

