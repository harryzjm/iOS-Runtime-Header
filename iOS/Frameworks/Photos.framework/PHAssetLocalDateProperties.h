//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

@interface PHAssetLocalDateProperties
{
    NSNumber *_inferredTimeZoneOffset;
}

+ (id)propertiesToFetch;
+ (id)propertySetName;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *inferredTimeZoneOffset; // @synthesize inferredTimeZoneOffset=_inferredTimeZoneOffset;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;

@end
