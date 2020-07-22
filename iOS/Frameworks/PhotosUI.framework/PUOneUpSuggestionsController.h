//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUBrowsingViewModelChangeObserver-Protocol.h>
#import <PhotosUI/PXContextualNotificationDelegate-Protocol.h>

@class NSMutableDictionary, NSString, PUAssetReference, PUBrowsingViewModel, PUOneUpSuggestionsProvider;
@protocol PUOneUpSuggestionsControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUOneUpSuggestionsController : NSObject <PXContextualNotificationDelegate, PUBrowsingViewModelChangeObserver>
{
    _Bool _willPerformUpdates;
    _Bool _isPerformingUpdates;
    struct {
        _Bool focusedAssetReference;
        _Bool focusedLongEnough;
        _Bool activeSuggestionsWindow;
    } _needsUpdateFlags;
    struct {
        _Bool frameForAssetReferenceInCoordinateSpace;
        _Bool viewController;
        _Bool didSelectSuggestionForAssetReference;
        _Bool canShowSuggestion;
    } _delegateRespondsTo;
    _Bool _viewVisible;
    _Bool _inFocus;
    _Bool _focusedLongEnough;
    PUOneUpSuggestionsProvider *_suggestionsProvider;
    PUBrowsingViewModel *_browsingViewModel;
    id <PUOneUpSuggestionsControllerDelegate> _delegate;
    PUAssetReference *_focusedAssetReference;
    double _lastFocusedAssetReferenceChangeTime;
    NSMutableDictionary *_suggestionInfos;
}

@property(readonly, nonatomic) NSMutableDictionary *suggestionInfos; // @synthesize suggestionInfos=_suggestionInfos;
@property(nonatomic, getter=isFocusedLongEnough) _Bool focusedLongEnough; // @synthesize focusedLongEnough=_focusedLongEnough;
@property(nonatomic) double lastFocusedAssetReferenceChangeTime; // @synthesize lastFocusedAssetReferenceChangeTime=_lastFocusedAssetReferenceChangeTime;
@property(retain, nonatomic) PUAssetReference *focusedAssetReference; // @synthesize focusedAssetReference=_focusedAssetReference;
@property(nonatomic, getter=isInFocus) _Bool inFocus; // @synthesize inFocus=_inFocus;
@property(nonatomic, getter=isViewVisible) _Bool viewVisible; // @synthesize viewVisible=_viewVisible;
@property(nonatomic) __weak id <PUOneUpSuggestionsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PUBrowsingViewModel *browsingViewModel; // @synthesize browsingViewModel=_browsingViewModel;
@property(readonly, nonatomic) PUOneUpSuggestionsProvider *suggestionsProvider; // @synthesize suggestionsProvider=_suggestionsProvider;
- (void).cxx_destruct;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)contextualNotificationDidDisappear:(id)arg1;
- (void)contextualNotificationWasDiscarded:(id)arg1;
- (void)contextualNotificationWasTapped:(id)arg1;
- (_Bool)contextualNotification:(id)arg1 shouldPassthroughPoint:(struct CGPoint)arg2 inCoordinateSpace:(id)arg3;
- (long long)preferredAnimationForContextualNotification:(id)arg1;
- (id)preferredContainerViewForContextualNotification:(id)arg1;
- (struct CGRect)contextualNotification:(id)arg1 containingFrameInCoordinateSpace:(id)arg2;
- (void)_dismissSuggestionInfo:(id)arg1;
- (void)_invalidateSuggestionsVisibility;
- (void)_updateInFocus;
- (void)_invalidateInFocus;
- (void)_updateActiveSuggestionsWindowIfNeeded;
- (void)_invalidateActiveSuggestionsWindow;
- (void)_updateFocusedLongEnoughIfNeeded;
- (void)_invalidateFocusedLongEnough;
- (void)_updateFocusedAssetReferenceIfNeeded;
- (void)_invalidateFocusedAssetReference;
- (void)_updateIfNeeded;
- (_Bool)_needsUpdate;
- (void)_setNeedsUpdate;
- (id)_assetReferenceForContextualNotification:(id)arg1;
- (void)_handleSuggestion:(id)arg1 error:(id)arg2 forAssetReference:(id)arg3;
- (void)_requestSuggestionForAssetReference:(id)arg1;
- (_Bool)_canKeepDisplayingSuggestionsForAssetReference:(id)arg1;
- (_Bool)_canBeginDisplayingSuggestionsForAssetReference:(id)arg1;
- (void)_handleDataSourceChange:(id)arg1;
- (void)_removeSuggestionInfoForAssetReference:(id)arg1;
- (id)_suggestionInfoForAssetReference:(id)arg1 createIfNeeded:(_Bool)arg2;
- (void)markSuggestionAsSeenForAssetReference:(id)arg1;
- (void)hideSuggestionForAssetReference:(id)arg1;
- (void)invalidateLayoutForAssetReference:(id)arg1;
- (void)invalidateLayout;
- (void)_updateSuggestions;
- (void)invalidateSuggestions;
- (id)initWithSuggestionsProvider:(id)arg1 browsingViewModel:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

