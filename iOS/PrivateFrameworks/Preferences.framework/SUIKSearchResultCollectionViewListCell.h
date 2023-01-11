//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewListCell.h>

@class CSSearchableItem;

@interface SUIKSearchResultCollectionViewListCell : UICollectionViewListCell
{
    CSSearchableItem *_searchableItem;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) CSSearchableItem *searchableItem; // @synthesize searchableItem=_searchableItem;
- (void)configureWithSearchableItem:(id)arg1;
- (void)updateConfigurationUsingState:(id)arg1;
- (void)prepareForReuse;

@end
