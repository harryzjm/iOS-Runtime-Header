//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PHAssetAdjustmentProperties
{
    NSString *_formatIdentifier;
    NSString *_formatVersion;
    unsigned long long _originalResourceChoice;
}

+ (id)propertiesToFetch;
+ (id)propertySetName;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long originalResourceChoice; // @synthesize originalResourceChoice=_originalResourceChoice;
@property(readonly, nonatomic) NSString *formatVersion; // @synthesize formatVersion=_formatVersion;
@property(readonly, nonatomic) NSString *formatIdentifier; // @synthesize formatIdentifier=_formatIdentifier;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;

@end
