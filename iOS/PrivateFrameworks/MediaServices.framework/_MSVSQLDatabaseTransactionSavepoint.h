//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSVSQLDatabaseTransaction, NSString;

__attribute__((visibility("hidden")))
@interface _MSVSQLDatabaseTransactionSavepoint : NSObject
{
    NSString *_name;
    MSVSQLDatabaseTransaction *_transaction;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)commit;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

