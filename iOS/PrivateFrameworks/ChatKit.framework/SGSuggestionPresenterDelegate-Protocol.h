//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class NSArray, SGSuggestionPresenter, UIViewController;

@protocol SGSuggestionPresenterDelegate <NSObject>
- (UIViewController *)viewControllerForPresentingFromBannerByPresenter:(SGSuggestionPresenter *)arg1;
- (void)suggestionPresenterWantsToHideBanner:(SGSuggestionPresenter *)arg1;
- (void)suggestionPresenterWantsToShowBanner:(SGSuggestionPresenter *)arg1;

@optional
- (void)dismissAllSuggestions;
- (void)suggestionPresenterDismissAllSuggestions:(NSArray *)arg1;
- (long long (^)(id, id))suggestionCategoryComparatorForManager:(SGSuggestionPresenter *)arg1;
- (void)suggestionPresenter:(SGSuggestionPresenter *)arg1 didDismissViewController:(UIViewController *)arg2;
- (void)suggestionPresenter:(SGSuggestionPresenter *)arg1 willDismissViewController:(UIViewController *)arg2;
- (void)suggestionPresenter:(SGSuggestionPresenter *)arg1 didPresentViewController:(UIViewController *)arg2;
- (void)suggestionPresenter:(SGSuggestionPresenter *)arg1 willPresentViewController:(UIViewController *)arg2;
- (void)reloadSuggestionsFromSearchableItems;
@end

