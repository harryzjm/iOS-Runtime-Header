//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (TSUIO)
+ (id)tsu_fileWritePOSIXErrorWithNumber:(int)arg1 userInfo:(id)arg2;
+ (id)tsu_fileWriteUnknownErrorWithUserInfo:(id)arg1;
+ (id)tsu_fileReadPOSIXErrorWithNumber:(int)arg1 userInfo:(id)arg2;
+ (id)tsu_fileReadCorruptedFileErrorWithUserInfo:(id)arg1;
+ (id)tsu_fileReadUnknownErrorWithUserInfo:(id)arg1;
+ (id)tsu_userInfoWithErrorType:(long long)arg1 userInfo:(id)arg2;
@property(readonly, nonatomic) _Bool tsu_isWriteError;
@property(readonly, nonatomic) _Bool tsu_isCorruptedError;
@property(readonly, nonatomic) _Bool tsu_isReadError;
@end

