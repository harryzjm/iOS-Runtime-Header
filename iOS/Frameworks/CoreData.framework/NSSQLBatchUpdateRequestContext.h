//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSBatchUpdateRequest, NSFetchRequest, NSSQLiteStatement;

__attribute__((visibility("hidden")))
@interface NSSQLBatchUpdateRequestContext
{
    NSSQLiteStatement *_updateStatement;
    NSFetchRequest *_fetchRequest;
}

- (_Bool)executeRequestCore:(id *)arg1;
- (void)executePrologue;
- (_Bool)isWritingRequest;
- (id)createFetchRequestContextForObjectsToUpdate;
@property(readonly, nonatomic) NSBatchUpdateRequest *request;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;

@end

