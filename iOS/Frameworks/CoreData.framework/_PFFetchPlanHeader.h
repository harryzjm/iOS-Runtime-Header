//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFetchRequest, NSManagedObjectContext, NSPersistentStore, NSSQLEntity, NSSQLModel, NSSQLRowCache;

__attribute__((visibility("hidden")))
@interface _PFFetchPlanHeader : NSObject
{
    NSFetchRequest *fetch_request;
    unsigned int requested_batch_size;
    NSPersistentStore *sql_core;
    NSSQLModel *sql_model;
    NSSQLEntity *statement_entity;
    NSManagedObjectContext *current_context;
    NSSQLRowCache *row_cache;
    CDUnknownFunctionPointerType entity_for_ek_funptr;
    struct {
        unsigned int principal_entity_has_subentities:1;
        unsigned int fetch_only_primary_keys:1;
        unsigned int fetch_results_style:3;
        unsigned int use_clean_memory:1;
        unsigned int _reserved:26;
    } flags;
}

@end

