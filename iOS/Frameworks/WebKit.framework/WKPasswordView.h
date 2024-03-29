//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKPasswordView : UIView
{
    struct RetainPtr<NSString> _documentName;
    struct RetainPtr<UIScrollView> _scrollView;
    struct RetainPtr<UIDocumentPasswordView> _passwordView;
    double _savedMinimumZoomScale;
    double _savedMaximumZoomScale;
    double _savedZoomScale;
    struct CGSize _savedContentSize;
    struct RetainPtr<UIColor> _savedBackgroundColor;
    CDUnknownBlockType _userDidEnterPassword;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType userDidEnterPassword; // @synthesize userDidEnterPassword=_userDidEnterPassword;
- (void)didEndEditingPassword:(id)arg1 inView:(id)arg2;
- (void)didBeginEditingPassword:(id)arg1 inView:(id)arg2;
- (void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2;
- (void)_keyboardDidShow:(id)arg1;
- (void)showPasswordFailureAlert;
- (void)hide;
- (void)showInScrollView:(id)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) NSString *documentName;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 documentName:(id)arg2;

@end

