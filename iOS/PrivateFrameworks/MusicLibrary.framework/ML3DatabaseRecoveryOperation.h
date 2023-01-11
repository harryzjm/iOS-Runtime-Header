//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSError, NSString;

@interface ML3DatabaseRecoveryOperation : NSOperation
{
    NSString *_path;
    NSError *_error;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (void)_recreateDatabaseWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateLastCorruptionRestoreAttemptDate;
- (id)_lastCorruptionRestoreAttemptDate;
- (id)_createSQLiteErrorWithCode:(int)arg1 description:(id)arg2;
- (void)main;
- (id)initWithDatabaseFilePath:(id)arg1;

@end
