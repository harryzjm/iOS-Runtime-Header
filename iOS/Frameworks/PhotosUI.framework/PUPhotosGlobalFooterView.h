//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

#import <PhotosUI/PUMutablePhotosGlobalFooterView-Protocol.h>
#import <PhotosUI/UITextViewDelegate-Protocol.h>

@class NSString, UILabel, UIProgressView, UITextView, UIView;
@protocol PUPhotosGlobalFooterViewDelegate, PUPhotosGlobalFooterViewLayoutDelegate;

@interface PUPhotosGlobalFooterView : UICollectionReusableView <PUMutablePhotosGlobalFooterView, UITextViewDelegate>
{
    UILabel *_titleLabel;
    UITextView *_subtitle1TextView;
    UILabel *_subtitle2Label;
    UIProgressView *_progressView;
    double _currentHeight;
    _Bool _isPresentingAlert;
    struct {
        _Bool title;
        _Bool subtitle1;
        _Bool subtitle2;
        _Bool progress;
        _Bool layout;
    } _needToUpdate;
    _Bool _isPerformingChanges;
    _Bool _paused;
    NSString *_title;
    NSString *_subtitle1;
    NSString *_subtitle2;
    double _progress;
    NSString *_actionTitle;
    NSString *_actionConfirmationAlertTitle;
    NSString *_actionConfirmationAlertButtonTitle;
    CDUnknownBlockType _action;
    UIView *_accessoryView;
    id <PUPhotosGlobalFooterViewDelegate> _delegate;
    id <PUPhotosGlobalFooterViewLayoutDelegate> _layoutDelegate;
}

@property(nonatomic) __weak id <PUPhotosGlobalFooterViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(nonatomic) __weak id <PUPhotosGlobalFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *actionConfirmationAlertButtonTitle; // @synthesize actionConfirmationAlertButtonTitle=_actionConfirmationAlertButtonTitle;
@property(copy, nonatomic) NSString *actionConfirmationAlertTitle; // @synthesize actionConfirmationAlertTitle=_actionConfirmationAlertTitle;
@property(copy, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(copy, nonatomic) NSString *subtitle2; // @synthesize subtitle2=_subtitle2;
@property(copy, nonatomic) NSString *subtitle1; // @synthesize subtitle1=_subtitle1;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)textViewDidChangeSelection:(id)arg1;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (id)_attributedStringForInputString:(id)arg1 actionTitle:(id)arg2 textAttributes:(id)arg3 linkTextAttributes:(id)arg4;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_updateIfNeeded;
- (_Bool)_needsUpdate;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)_invalidateLayout;
- (void)_invalidateProgress;
- (void)_invalidateSubtitle2;
- (void)_invalidateSubtitle1;
- (void)_invalidateTitle;
- (void)_updateLayoutIfNeeded;
- (void)_updateProgressIfNeeded;
- (void)_updateSubtitle2IfNeeded;
- (void)_updateSubtitle1IfNeeded;
- (void)_updateTitleIfNeeded;
- (void)_updateLayout;
- (void)_updateProgress;
- (void)_updateSubtitle2;
- (void)_updateSubtitle1;
- (void)_updateTitle;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

