//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class SKUIStarRatingControl;

__attribute__((visibility("hidden")))
@interface SKUIReviewInAppRatingControlViewController : UIViewController
{
    SKUIStarRatingControl *_ratingControl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SKUIStarRatingControl *ratingControl; // @synthesize ratingControl=_ratingControl;
- (id)_repeatedTemplateImageForImage:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end
