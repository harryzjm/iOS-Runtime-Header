//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIKeyShortcutHUDShortcut, _UIKeyShortcutHUDShortcutInputAccessoryView;

__attribute__((visibility("hidden")))
@interface _UIKeyShortcutHUDShortcutCell
{
    _UIKeyShortcutHUDShortcutInputAccessoryView *_shortcutInputAccessoryView;
    _UIKeyShortcutHUDShortcut *_shortcut;
}

- (void).cxx_destruct;
@property(nonatomic) __weak _UIKeyShortcutHUDShortcut *shortcut; // @synthesize shortcut=_shortcut;
@property(readonly, nonatomic) _UIKeyShortcutHUDShortcutInputAccessoryView *shortcutInputAccessoryView; // @synthesize shortcutInputAccessoryView=_shortcutInputAccessoryView;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)configureWithShortcut:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

