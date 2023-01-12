//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APOdmlSettings, APOdmlVector, DESRecordStore, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSUUID;

@interface APOdmlDESRecord : NSObject
{
    _Bool _shouldMakeRecord;
    _Bool _writingInProgress;
    _Bool _organicsExist;
    NSUUID *_recordIdentifier;
    NSString *_requestID;
    DESRecordStore *_recordStore;
    NSMutableArray *_postWriteOperations;
    NSMutableDictionary *_adRecords;
    APOdmlVector *_runtimeAppUsageVector;
    APOdmlVector *_counterfactualAppUsageVector;
    NSArray *_organicsList;
    NSArray *_originalAdOrderList;
    NSArray *_rerankedAdOrderList;
    APOdmlSettings *_runtimeOdmlSettings;
    APOdmlSettings *_counterfactualOdmlSettings;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool organicsExist; // @synthesize organicsExist=_organicsExist;
@property(retain, nonatomic) APOdmlSettings *counterfactualOdmlSettings; // @synthesize counterfactualOdmlSettings=_counterfactualOdmlSettings;
@property(retain, nonatomic) APOdmlSettings *runtimeOdmlSettings; // @synthesize runtimeOdmlSettings=_runtimeOdmlSettings;
@property(retain, nonatomic) NSArray *rerankedAdOrderList; // @synthesize rerankedAdOrderList=_rerankedAdOrderList;
@property(retain, nonatomic) NSArray *originalAdOrderList; // @synthesize originalAdOrderList=_originalAdOrderList;
@property(retain, nonatomic) NSArray *organicsList; // @synthesize organicsList=_organicsList;
@property(retain, nonatomic) APOdmlVector *counterfactualAppUsageVector; // @synthesize counterfactualAppUsageVector=_counterfactualAppUsageVector;
@property(retain, nonatomic) APOdmlVector *runtimeAppUsageVector; // @synthesize runtimeAppUsageVector=_runtimeAppUsageVector;
@property(retain, nonatomic) NSMutableDictionary *adRecords; // @synthesize adRecords=_adRecords;
@property _Bool writingInProgress; // @synthesize writingInProgress=_writingInProgress;
@property(retain, nonatomic) NSMutableArray *postWriteOperations; // @synthesize postWriteOperations=_postWriteOperations;
@property(nonatomic) _Bool shouldMakeRecord; // @synthesize shouldMakeRecord=_shouldMakeRecord;
@property(retain, nonatomic) DESRecordStore *recordStore; // @synthesize recordStore=_recordStore;
@property(retain, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(retain, nonatomic) NSUUID *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
- (void)handleSaveCompletion:(id)arg1 error:(id)arg2;
- (void)saveDESRecord:(id)arg1 info:(id)arg2;
- (void)writeDESRecord;
- (void)performAfterWrite:(CDUnknownBlockType)arg1;
- (id)dictionaryRepresentation;
- (id)recordData;
- (void)updateAd:(id)arg1 event:(long long)arg2;
- (void)updateRerankedAdList:(id)arg1;
- (void)addAdListToDES:(id)arg1 organics:(id)arg2;
- (id)initWithRequestID:(id)arg1;

@end
