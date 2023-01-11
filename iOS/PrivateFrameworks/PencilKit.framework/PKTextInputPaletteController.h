//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PencilKit/PKPaletteControllerDelegate-Protocol.h>
#import <PencilKit/PKPaletteTapToRadarCommandDelegate-Protocol.h>
#import <PencilKit/PKTextInputWindowFirstResponderControllerDelegate-Protocol.h>

@class NSString, PKPaletteController, PKTextInputSettings, PKTextInputWindowFirstResponderController, UIWindowScene;
@protocol PKTextInputPaletteControllerDelegate;

@interface PKTextInputPaletteController : NSObject <PKTextInputWindowFirstResponderControllerDelegate, PKPaletteControllerDelegate, PKPaletteTapToRadarCommandDelegate>
{
    _Bool __writingStateActive;
    id <PKTextInputPaletteControllerDelegate> _delegate;
    PKTextInputSettings *__textInputSettings;
    PKTextInputWindowFirstResponderController *__windowFirstResponderController;
    PKPaletteController *__paletteController;
    struct CGRect _editingOverlayContainerSceneBounds;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PKPaletteController *_paletteController; // @synthesize _paletteController=__paletteController;
@property(retain, nonatomic) PKTextInputWindowFirstResponderController *_windowFirstResponderController; // @synthesize _windowFirstResponderController=__windowFirstResponderController;
@property(retain, nonatomic) PKTextInputSettings *_textInputSettings; // @synthesize _textInputSettings=__textInputSettings;
@property(nonatomic) struct CGRect editingOverlayContainerSceneBounds; // @synthesize editingOverlayContainerSceneBounds=_editingOverlayContainerSceneBounds;
@property(nonatomic, getter=_isWritingStateActive, setter=_setWritingStateActive:) _Bool _writingStateActive; // @synthesize _writingStateActive=__writingStateActive;
@property(nonatomic) __weak id <PKTextInputPaletteControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_recognitionLocaleIdentifierDidChange:(id)arg1;
- (_Bool)paletteController:(id)arg1 shouldOverridePaletteViewTraitCollectionTo:(id)arg2;
- (void)paletteControllerFloatingKeyboardWillShow:(id)arg1;
- (void)paletteControllerFloatingKeyboardWillHide:(id)arg1;
- (id)paletteTapToRadarCommandConfiguration:(id)arg1;
- (void)windowFirstResponderController:(id)arg1 didChangeFirstResponder:(id)arg2;
- (void)_setupPaletteControllerIfNeededWithView:(id)arg1 wantsPaletteVisible:(_Bool)arg2;
- (void)_peformPaletteVisibilityUpdate;
- (void)_updatePaletteVisibility;
- (_Bool)_shouldPaletteBeVisible;
- (_Bool)_isFirstResponderInputAssistantEnabled;
- (_Bool)_isFirstResponderVisible;
- (_Bool)_isFirstResponderEditableTextInputWithPencilTextInputSource;
@property(readonly, nonatomic, getter=isPaletteVisible) _Bool paletteVisible;
- (void)updateFirstResponderVisibility;
- (_Bool)_canShowPaletteUI;
- (id)_paletteControllerContainerView;
@property(readonly, nonatomic) UIWindowScene *windowScene;
- (void)dealloc;
- (id)initWithTextInputSettings:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
