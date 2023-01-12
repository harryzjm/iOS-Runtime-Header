//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDSQLiteDatabase, HKMedicationsNumberToStringMap, NSDictionary, NSURL;

__attribute__((visibility("hidden")))
@interface HKMedicationsResolver : NSObject
{
    HDSQLiteDatabase *_db;
    NSURL *_assetUrl;
    _Bool _dbReady;
    long long _numberOfNewNgrams;
    long long _numberOfUsedNgrams;
    HKMedicationsNumberToStringMap *_ingredients;
    HKMedicationsNumberToStringMap *_tradenames;
    NSDictionary *_abbreviations;
}

- (void).cxx_destruct;
- (_Bool)hkt_setUpDatabase;
- (_Bool)hkt_looksLikeGenericInText:(id)arg1;
- (id)hkt_ngramsWithError:(inout id *)arg1;
- (long long)hkt_ngramIdCountWithError:(inout id *)arg1;
- (id)hkt_createNgramMapsWithError:(inout id *)arg1;
- (_Bool)hkt_prepareNgramAssetWithError:(inout id *)arg1;
- (id)hkt_ngramsFrom:(id)arg1 minLength:(long long)arg2 maxLength:(long long)arg3;
- (long long)countOfContinousDigitsInLine:(id)arg1;
- (long long)consecutiveLCSUsingTranscript:(id)arg1 prediction:(id)arg2;
- (id)filterAndAddGenerics:(id)arg1 transcripts:(id)arg2 criterion:(float)arg3 limit:(long long)arg4 error:(inout id *)arg5;
- (id)resolveText:(id)arg1 error:(inout id *)arg2;
- (void)processNgramLine:(id)arg1 n:(long long)arg2;
- (_Bool)resetInMemoryDBWithError:(inout id *)arg1;
- (_Bool)resetResolverWithError:(inout id *)arg1;
- (void)dealloc;
- (id)initWithAssetUrl:(id)arg1;

@end

