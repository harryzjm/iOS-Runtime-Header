//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKDatabase;

@interface CKDatabaseOperation
{
    CKDatabase *_database;
}

- (void).cxx_destruct;
- (id)flowControlKey;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
@property(retain, nonatomic) CKDatabase *database; // @synthesize database=_database;

@end

