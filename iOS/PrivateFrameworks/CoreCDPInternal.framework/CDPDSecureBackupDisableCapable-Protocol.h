//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreCDPInternal/NSObject-Protocol.h>

@protocol CDPDSecureBackupDisableCapable <NSObject>
- (void)disableRecoveryKeyWithCompletion:(void (^)(NSError *))arg1;
- (void)disableSecureBackupWithCompletion:(void (^)(NSError *))arg1;
- (void)deleteAllBackupRecordsWithCompletion:(void (^)(_Bool, NSError *))arg1;
@end

