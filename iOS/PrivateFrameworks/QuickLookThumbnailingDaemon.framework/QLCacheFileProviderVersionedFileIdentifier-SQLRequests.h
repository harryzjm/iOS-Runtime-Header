//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuickLookThumbnailing/QLCacheFileProviderVersionedFileIdentifier.h>

@interface QLCacheFileProviderVersionedFileIdentifier (SQLRequests)
- (id)initWithSteppedStatement:(struct sqlite3_stmt *)arg1 database:(id)arg2;
- (struct sqlite3_stmt *)statementToUpdateRecordWithCacheIdentifier:(unsigned long long)arg1 inDatabase:(id)arg2;
- (struct sqlite3_stmt *)statementToInsertIntoDatabase:(id)arg1;
@end
