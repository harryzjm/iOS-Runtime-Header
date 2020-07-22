//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class RadioArtworkCollection, RadioSeedMetadata;

@interface RadioMutableLikeBanItem
{
    long long _itemID;
}

@property(nonatomic) long long itemID; // @synthesize itemID=_itemID;
@property(nonatomic) long long type; // @dynamic type;
@property(nonatomic) long long storeID; // @dynamic storeID;
@property(copy, nonatomic) RadioSeedMetadata *seedMetadata; // @dynamic seedMetadata;
@property(nonatomic) _Bool isSeed; // @dynamic isSeed;
@property(retain, nonatomic) RadioArtworkCollection *artworkCollection; // @dynamic artworkCollection;
@property(nonatomic) long long albumID; // @dynamic albumID;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

