//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ContactsAutocompleteUI/CNAutocompleteResultsTableViewControllerDelegate-Protocol.h>
#import <ContactsAutocompleteUI/CNAutocompleteSearchConsumer-Protocol.h>
#import <ContactsAutocompleteUI/CNAutocompleteSuggestionsViewControllerDelegate-Protocol.h>
#import <ContactsAutocompleteUI/CNAutocompleteUIFetchDelegate-Protocol.h>
#import <ContactsAutocompleteUI/CNComposeRecipientTextViewDelegate-Protocol.h>

@class CNAutocompleteResultsTableViewController, CNAutocompleteSearchControllerSafeDelegateWrapper, CNAutocompleteSearchManager, CNAutocompleteSuggestionsViewController, CNComposeRecipientTextView, NSArray, NSNumber, NSString, UIScrollView, UIView;
@protocol CNAutocompleteSearchControllerDelegate, NSObject;

@interface CNAutocompleteSearchController : UIViewController <CNAutocompleteSearchConsumer, CNAutocompleteUIFetchDelegate, CNComposeRecipientTextViewDelegate, CNAutocompleteSuggestionsViewControllerDelegate, CNAutocompleteResultsTableViewControllerDelegate>
{
    _Bool _ignoreDidFinishAddress;
    _Bool _didPresentContactPicker;
    _Bool _didPresentContactCard;
    _Bool _shouldRestoreFirstResponderToComposeField;
    _Bool _didAddRecipientFromTypedQuery;
    _Bool _suggestionsAllowed;
    _Bool _hasSmallScreen;
    _Bool _shouldHideSuggestionsAfterFirstRecipient;
    UIView *_footerView;
    NSArray *_otherRecipientAddresses;
    id <CNAutocompleteSearchControllerDelegate> _delegate;
    CNAutocompleteSearchControllerSafeDelegateWrapper *_delegateWrapper;
    CNAutocompleteSearchManager *_searchManager;
    CNComposeRecipientTextView *_composeField;
    CNAutocompleteResultsTableViewController *_resultsController;
    CNAutocompleteSuggestionsViewController *_suggestionsController;
    UIScrollView *_composeFieldScrollView;
    UIView *_composeFieldContainerView;
    id <NSObject> _keyboardWillShowNotificationObserver;
    id <NSObject> _keyboardWillHideNotificationObserver;
    id <NSObject> _uiContentSizeCategoryDidChangeNotificationObserver;
    NSNumber *_currentTaskID;
    NSArray *_autocompleteResults;
    NSArray *_expandedOtherRecipientAddresses;
    struct CGRect _latestKeyboardFrame;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldHideSuggestionsAfterFirstRecipient; // @synthesize shouldHideSuggestionsAfterFirstRecipient=_shouldHideSuggestionsAfterFirstRecipient;
@property(nonatomic) _Bool hasSmallScreen; // @synthesize hasSmallScreen=_hasSmallScreen;
@property(nonatomic) _Bool suggestionsAllowed; // @synthesize suggestionsAllowed=_suggestionsAllowed;
@property(nonatomic) _Bool didAddRecipientFromTypedQuery; // @synthesize didAddRecipientFromTypedQuery=_didAddRecipientFromTypedQuery;
@property(nonatomic) _Bool shouldRestoreFirstResponderToComposeField; // @synthesize shouldRestoreFirstResponderToComposeField=_shouldRestoreFirstResponderToComposeField;
@property(nonatomic) _Bool didPresentContactCard; // @synthesize didPresentContactCard=_didPresentContactCard;
@property(nonatomic) _Bool didPresentContactPicker; // @synthesize didPresentContactPicker=_didPresentContactPicker;
@property(nonatomic) _Bool ignoreDidFinishAddress; // @synthesize ignoreDidFinishAddress=_ignoreDidFinishAddress;
@property(retain, nonatomic) NSArray *expandedOtherRecipientAddresses; // @synthesize expandedOtherRecipientAddresses=_expandedOtherRecipientAddresses;
@property(retain, nonatomic) NSArray *autocompleteResults; // @synthesize autocompleteResults=_autocompleteResults;
@property(retain, nonatomic) NSNumber *currentTaskID; // @synthesize currentTaskID=_currentTaskID;
@property(nonatomic) struct CGRect latestKeyboardFrame; // @synthesize latestKeyboardFrame=_latestKeyboardFrame;
@property(retain, nonatomic) id <NSObject> uiContentSizeCategoryDidChangeNotificationObserver; // @synthesize uiContentSizeCategoryDidChangeNotificationObserver=_uiContentSizeCategoryDidChangeNotificationObserver;
@property(retain, nonatomic) id <NSObject> keyboardWillHideNotificationObserver; // @synthesize keyboardWillHideNotificationObserver=_keyboardWillHideNotificationObserver;
@property(retain, nonatomic) id <NSObject> keyboardWillShowNotificationObserver; // @synthesize keyboardWillShowNotificationObserver=_keyboardWillShowNotificationObserver;
@property(retain, nonatomic) UIView *composeFieldContainerView; // @synthesize composeFieldContainerView=_composeFieldContainerView;
@property(retain, nonatomic) UIScrollView *composeFieldScrollView; // @synthesize composeFieldScrollView=_composeFieldScrollView;
@property(readonly, nonatomic) CNAutocompleteSuggestionsViewController *suggestionsController; // @synthesize suggestionsController=_suggestionsController;
@property(readonly, nonatomic) CNAutocompleteResultsTableViewController *resultsController; // @synthesize resultsController=_resultsController;
@property(readonly, nonatomic) CNComposeRecipientTextView *composeField; // @synthesize composeField=_composeField;
@property(retain, nonatomic) CNAutocompleteSearchManager *searchManager; // @synthesize searchManager=_searchManager;
@property(retain, nonatomic) CNAutocompleteSearchControllerSafeDelegateWrapper *delegateWrapper; // @synthesize delegateWrapper=_delegateWrapper;
@property(nonatomic) __weak id <CNAutocompleteSearchControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *otherRecipientAddresses; // @synthesize otherRecipientAddresses=_otherRecipientAddresses;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
- (void)providePeopleSuggesterFeedbackForRemovedRecipient:(id)arg1;
- (void)providePeopleSuggesterFeedbackForTypedRecipient:(id)arg1;
- (void)providePeopleSuggesterFeedbackForSuggestedRecipient:(id)arg1;
- (void)providePeopleSuggesterFeedbackForViewWillDisappear;
- (void)providePeopleSuggesterFeedbackForViewWillAppear;
- (void)clearPresentedViewControllerState;
- (_Bool)didPresentSomeViewController;
- (void)autocompleteResultsController:(id)arg1 didEndDisplayingRowForRecipient:(id)arg2;
- (void)autocompleteResultsController:(id)arg1 willDisplayRowForRecipient:(id)arg2;
- (_Bool)collapseSelectedSearchResultForComposeRecipientView:(id)arg1;
- (_Bool)expandSelectedSearchResultForComposeRecipientView:(id)arg1;
- (_Bool)composeRecipientViewShowingSearchResults:(id)arg1;
- (_Bool)chooseSelectedSearchResultForComposeRecipientView:(id)arg1;
- (void)selectPreviousSearchResultForComposeRecipientView:(id)arg1;
- (void)selectNextSearchResultForComposeRecipientView:(id)arg1;
- (void)autocompleteResultsControllerWillBeginToScroll:(id)arg1;
- (void)autocompleteResultsController:(id)arg1 didAskToRemoveRecipient:(id)arg2;
- (void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2;
- (void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3;
- (_Bool)suggestionsController:(id)arg1 imageDataForRecipient:(id)arg2 imageUpdateBlock:(CDUnknownBlockType)arg3;
- (void)suggestionsControllerWillBeginScroll:(id)arg1;
- (id)selectedRecipientsForSuggestionsController:(id)arg1;
- (void)hideSoftwareKeyboard;
- (void)suggestionsControllerTitleLabelWasTapped:(id)arg1;
- (void)suggestionsController:(id)arg1 didDeselectRecipient:(id)arg2;
- (void)suggestionsController:(id)arg1 didSelectRecipient:(id)arg2;
- (_Bool)autocompleteResultsController:(id)arg1 willOverrideImageDataForRecipient:(id)arg2 imageUpdateBlock:(CDUnknownBlockType)arg3;
- (id)autocompleteResultsController:(id)arg1 preferredRecipientForRecipient:(id)arg2;
- (void)autocompleteResultsController:(id)arg1 tintColorForRecipient:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)presentationOptionsForRecipient:(id)arg1;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 showPersonCardForRecipient:(id)arg2;
- (id)composeRecipientView:(id)arg1 contextMenuConfigurationForAtom:(id)arg2;
- (void)stopDisambiguatingForComposeRecipientView:(id)arg1;
- (void)composeRecipientView:(id)arg1 disambiguateRecipientForAtom:(id)arg2;
- (void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (_Bool)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeHeaderView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (_Bool)autocompleteResultsController:(id)arg1 willOverrideImageDataForRecipient:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)getSupplementalGroupsForSearchQuery:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)finishedSearchingForAutocompleteResults;
- (void)finishedTaskWithID:(id)arg1;
- (void)consumeResults:(id)arg1 taskID:(id)arg2;
- (void)consumeCorecipientSearchResults:(id)arg1 taskID:(id)arg2;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
- (void)prewarmSuggestedRecipientsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)updateFooterVisibility;
- (void)updateFooterPositionWithKeyboardIntersectionRect:(struct CGRect)arg1;
- (void)updateFooterPositionWithKeyboardFrame:(struct CGRect)arg1;
- (void)adjustInsetsForKeyboardFrame:(struct CGRect)arg1;
- (void)invalidatePreferredRecipients;
- (void)invalidateRecipientTintColors;
- (void)hideSuggestionsController;
- (void)showSuggestionsController;
- (void)hideResultsController;
- (void)unhideResultsController;
- (void)disambiguateRecipient:(id)arg1;
- (void)_addRecipient:(id)arg1;
- (void)addRecipient:(id)arg1;
- (_Bool)hasSpaceToDisplaySuggestions;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)prepareForReuse;
- (_Bool)becomeFirstResponder;
@property(copy, nonatomic) NSString *composeFieldInfoText;
- (void)setPreferredRecipient:(id)arg1 forRecipient:(id)arg2;
- (void)setTintColor:(id)arg1 forRecipient:(id)arg2;
- (void)setPresentationOptions:(unsigned long long)arg1 forRecipient:(id)arg2;
@property(retain, nonatomic) NSArray *recipients;
- (void)dealloc;
- (id)initWithSearchManager:(id)arg1 textView:(id)arg2 resultsController:(id)arg3;
- (id)initWithSearchType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
