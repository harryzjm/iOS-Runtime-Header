//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuickLook/MarkupViewControllerDelegate-Protocol.h>
#import <QuickLook/PDFViewDelegate-Protocol.h>

@class NSString, QLDelegateProxy, QLMUViewController;

__attribute__((visibility("hidden")))
@interface QLMarkupItemViewController <MarkupViewControllerDelegate, PDFViewDelegate>
{
    long long _lastSavedEditNumber;
    _Bool _showingSignatureView;
    _Bool _hasChangesToUndo;
    _Bool _hasChangesToRedo;
    QLMUViewController *_markupViewController;
    double _topInset;
    QLDelegateProxy *_pdfDocumentDelegateProxy;
}

@property(nonatomic) _Bool hasChangesToRedo; // @synthesize hasChangesToRedo=_hasChangesToRedo;
@property(nonatomic) _Bool hasChangesToUndo; // @synthesize hasChangesToUndo=_hasChangesToUndo;
@property(retain, nonatomic) QLDelegateProxy *pdfDocumentDelegateProxy; // @synthesize pdfDocumentDelegateProxy=_pdfDocumentDelegateProxy;
@property double topInset; // @synthesize topInset=_topInset;
@property(retain, nonatomic) QLMUViewController *markupViewController; // @synthesize markupViewController=_markupViewController;
- (void).cxx_destruct;
- (void)controllerWantsToShowShareSheet:(id)arg1;
- (id)registeredKeyCommands;
- (void)prepareForActionSheetPresentation;
- (_Bool)canShowToolBar;
- (_Bool)canEnterFullScreen;
- (void)showingSignatureView:(_Bool)arg1;
- (_Bool)canPinchToDismiss;
- (_Bool)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2;
- (id)toolbarButtonsForTraitCollection:(id)arg1;
- (void)buttonPressedWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateToolbarVisibilityAnimated:(_Bool)arg1;
- (void)documentDidUnlock:(id)arg1;
- (void)enableMarkupMode:(_Bool)arg1;
- (void)updateMarkupEdgeInsets:(_Bool)arg1;
- (void)_saveChangesWithHostCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_saveChanges;
- (_Bool)needsToSaveChanges;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (void)previewWillDisappear:(_Bool)arg1;
- (void)performFirstTimeAppearanceActions:(unsigned long long)arg1;
- (_Bool)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
