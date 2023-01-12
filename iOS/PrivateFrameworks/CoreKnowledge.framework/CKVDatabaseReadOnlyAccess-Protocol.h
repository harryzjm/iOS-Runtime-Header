//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreKnowledge/NSObject-Protocol.h>

@class CKVDatabaseSelect;

@protocol CKVDatabaseReadOnlyAccess <NSObject>
- (_Bool)enumerateRowResultsOfSelect:(CKVDatabaseSelect *)arg1 batchSize:(unsigned long long)arg2 offset:(unsigned long long)arg3 enumerateAll:(_Bool)arg4 error:(id *)arg5 usingBlock:(_Bool (^)(CKVDatabaseValueRow *, id *, _Bool *))arg6;
- (_Bool)enumerateRowResultsOfSelect:(CKVDatabaseSelect *)arg1 error:(id *)arg2 usingBlock:(_Bool (^)(CKVDatabaseValueRow *, id *, _Bool *))arg3;
- (_Bool)enumerateRecordResultsOfSelect:(CKVDatabaseSelect *)arg1 recordClass:(Class)arg2 batchSize:(unsigned long long)arg3 offset:(unsigned long long)arg4 enumerateAll:(_Bool)arg5 error:(id *)arg6 usingBlock:(_Bool (^)(NSObject<CKVDatabaseRecord> *, id *, _Bool *))arg7;
- (_Bool)enumerateRecordResultsOfSelect:(CKVDatabaseSelect *)arg1 recordClass:(Class)arg2 error:(id *)arg3 usingBlock:(_Bool (^)(NSObject<CKVDatabaseRecord> *, id *, _Bool *))arg4;
@end

