//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <VideosUI/TVAppTemplateImpressionable-Protocol.h>

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI24EpicInlineViewController : UIViewController <TVAppTemplateImpressionable>
{
    MISSING_TYPE *collectionImpressioner;
    MISSING_TYPE *viewElement;
    MISSING_TYPE *shelfViewModel;
    MISSING_TYPE *horizontalCollectionViewModel;
    MISSING_TYPE *lastViewWidth;
    MISSING_TYPE *shelfViewController;
    MISSING_TYPE *horizontalStackViewController;
    MISSING_TYPE *scrollViewMonitor;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;

@end
