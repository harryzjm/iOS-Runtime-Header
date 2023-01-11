//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface MPVideoDestinationBackgroundView : UIView
{
    NSString *_destinationName;
    UILabel *_destinationSubtitleLabel;
    UILabel *_destinationTitleLabel;
    long long _style;
    UIImageView *_videosImageView;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *destinationName; // @synthesize destinationName=_destinationName;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
