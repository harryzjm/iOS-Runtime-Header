//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "EKEventEditItem.h"

@class EKCalendarItemEditor, EKLocationEditItemViewController, EKUILocationEditItemModel, NSString;

__attribute__((visibility("hidden")))
@interface EKCalendarItemLocationInlineEditItem : EKEventEditItem
{
    EKUILocationEditItemModel *_viewModel;
    EKCalendarItemEditor *_editor;
    EKLocationEditItemViewController *_currentLocationEditController;
}

- (void).cxx_destruct;
- (void)_scribbleInteraction:(id)arg1 focusElement:(id)arg2 initialFocusSelectionReferencePoint:(struct CGPoint)arg3 completion:(CDUnknownBlockType)arg4;
- (struct CGRect)_scribbleInteraction:(id)arg1 frameForElement:(id)arg2;
- (void)_scribbleInteraction:(id)arg1 requestElementsInRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_scribbleInteraction:(id)arg1 didFinishWritingInElement:(id)arg2;
- (void)_scribbleInteraction:(id)arg1 willBeginWritingInElement:(id)arg2;
- (_Bool)_scribbleInteraction:(id)arg1 focusWillTransformElement:(id)arg2;
- (id)searchStringForEventAutocomplete;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)didTapDismissSuggestedLocationCell:(id)arg1;
- (void)didTapAddSuggestedLocationCell:(id)arg1 disambiguatedLocation:(id)arg2;
- (void)editItemPendingVideoConferenceCompleted:(id)arg1;
- (_Bool)editItemViewControllerSave:(id)arg1;
- (_Bool)isSubitemAtIndexSaveable:(unsigned long long)arg1;
- (_Bool)forceRefreshURLItemOnSave;
- (_Bool)forceRefreshStartAndEndDatesOnSave;
- (_Bool)forceTableReloadOnSave;
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;
- (void)_clearLocationAtIndex:(unsigned long long)arg1;
- (void)_clearButtonTapped:(id)arg1;
- (unsigned long long)_supportedSearchTypesForSubitemAtIndex:(unsigned long long)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (_Bool)usesDetailViewControllerForSubitem:(unsigned long long)arg1;
- (_Bool)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2;
- (void)_setEditor:(id)arg1 andUpdateScribbleInteractionOnCell:(id)arg2 addScribbleInteraction:(_Bool)arg3;
- (void)_updateVirtualConferenceCell:(id)arg1 index:(unsigned long long)arg2 virtualConference:(id)arg3;
- (void)_updateClearButtonAndMakeVisible:(id)arg1 index:(unsigned long long)arg2;
- (void)_updateMapLocationCell:(id)arg1 index:(unsigned long long)arg2 location:(id)arg3;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1 inEditor:(id)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (_Bool)isSaveable;
- (void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfSubitems;
- (void)reset;
- (_Bool)isInline;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (void)refreshFromCalendarItemAndStore;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

