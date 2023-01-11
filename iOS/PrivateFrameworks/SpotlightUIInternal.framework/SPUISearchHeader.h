//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <SpotlightUIInternal/SPUITextFieldDelegate-Protocol.h>
#import <SpotlightUIInternal/UITextPasteDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, SPSearchEntity, SPUITextField, UIButton, UIResponder, _UILegibilitySettings;
@protocol SBIconListLayout, SPUIHeaderInteractionDelegate, SPUISearchHeaderDelegate;

@interface SPUISearchHeader : UIView <SPUITextFieldDelegate, UITextPasteDelegate>
{
    _Bool _isReturnKeyPressedInGoMode;
    _Bool _willClear;
    _Bool _searchTextScheduledForProcessing;
    _Bool _offersCompletions;
    id <SPUIHeaderInteractionDelegate> _interactionDelegate;
    _UILegibilitySettings *_legibilitySettings;
    long long _activeInterfaceOrientation;
    UIButton *_cancelButton;
    NSLayoutConstraint *_searchFieldTrailingConstraint;
    NSLayoutConstraint *_cancelButtonTrailingConstraint;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
    NSLayoutConstraint *_leadingConstraint;
    NSString *_lastSearchText;
    SPSearchEntity *_lastSearchEntity;
    unsigned long long _lastSearchHeaderQueryKind;
    unsigned long long _queryId;
    id <SBIconListLayout> _iconListLayout;
    id <SPUISearchHeaderDelegate> _delegate;
    unsigned long long _suggestionID;
    SPSearchEntity *_searchEntity;
    SPUITextField *_searchField;
    double _blurProgress;
}

+ (id)tokenFromSearchEntity:(id)arg1;
+ (unsigned long long)committedSearchQueryKind;
+ (unsigned long long)asYouTypeSearchQueryKind;
- (void).cxx_destruct;
@property(nonatomic) double blurProgress; // @synthesize blurProgress=_blurProgress;
@property _Bool offersCompletions; // @synthesize offersCompletions=_offersCompletions;
@property(retain) SPUITextField *searchField; // @synthesize searchField=_searchField;
@property(retain, nonatomic) SPSearchEntity *searchEntity; // @synthesize searchEntity=_searchEntity;
@property unsigned long long suggestionID; // @synthesize suggestionID=_suggestionID;
@property __weak id <SPUISearchHeaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) id <SBIconListLayout> iconListLayout; // @synthesize iconListLayout=_iconListLayout;
@property unsigned long long queryId; // @synthesize queryId=_queryId;
@property unsigned long long lastSearchHeaderQueryKind; // @synthesize lastSearchHeaderQueryKind=_lastSearchHeaderQueryKind;
@property(retain) SPSearchEntity *lastSearchEntity; // @synthesize lastSearchEntity=_lastSearchEntity;
@property(retain) NSString *lastSearchText; // @synthesize lastSearchText=_lastSearchText;
@property _Bool searchTextScheduledForProcessing; // @synthesize searchTextScheduledForProcessing=_searchTextScheduledForProcessing;
@property _Bool willClear; // @synthesize willClear=_willClear;
@property(retain) NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint=_leadingConstraint;
@property(retain) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(retain) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(retain) NSLayoutConstraint *cancelButtonTrailingConstraint; // @synthesize cancelButtonTrailingConstraint=_cancelButtonTrailingConstraint;
@property(retain) NSLayoutConstraint *searchFieldTrailingConstraint; // @synthesize searchFieldTrailingConstraint=_searchFieldTrailingConstraint;
@property(retain) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property _Bool isReturnKeyPressedInGoMode; // @synthesize isReturnKeyPressedInGoMode=_isReturnKeyPressedInGoMode;
@property(nonatomic) long long activeInterfaceOrientation; // @synthesize activeInterfaceOrientation=_activeInterfaceOrientation;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) __weak id <SPUIHeaderInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
@property(readonly) _Bool completionResultIsPotentiallyPunchout;
- (void)updateFocusResult:(id)arg1 cardSection:(id)arg2 focusIsOnFirstResult:(_Bool)arg3;
@property(nonatomic) _Bool useInPlaceFilteredBlur;
- (double)bottomPadding;
- (double)topPadding;
- (void)performTestSearchWithQuery:(id)arg1 event:(unsigned long long)arg2 queryKind:(unsigned long long)arg3;
- (void)searchForSuggestion:(id)arg1 isBuildingQuery:(_Bool)arg2;
@property(nonatomic) _Bool useChunkyMetrics;
- (double)horizontalSpacingForChunkyHeight;
- (void)showCancelButton:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)cancelButtonIsVisible;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (_Bool)isOnDarkBackground;
- (void)clearSearchFieldWhyQuery:(unsigned long long)arg1 allowZKW:(_Bool)arg2;
- (void)performAction:(CDUnknownBlockType)arg1 afterCommit:(_Bool)arg2;
- (void)unfocusSearchField;
- (_Bool)isFirstResponder;
- (void)focusSearchFieldAndBeginDictation:(_Bool)arg1 selectAll:(_Bool)arg2;
- (void)beginDictation;
- (void)focusSearchFieldAndSelectAll:(_Bool)arg1;
- (void)textPasteConfigurationSupporting:(id)arg1 transformPasteItem:(id)arg2;
- (id)_searchTextField:(id)arg1 itemProviderForCopyingToken:(id)arg2;
- (void)_searchWithSearchEntity:(id)arg1 fromSuggestion:(_Bool)arg2;
- (void)setSearchEntity:(id)arg1 fromSuggestion:(_Bool)arg2;
- (id)currentQueryContextWithString:(id)arg1;
@property(readonly, nonatomic) NSString *currentQuery;
- (void)switchToSuggestions;
- (void)commitSearch;
- (_Bool)lastQueryKindSupportsOptionKey;
- (void)triggerSearchForUnlock;
- (_Bool)textFieldShouldReturn;
- (void)escapeKeyPressed;
- (void)performWebSearch;
- (void)cancelButtonClicked:(id)arg1;
- (void)textFieldDidBeginEditing;
- (void)textDidChange:(id)arg1 whyQuery:(unsigned long long)arg2 allowZKW:(_Bool)arg3 queryKind:(unsigned long long)arg4;
- (void)updateSearchFieldModel;
- (void)textDidChange:(id)arg1 whyQuery:(unsigned long long)arg2 allowZKW:(_Bool)arg3 sourcePreference:(unsigned long long)arg4 engagedSuggestion:(id)arg5 searchEntities:(id)arg6 queryKind:(unsigned long long)arg7;
- (void)textDidChange:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)addInputMethodInformationToQueryContext:(id)arg1;
- (void)enableDictationIfRequired;
- (id)backdropVisualEffectView;
- (void)updateBlurProgress;
- (void)dictationButtonPressed;
- (void)didMoveToSuperview;
- (void)removeCompletionAndHighlightAsTyped:(_Bool)arg1;
@property(readonly) _Bool optOutOfGoButton;
- (void)returnKeyPressed;
@property(nonatomic) __weak UIResponder *responderForKeyboardInput;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
