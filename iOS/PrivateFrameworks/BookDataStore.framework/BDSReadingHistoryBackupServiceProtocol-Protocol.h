//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BookDataStore/NSObject-Protocol.h>

@class NSString;

@protocol BDSReadingHistoryBackupServiceProtocol <NSObject>
- (void)readingHistoryRestoreWithName:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)readingHistoryListBackupWithCompletion:(void (^)(NSArray *, _Bool, NSError *))arg1;
- (void)readingHistoryBackupWithName:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end

