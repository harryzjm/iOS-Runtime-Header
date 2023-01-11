//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HDDataProvenanceCache, HDMetadataValueStatement;

@interface _HDDataEntityEncoder
{
    HDMetadataValueStatement *_metadataValueStatement;
    HDDataProvenanceCache *_dataProvenanceCache;
    CDUnknownBlockType _metadataKeyFilter;
    _Bool _includeAutomaticTimeZones;
    _Bool _includeContributorInformation;
}

- (void).cxx_destruct;
- (void)finish;
- (id)_copyBaseMetadataForRow:(struct HDSQLiteRow *)arg1;
- (_Bool)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow *)arg3 error:(id *)arg4;
- (id)objectForPersistentID:(long long)arg1 row:(struct HDSQLiteRow *)arg2 error:(id *)arg3;
- (id)codableRepresentationForPersistentID:(long long)arg1 row:(struct HDSQLiteRow *)arg2 error:(id *)arg3;
- (id)orderedProperties;
- (id)initWithHealthEntityClass:(Class)arg1 profile:(id)arg2 transaction:(id)arg3 purpose:(long long)arg4 encodingOptions:(id)arg5 authorizationFilter:(CDUnknownBlockType)arg6;

@end
