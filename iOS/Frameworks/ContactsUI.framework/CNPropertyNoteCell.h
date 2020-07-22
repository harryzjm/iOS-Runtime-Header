//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UILabel, UITextView;

__attribute__((visibility("hidden")))
@interface CNPropertyNoteCell
{
    UITextView *_textView;
    UILabel *_labelLabel;
}

@property(readonly, nonatomic) UILabel *labelLabel; // @synthesize labelLabel=_labelLabel;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)setAllowsEditing:(_Bool)arg1;
- (void)textViewEditingDidEnd:(id)arg1;
- (void)textViewChanged:(id)arg1;
- (void)setValueTextAttributes:(id)arg1;
- (void)performDefaultAction;
- (_Bool)shouldPerformDefaultAction;
- (void)setLabelTextAttributes:(id)arg1;
- (id)valueView;
- (id)labelView;
- (_Bool)shouldIndentWhileEditing;
- (_Bool)supportsTintColorValue;
- (void)setProperty:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
