//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FCCKPrivateDatabase;

@interface FCCKPrivateDatabaseOperation
{
    _Bool _skipPreflight;
    _Bool _handleIdentityLoss;
    FCCKPrivateDatabase *_database;
}

@property(nonatomic) _Bool handleIdentityLoss; // @synthesize handleIdentityLoss=_handleIdentityLoss;
@property(nonatomic) _Bool skipPreflight; // @synthesize skipPreflight=_skipPreflight;
@property(retain, nonatomic) FCCKPrivateDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (void)runChildCKOperation:(id)arg1 destination:(long long)arg2;
- (_Bool)canRetryWithError:(id)arg1 retryAfter:(id *)arg2;
- (unsigned long long)maxRetries;
- (_Bool)validateOperation;
- (id)init;

@end

