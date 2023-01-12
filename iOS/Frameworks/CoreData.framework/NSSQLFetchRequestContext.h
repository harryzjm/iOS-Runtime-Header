//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSFaultHandler, NSFetchRequest, NSMutableArray, NSMutableSet, NSSQLEntity, NSSQLModel, NSSQLiteStatement, NSString, _PFFetchPlanHeader;

__attribute__((visibility("hidden")))
@interface NSSQLFetchRequestContext
{
    NSString *_externalDataReferencesDirectory;
    NSString *_externalDataLinksDirectory;
    NSString *_fileBackedFuturesDirectory;
    NSSQLModel *_sqlModel;
    NSSQLEntity *_sqlEntity;
    NSFaultHandler *_faultHandler;
    _PFFetchPlanHeader *_fetchPlan;
    NSSQLiteStatement *_statement;
    NSMutableSet *_objectIDsToRegister;
    NSMutableSet *_objectsToAwaken;
    NSMutableArray *_resultFaultsThatWereFired;
    NSSQLFetchRequestContext *_parentContext;
    int _fileProtectionLevel;
    _Bool _isFaultRequest;
    NSFetchRequest *_originalRequest;
    _Bool _shouldUseBatches;
    _Bool _storeIsUbiquitized;
    _Bool _isUsingCachedStatement;
    NSMutableArray *_concurrentFetchingPipelineRows;
    NSDictionary *_prefetchingSubstitutionVariables;
}

@property(readonly, nonatomic) _Bool shouldUseBatches; // @synthesize shouldUseBatches=_shouldUseBatches;
@property(nonatomic) _Bool isFaultRequest; // @synthesize isFaultRequest=_isFaultRequest;
- (void)executeEpilogue;
- (_Bool)executeRequestCore:(id *)arg1;
- (void)executePrologue;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicate:(id)arg1;
- (id)_createStatement;
@property(retain, nonatomic) NSSQLiteStatement *fetchStatement;
- (id)manyToManyPrefetchRequestsForRelationshipNamed:(id)arg1 onEntity:(id)arg2;
- (id)manyToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2;
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2;
@property(readonly, nonatomic) NSFetchRequest *request;
- (id)createChildContextForNestedFetchRequest:(id)arg1;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;

@end
