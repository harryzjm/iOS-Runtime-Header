//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE;
@protocol WFTriggerSuggestionViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WFTriggerSuggestionViewController : UIViewController
{
    MISSING_TYPE *trigger;
    MISSING_TYPE *delegate;
    MISSING_TYPE *hostingController;
    MISSING_TYPE *searchController;
    MISSING_TYPE *dataSource;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)contentScrollViewForEdge:(unsigned long long)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithCoder:(id)arg1;
- (id)initWithTrigger:(id)arg1;
@property(nonatomic) __weak id <WFTriggerSuggestionViewControllerDelegate> delegate; // @synthesize delegate;

@end

