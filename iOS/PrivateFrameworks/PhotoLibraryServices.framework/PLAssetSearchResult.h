//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate;

@interface PLAssetSearchResult
{
    NSDate *_sortDate;
}

@property(readonly, nonatomic) NSDate *sortDate; // @synthesize sortDate=_sortDate;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *assetUUIDs;
- (unsigned long long)assetCount;
- (id)keyAssetUUID;
- (unsigned long long)type;

@end

