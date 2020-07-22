//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface _CKAcknowledgmentVoteCountView : UIView
{
    UILabel *_voteCountLabel;
    UIImageView *_ackIconImageView;
}

@property(retain, nonatomic) UIImageView *ackIconImageView; // @synthesize ackIconImageView=_ackIconImageView;
@property(retain, nonatomic) UILabel *voteCountLabel; // @synthesize voteCountLabel=_voteCountLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)configureWithAcknowledgmentTally:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

