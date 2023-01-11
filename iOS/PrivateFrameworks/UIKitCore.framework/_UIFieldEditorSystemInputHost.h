//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UISystemInputViewController, UIVisualEffectView, _UIFieldEditorSystemInputHostView;

__attribute__((visibility("hidden")))
@interface _UIFieldEditorSystemInputHost
{
    _UIFieldEditorSystemInputHostView *_containerView;
    UIVisualEffectView *_backgroundEffectView;
    UISystemInputViewController *_systemInputViewController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UISystemInputViewController *_systemInputViewController; // @synthesize _systemInputViewController;
- (id)description;
- (_Bool)_isTV;
- (void)_updateFieldEditorBackgroundViewLayoutForcingDefault:(_Bool)arg1;
- (id)_viewForHostingFieldEditor;
- (void)layoutIfNeeded;
- (void)addPlaceholderLabel:(id)arg1;
- (void)removeFieldEditor;
- (void)addFieldEditor:(id)arg1;
- (void)dealloc;

@end
