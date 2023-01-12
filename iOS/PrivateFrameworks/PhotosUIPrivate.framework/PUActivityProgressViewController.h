//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSString, PLRoundProgressView, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface PUActivityProgressViewController : UIViewController
{
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    PLRoundProgressView *_progressView;
    UIImageView *_checkmarkView;
    NSString *_primaryText;
    NSString *_secondaryText;
    NSArray *_labelConstraints;
    NSArray *_contentConstraints;
    _Bool _showCheckmarkOnCompletion;
    double _fractionCompleted;
}

- (void).cxx_destruct;
@property(nonatomic) double fractionCompleted; // @synthesize fractionCompleted=_fractionCompleted;
@property(nonatomic) _Bool showCheckmarkOnCompletion; // @synthesize showCheckmarkOnCompletion=_showCheckmarkOnCompletion;
@property(retain, nonatomic) NSString *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(retain, nonatomic) NSString *primaryText; // @synthesize primaryText=_primaryText;
- (void)reset;
- (void)updateViewConstraints;
- (id)_checkmarkView;
- (id)_progressView;
- (void)_updateSecondaryLabel;
- (void)_updatePrimaryLabel;
- (id)_secondaryLabel;
- (id)_primaryLabel;
- (void)_updateViewVisibility;

@end

