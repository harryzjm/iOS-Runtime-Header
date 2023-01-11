//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

@interface PLCombinedAssetSearchResult
{
    NSMutableArray *_assetSearchResults;
}

@property(retain, nonatomic) NSMutableArray *assetSearchResults; // @synthesize assetSearchResults=_assetSearchResults;
- (void).cxx_destruct;
- (id)assetUUIDs;
- (unsigned long long)assetCount;
- (id)groupDescription;
- (unsigned long long)categoryMask;
- (void)addAssetSearchResult:(id)arg1 isMainSearchResult:(_Bool)arg2;
- (id)initWithAssetSearchResult:(id)arg1;

@end
