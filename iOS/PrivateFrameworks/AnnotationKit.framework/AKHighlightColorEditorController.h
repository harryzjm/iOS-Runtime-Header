//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AKCalloutBar, NSString, UIAlertController, UIButton, UIView;

@interface AKHighlightColorEditorController
{
    AKCalloutBar *mCalloutBar;
    UIView *mColorControls;
    UIButton *mAddNoteButton;
    UIButton *mDeleteButton;
    UIButton *mRightArrowButton;
    UIButton *mShareButton;
    int _pageTheme;
    UIAlertController *_alertController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(nonatomic) int pageTheme; // @synthesize pageTheme=_pageTheme;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=mShareButton;
@property(retain, nonatomic) UIButton *rightArrowButton; // @synthesize rightArrowButton=mRightArrowButton;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=mDeleteButton;
@property(retain, nonatomic) UIButton *addNoteButton; // @synthesize addNoteButton=mAddNoteButton;
@property(retain, nonatomic) UIView *colorControls; // @synthesize colorControls=mColorControls;
@property(retain, nonatomic) AKCalloutBar *calloutBar; // @synthesize calloutBar=mCalloutBar;
- (id)p_noteGlyphForTag:(long long)arg1 pageTheme:(int)arg2;
- (id)p_monochromaticImageFromImage:(id)arg1 withColor:(id)arg2;
- (id)p_paletteImageForTag:(long long)arg1 pageTheme:(int)arg2;
- (id)p_buildPaletteImageForFrontTag:(long long)arg1 middleTag:(long long)arg2 backTag:(long long)arg3 pageTheme:(int)arg4;
- (id)p_paletteImageWithFrontColor:(id)arg1 middleColor:(id)arg2 backColor:(id)arg3 frontForegroundImage:(id)arg4;
- (void)p_drawCrescentWithCircleRect:(struct CGRect)arg1 color:(id)arg2 leftShift:(double)arg3 addRadius:(double)arg4;
- (id)p_colorControlImageForTag:(long long)arg1 pageTheme:(int)arg2;
- (id)p_colorControlUnderlineImageForPageTheme:(int)arg1;
- (id)p_underlineForegroundImageForPageTheme:(int)arg1;
- (id)p_colorControlImageForColor:(id)arg1;
- (id)p_colorControlImageForColor:(id)arg1 withForegroundImage:(id)arg2;
- (void)p_drawColorControlCircleWithFrame:(struct CGRect)arg1 color:(id)arg2;
- (id)p_colorForTag:(long long)arg1 pageTheme:(int)arg2;
- (void)handleRightArrowButton:(id)arg1;
- (void)handleDeleteButtonTap:(id)arg1;
- (void)handleShareButton:(id)arg1;
- (void)handleAddNoteButton:(id)arg1;
- (void)showColorControlsMenu:(id)arg1;
- (void)useColorOf:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)p_postDeleteConfirmation;
- (void)p_removeAnnotation:(id)arg1;
- (void)p_setStyle:(long long)arg1 forAnnotation:(id)arg2;
- (id)p_themeForStyle:(long long)arg1 pageTheme:(int)arg2;
- (id)localizedAccessibilityStringForStyle:(long long)arg1;
- (void)setPosition:(int)arg1;
- (void)presentFromRect:(struct CGRect)arg1 view:(id)arg2;
- (void)didShow;
- (void)willShow;
- (_Bool)canPresentInPosition:(int)arg1;
- (void)p_updateAppearance;
- (long long)p_buttonTagForTheme:(id)arg1;
- (_Bool)p_shouldShowCompactMenu;
- (_Bool)p_shouldShowShareButton;
- (void)viewDidLoad;
- (void)loadView;
- (void)releaseOutlets;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

