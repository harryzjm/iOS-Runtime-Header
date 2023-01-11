//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol UISystemDefaultTextInputAssistantItemDelegate;

@interface UISystemDefaultTextInputAssistantItem
{
    id <UISystemDefaultTextInputAssistantItemDelegate> _delegate;
}

@property(nonatomic) __weak id <UISystemDefaultTextInputAssistantItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)performSystemButtonActionForStyle:(long long)arg1;
- (void)analyticsDispatchWithActionStyle:(long long)arg1;
- (_Bool)canPerformSystemButtonActionForStyle:(long long)arg1;
- (SEL)_responderSelectorForSystemButtonStyle:(long long)arg1;
- (void)_performReturn;
- (void)assistantWriteboard;
- (void)assistantShowKeyboard;
- (void)assistantDismiss;
- (void)assistantUnderline;
- (void)assistantItalic;
- (void)assistantBold;
- (void)assistantPaste;
- (void)assistantRedo;
- (void)assistantUndo;
- (void)assistantCopy;
- (void)assistantCut;

@end
