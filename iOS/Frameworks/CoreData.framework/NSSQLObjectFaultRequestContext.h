//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSFetchRequest, NSManagedObjectID;

__attribute__((visibility("hidden")))
@interface NSSQLObjectFaultRequestContext
{
    NSManagedObjectID *_objectID;
    NSFetchRequest *_fetchRequest;
    _Bool _forConflictAnalysis;
}

- (_Bool)executeRequestCore:(id *)arg1;
- (void)dealloc;
- (id)initWithObjectID:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;

@end

