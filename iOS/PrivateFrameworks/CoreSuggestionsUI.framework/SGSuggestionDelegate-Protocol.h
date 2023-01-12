//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSuggestionsUI/SGSuggestionViewControllerPresenter-Protocol.h>

@class UIViewController;
@protocol SGSuggestion;

@protocol SGSuggestionDelegate <SGSuggestionViewControllerPresenter>
- (long long)suggestionsUIContext;
- (void)suggestionWasUpdated:(id <SGSuggestion>)arg1;
- (void)suggestion:(id <SGSuggestion>)arg1 actionFinished:(_Bool)arg2;

@optional
- (void)suggestionBatchDismissal;
- (void)bannerDismissAction;
- (UIViewController *)tableViewController;
- (void)bannerPrimaryAction;
@end

