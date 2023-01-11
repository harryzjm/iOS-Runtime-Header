//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMetadataQuery, NSMutableArray, NSMutableDictionary, NSURL;

@interface GKSavedGameManager : NSObject
{
    _Bool _ubiquityUnavailable;
    NSURL *_ubiquityURL;
    NSMetadataQuery *_query;
    NSMutableDictionary *_documents;
    long long _queryDisableCount;
    NSMutableArray *_fetchHandlers;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableArray *fetchHandlers; // @synthesize fetchHandlers=_fetchHandlers;
@property(nonatomic) long long queryDisableCount; // @synthesize queryDisableCount=_queryDisableCount;
@property(retain, nonatomic) NSMutableDictionary *documents; // @synthesize documents=_documents;
@property(retain, nonatomic) NSMetadataQuery *query; // @synthesize query=_query;
@property(nonatomic) _Bool ubiquityUnavailable; // @synthesize ubiquityUnavailable=_ubiquityUnavailable;
@property(retain, nonatomic) NSURL *ubiquityURL; // @synthesize ubiquityURL=_ubiquityURL;
- (void)ubiquityAvailabilityChanged:(id)arg1;
- (void)setupUbiquity;
- (void)resolveConflictingSavedGames:(id)arg1 withData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)documentConflictStateChanged:(id)arg1;
- (void)callFetchHandlers;
- (void)updateSavedGameDocumentsForQueryWithHandler:(CDUnknownBlockType)arg1;
- (void)queryDidUpdate:(id)arg1;
- (void)queryDidFinishGathering:(id)arg1;
- (void)enableQueryUpdates;
- (void)disableQueryUpdates;
- (void)startSavedGameQuery;
- (id)errorForNoUbiquity;
- (void)documentModified:(id)arg1;
- (void)deleteSavedGamesWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveGameData:(id)arg1 withName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loadDataForSavedGame:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)currentDocumentWithName:(id)arg1;
- (id)documentToSaveWithName:(id)arg1;
- (id)documentForSavedGame:(id)arg1;
- (void)removeDocument:(id)arg1;
- (void)addDocument:(id)arg1;
- (id)fileURLForName:(id)arg1;
- (id)savedGameForDocument:(id)arg1;
- (id)savedGameForDocuments:(id)arg1;
- (id)savedGamesWithName:(id)arg1;
- (void)fetchSavedGamesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

