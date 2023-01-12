//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIButton, UITapGestureRecognizer, VKCVisualSearchResultItem;
@protocol VKCCornerLookupButtonDelegate;

__attribute__((visibility("hidden")))
@interface VKCCornerLookupButton
{
    _Bool _isShowingVisualResultsPane;
    _Bool _observingInteractionDidFinish;
    _Bool _didProcessResult;
    _Bool _shouldShowResultWhenVisible;
    UITapGestureRecognizer *_tapGestureRecognizer;
    VKCVisualSearchResultItem *_resultItem;
    UIButton *_button;
    id <VKCCornerLookupButtonDelegate> _delegate;
    NSString *_currentRVItemID;
    double _buttonWidth;
    double _buttonHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double buttonHeight; // @synthesize buttonHeight=_buttonHeight;
@property(nonatomic) double buttonWidth; // @synthesize buttonWidth=_buttonWidth;
@property(nonatomic) _Bool shouldShowResultWhenVisible; // @synthesize shouldShowResultWhenVisible=_shouldShowResultWhenVisible;
@property(nonatomic) _Bool didProcessResult; // @synthesize didProcessResult=_didProcessResult;
@property(nonatomic) _Bool observingInteractionDidFinish; // @synthesize observingInteractionDidFinish=_observingInteractionDidFinish;
@property(retain, nonatomic) NSString *currentRVItemID; // @synthesize currentRVItemID=_currentRVItemID;
@property(nonatomic) _Bool isShowingVisualResultsPane; // @synthesize isShowingVisualResultsPane=_isShowingVisualResultsPane;
@property(nonatomic) __weak id <VKCCornerLookupButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) VKCVisualSearchResultItem *resultItem; // @synthesize resultItem=_resultItem;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
- (void)_didDismissVisualResultsPane:(id)arg1;
- (void)showLookupUIPaneForResultItem;
- (id)queryForProcessingResult;
- (id)_queryString;
- (void)didDismissVisualResultsPane;
- (void)showVisualSearchResultView;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)didTap;
- (void)updateIndicatorDotForState;
- (void)_updateImage;
- (double)contentSizeScaleFactor;
- (double)cornerButtonSize;
- (void)_setupButton;
- (id)_backgroundColorBehindText;
- (id)_defaultSymbolName;
- (id)_symbolNameForItem;
- (id)imageForButton;
- (void)_setupGestures;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1 resultItem:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

