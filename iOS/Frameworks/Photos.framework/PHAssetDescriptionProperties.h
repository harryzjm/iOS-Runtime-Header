//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PHAssetDescriptionProperties
{
    NSString *_assetDescription;
}

+ (id)propertiesToFetch;
+ (id)propertySetName;
@property(readonly, copy, nonatomic) NSString *assetDescription; // @synthesize assetDescription=_assetDescription;
- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;

@end
