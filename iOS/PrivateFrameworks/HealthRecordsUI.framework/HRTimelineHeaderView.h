//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class MISSING_TYPE;
@protocol HRTimelineHeaderViewDelegate;

@interface HRTimelineHeaderView : UITableViewHeaderFooterView
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *$__lazy_storage_$_titleLabel;
    MISSING_TYPE *$__lazy_storage_$_subtitleLabel;
    MISSING_TYPE *$__lazy_storage_$_backgroundEffectView;
    MISSING_TYPE *$__lazy_storage_$_separatorView;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(nonatomic) _Bool floating;
- (void)prepareForReuse;
- (void)applyStyleFromNavigationBar:(id)arg1;
- (void)applyTitle:(id)arg1 subtitle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
@property(nonatomic) __weak id <HRTimelineHeaderViewDelegate> delegate; // @synthesize delegate;

@end
