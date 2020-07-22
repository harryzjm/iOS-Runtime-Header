//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextField.h>

@interface _MFMailRecipientTextField : UITextField
{
    _Bool _isShowingDictationPlaceholder;
}

@property(readonly, nonatomic) _Bool isShowingDictationPlaceholder; // @synthesize isShowingDictationPlaceholder=_isShowingDictationPlaceholder;
- (void)paste:(id)arg1;
- (void)_handleKeyUIEvent:(id)arg1;
- (id)customOverlayContainer;
- (id)_previousKeyResponder;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(_Bool)arg2;
- (id)insertDictationResultPlaceholder;

@end
