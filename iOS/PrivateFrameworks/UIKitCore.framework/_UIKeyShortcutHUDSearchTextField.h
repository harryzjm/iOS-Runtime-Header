//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIKeyShortcutHUDSearchButton, _UIKeyShortcutHUDShortcutInputView;

__attribute__((visibility("hidden")))
@interface _UIKeyShortcutHUDSearchTextField
{
    _UIKeyShortcutHUDSearchButton *_searchButton;
    _UIKeyShortcutHUDShortcutInputView *_shortcutInputView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _UIKeyShortcutHUDShortcutInputView *shortcutInputView; // @synthesize shortcutInputView=_shortcutInputView;
@property(retain, nonatomic) _UIKeyShortcutHUDSearchButton *searchButton; // @synthesize searchButton=_searchButton;
- (_Bool)_suppressSoftwareKeyboard;
- (id)preferredFocusEnvironments;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;

@end
