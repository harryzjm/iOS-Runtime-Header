//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EventKitUI/EKEditItemViewControllerDelegate-Protocol.h>

@class EKCalendarItem, EKEventStore, NSString, UIResponder, UIViewController;
@protocol EKCalendarItemEditItemDelegate, EKEditItemViewControllerProtocol, EKStyleProvider;

__attribute__((visibility("hidden")))
@interface EKCalendarItemEditItem : NSObject <EKEditItemViewControllerDelegate>
{
    EKEventStore *_store;
    UIViewController<EKEditItemViewControllerProtocol> *_viewController;
    EKCalendarItem *_calendarItem;
    id <EKCalendarItemEditItemDelegate> _delegate;
    id <EKStyleProvider> _styleProvider;
    UIResponder *_selectedResponder;
}

@property(retain, nonatomic) UIResponder *selectedResponder; // @synthesize selectedResponder=_selectedResponder;
@property(retain, nonatomic) id <EKStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) __weak id <EKCalendarItemEditItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)viewForActionSheet;
- (_Bool)shouldPinKeyboard;
- (_Bool)isInline;
- (void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (_Bool)editItemViewControllerShouldShowDetachAlert;
- (void)editItemViewControllerWantsKeyboardPinned:(_Bool)arg1;
- (_Bool)editItemViewControllerSave:(id)arg1;
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;
- (void)endInlineEditing;
- (void)notifyRequiresHeightChange;
- (void)notifyTextChanged;
- (void)notifySubitemDidSave:(unsigned long long)arg1;
- (void)notifyDidEndEditing;
- (void)notifyDidStartEditing;
- (_Bool)usesDetailViewControllerForSubitem:(unsigned long long)arg1;
- (void)editor:(id)arg1 didStartEditingItem:(id)arg2;
- (void)editorDidScroll:(id)arg1;
- (_Bool)editor:(id)arg1 shouldClearSelectionFromSubitem:(unsigned long long)arg2;
- (void)editor:(id)arg1 didDeselectSubitem:(unsigned long long)arg2;
- (void)_showViewController:(id)arg1 editor:(id)arg2 animated:(_Bool)arg3;
- (void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (void)editor:(id)arg1 requestsInjectableViewControllerToBeShownForSubitem:(unsigned long long)arg2;
- (_Bool)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2;
- (id)headerTitle;
- (id)footerTitle;
- (id)footerView;
- (double)footerHeightForWidth:(double)arg1;
- (id)injectableViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (unsigned long long)numberOfSubitems;
- (_Bool)shouldAppearWithVisibility:(int)arg1;
- (void)applicationDidResume;
- (_Bool)forceRefreshLocationItemOnSave;
- (_Bool)forceRefreshInviteesItemOnSave;
- (_Bool)forceRefreshStartAndEndDatesOnSave;
- (_Bool)forceTableReloadOnSave;
- (_Bool)requiresReconfigurationOnSave;
- (_Bool)canBeConfiguredForCalendarConstraints:(id)arg1;
- (_Bool)configureForCalendarConstraints:(id)arg1;
- (void)reset;
- (void)refreshFromCalendarItemAndStore;
- (id)calendarItem;
- (void)setCalendarItem:(id)arg1 store:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

