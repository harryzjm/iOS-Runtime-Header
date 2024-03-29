//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUICollectionViewCell.h"

@class NSString, SKUIEditorialCellLayout;

__attribute__((visibility("hidden")))
@interface SKUIEditorialCollectionViewCell : SKUICollectionViewCell
{
    SKUIEditorialCellLayout *_layout;
    _Bool _layoutNeedsLayout;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SKUIEditorialCellLayout *layout; // @synthesize layout=_layout;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)applyLayoutAttributes:(id)arg1;
- (void)setCellLayoutNeedsLayout;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

