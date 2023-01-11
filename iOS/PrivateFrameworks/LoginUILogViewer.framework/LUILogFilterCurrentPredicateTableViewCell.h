//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class UIButton, UILabel;
@protocol LUILogFilterCurrentPredicateTableViewCellDelegate;

@interface LUILogFilterCurrentPredicateTableViewCell : UITableViewCell
{
    id <LUILogFilterCurrentPredicateTableViewCellDelegate> _delegate;
    UILabel *_titleLabel;
    UIButton *_deleteButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <LUILogFilterCurrentPredicateTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_deleteButtonTapped:(id)arg1;
- (id)_createDeleteButton;
- (id)_createTitleLabel;
- (void)layoutSubviews;
- (void)_setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
