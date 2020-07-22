//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UILabel;
@protocol CNPropertyCellDelegate;

__attribute__((visibility("hidden")))
@interface CNLinkedCardsCell
{
    id <CNPropertyCellDelegate> _delegate;
    UILabel *_sourceLabel;
    UILabel *_nameLabel;
}

+ (_Bool)wantsChevron;
@property(readonly, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(readonly, nonatomic) UILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(nonatomic) __weak id <CNPropertyCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)setCardGroupItem:(id)arg1;
- (void)performDefaultAction;
- (_Bool)shouldPerformDefaultAction;
- (id)valueView;
- (id)labelView;

@end

