//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HDDatabaseTransaction;

@interface HDMetadataValueStatement
{
    HDDatabaseTransaction *_transaction;
}

+ (id)metadataValueStatementWithTransaction:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) HDDatabaseTransaction *transaction; // @synthesize transaction=_transaction;
- (_Bool)enumerateResultsForObjectID:(long long)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (id)initWithTransaction:(id)arg1;

@end
