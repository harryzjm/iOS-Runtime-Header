//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchUI/TLKSelectableGridViewDelegate-Protocol.h>

@class NSString, TLKSelectableGridView;

@interface SearchUISelectableGridCardSectionView <TLKSelectableGridViewDelegate>
{
}

+ (_Bool)supportsRecyclingForCardSection:(id)arg1;
- (void)selectableGridView:(id)arg1 didChangeSelectedIndex:(long long)arg2;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize)arg2 forReason:(long long)arg3;
- (id)convertSFTitleSubtitleData:(id)arg1;
- (void)updateWithCardSection:(id)arg1;
- (id)setupContentView;

// Remaining properties
@property(retain) TLKSelectableGridView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
