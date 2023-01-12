//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSPredicatedStoreRequest-Protocol.h>

@class NSDictionary, NSEntityDescription, NSPredicate, NSString;

@interface NSBatchUpdateRequest <NSPredicatedStoreRequest>
{
    id _entity;
    NSPredicate *_predicate;
    struct _requestFlags {
        unsigned int includesSubentities:1;
        unsigned int resultType:2;
        unsigned int entityIsName:1;
        unsigned int secureOperation:1;
        unsigned int _RESERVED:27;
    } _flags;
    NSDictionary *_columnsToUpdate;
}

+ (id)batchUpdateRequestWithEntityName:(id)arg1;
+ (id)decodeFromXPCArchive:(id)arg1 withContext:(id)arg2 withPolicy:(id)arg3;
@property(retain) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(nonatomic, getter=_secureOperation, setter=_setSecureOperation:) _Bool shouldPerformSecureOperation;
- (void)_resolveEntityWithContext:(id)arg1;
@property(copy) NSDictionary *propertiesToUpdate; // @synthesize propertiesToUpdate=_columnsToUpdate;
@property unsigned long long resultType;
@property _Bool includesSubentities;
- (unsigned long long)requestType;
@property(readonly) NSEntityDescription *entity; // @synthesize entity=_entity;
@property(readonly, copy) NSString *entityName;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithEntity:(id)arg1;
- (id)initWithEntityName:(id)arg1;
- (id)init;
- (id)encodeForXPC;
- (_Bool)shouldPerformSecureOperation;
- (void)setShouldPerformSecureOperation:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
