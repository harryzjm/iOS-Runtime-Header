//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKIncrementalSearchBarDelegate-Protocol.h>

@class HKIncrementalSearchBar, NSData, NSMutableArray, NSOperationQueue, NSString, UIColor, UITextView, _IncrementalSearchOperation;

@interface HKLargePlainTextViewController <HKIncrementalSearchBarDelegate>
{
    NSData *_data;
    NSString *_dataAsString;
    UITextView *_textView;
    HKIncrementalSearchBar *_incrementalSearchBar;
    NSOperationQueue *_searchQueue;
    _IncrementalSearchOperation *_currentSearch;
    NSMutableArray *_currentRanges;
    long long _currentSearchItem;
    UIColor *_normalTextViewBackground;
    UIColor *_selectedTextViewBackground;
    UIColor *_currentSelectionForeground;
    UIColor *_currentSelectionBackground;
    UIColor *_otherSelectionForeground;
    UIColor *_otherSelectionBackground;
    double _currentKeyboardHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double currentKeyboardHeight; // @synthesize currentKeyboardHeight=_currentKeyboardHeight;
@property(readonly, nonatomic) UIColor *otherSelectionBackground; // @synthesize otherSelectionBackground=_otherSelectionBackground;
@property(readonly, nonatomic) UIColor *otherSelectionForeground; // @synthesize otherSelectionForeground=_otherSelectionForeground;
@property(readonly, nonatomic) UIColor *currentSelectionBackground; // @synthesize currentSelectionBackground=_currentSelectionBackground;
@property(readonly, nonatomic) UIColor *currentSelectionForeground; // @synthesize currentSelectionForeground=_currentSelectionForeground;
@property(readonly, nonatomic) UIColor *selectedTextViewBackground; // @synthesize selectedTextViewBackground=_selectedTextViewBackground;
@property(readonly, nonatomic) UIColor *normalTextViewBackground; // @synthesize normalTextViewBackground=_normalTextViewBackground;
@property long long currentSearchItem; // @synthesize currentSearchItem=_currentSearchItem;
@property(retain, nonatomic) NSMutableArray *currentRanges; // @synthesize currentRanges=_currentRanges;
@property(retain) _IncrementalSearchOperation *currentSearch; // @synthesize currentSearch=_currentSearch;
@property(readonly, nonatomic) NSOperationQueue *searchQueue; // @synthesize searchQueue=_searchQueue;
@property(readonly, nonatomic) HKIncrementalSearchBar *incrementalSearchBar; // @synthesize incrementalSearchBar=_incrementalSearchBar;
@property(readonly, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(readonly, nonatomic) NSString *dataAsString; // @synthesize dataAsString=_dataAsString;
@property(readonly) NSData *data; // @synthesize data=_data;
- (void)searchBarChangeSearch:(id)arg1 searchString:(id)arg2;
- (void)searchBarDoneAction:(id)arg1;
- (void)searchBarDownAction:(id)arg1;
- (void)searchBarUpAction:(id)arg1;
- (void)resetCurrentSearchItem;
- (void)_updateCurrentSearchItem:(unsigned long long)arg1 hitsChanged:(_Bool)arg2 resetSearch:(_Bool)arg3;
- (_Bool)_updateMatchDisplayString:(unsigned long long)arg1 numMatches:(unsigned long long)arg2;
- (void)incrementalSearchOperation:(id)arg1;
- (void)addSearchResults:(struct IncrementalSearchResultsDefn)arg1;
- (void)cancelCurrentSearch;
- (void)finishSearchResults;
- (void)endSearchResults;
- (void)resetSearchResults;
- (id)searchBodyWithAttributes;
- (id)_selectionAttributes:(_Bool)arg1;
- (id)_standardPlainTextFont;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)loadView;
- (void)startIncrementalSearch;
- (id)initWithData:(id)arg1;

@end
