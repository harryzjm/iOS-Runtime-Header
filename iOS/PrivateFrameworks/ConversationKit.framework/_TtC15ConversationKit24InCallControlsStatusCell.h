//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewListCell.h>

@class MISSING_TYPE, UILabel, _TtC15ConversationKit19InCallControlButton;

@interface _TtC15ConversationKit24InCallControlsStatusCell : UICollectionViewListCell
{
    MISSING_TYPE *viewModel;
    MISSING_TYPE *$__lazy_storage_$_iconImageView;
    MISSING_TYPE *$__lazy_storage_$_titleLabel;
    MISSING_TYPE *$__lazy_storage_$_subtitleLabel;
    MISSING_TYPE *actionButton;
    MISSING_TYPE *$__lazy_storage_$_conversationStatusHStack;
    MISSING_TYPE *$__lazy_storage_$_conversationStatusDetailsVStack;
}

- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, retain) _TtC15ConversationKit19InCallControlButton *actionButton; // @synthesize actionButton;
@property(nonatomic, retain) UILabel *subtitleLabel;
@property(nonatomic, retain) UILabel *titleLabel;

@end
