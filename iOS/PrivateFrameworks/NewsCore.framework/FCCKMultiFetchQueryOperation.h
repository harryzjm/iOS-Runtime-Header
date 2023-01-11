//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FCCKContentDatabase, FCEdgeCacheHint, NSArray, NSDictionary, NSMutableArray, NSMutableSet;

@interface FCCKMultiFetchQueryOperation
{
    FCCKContentDatabase *_database;
    NSArray *_recordIDs;
    NSArray *_recordSpecs;
    NSDictionary *_knownRecordIDsToEtags;
    FCEdgeCacheHint *_edgeCacheHint;
    NSArray *_networkEvents;
    CDUnknownBlockType _queryCompletionHandler;
    NSDictionary *_recordSpecsByType;
    NSMutableSet *_missingRecordIDs;
    NSMutableArray *_fetchedRecords;
}

@property(retain, nonatomic) NSMutableArray *fetchedRecords; // @synthesize fetchedRecords=_fetchedRecords;
@property(retain, nonatomic) NSMutableSet *missingRecordIDs; // @synthesize missingRecordIDs=_missingRecordIDs;
@property(retain, nonatomic) NSDictionary *recordSpecsByType; // @synthesize recordSpecsByType=_recordSpecsByType;
@property(copy, nonatomic) CDUnknownBlockType queryCompletionHandler; // @synthesize queryCompletionHandler=_queryCompletionHandler;
@property(copy, nonatomic) NSArray *networkEvents; // @synthesize networkEvents=_networkEvents;
@property(copy, nonatomic) FCEdgeCacheHint *edgeCacheHint; // @synthesize edgeCacheHint=_edgeCacheHint;
@property(retain, nonatomic) NSDictionary *knownRecordIDsToEtags; // @synthesize knownRecordIDsToEtags=_knownRecordIDsToEtags;
@property(retain, nonatomic) NSArray *recordSpecs; // @synthesize recordSpecs=_recordSpecs;
@property(retain, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
@property(retain, nonatomic) FCCKContentDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (id)_constructQuery;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (_Bool)validateOperation;

@end

