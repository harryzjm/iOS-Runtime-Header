//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (TSPersistence)
+ (id)tsp_ensureSaveErrorWithError:(id)arg1;
+ (id)tsp_ensureReadErrorWithError:(id)arg1;
+ (id)tsp_writePOSIXErrorWithNumber:(int)arg1 userInfo:(id)arg2;
+ (id)tsp_readCorruptZipOfPackageErrorWithUserInfo:(id)arg1;
+ (id)tsp_saveDocumentErrorWithUserInfo:(id)arg1;
+ (id)tsp_unknownWriteErrorWithUserInfo:(id)arg1;
+ (id)tsp_unsupportedVersionErrorWithUserInfo:(id)arg1;
+ (id)tsp_readPOSIXErrorWithNumber:(int)arg1 userInfo:(id)arg2;
+ (id)tsp_readCorruptedDocumentErrorWithUserInfo:(id)arg1;
+ (id)tsp_unknownReadErrorWithUserInfo:(id)arg1;
+ (id)tsp_recoverableErrorWithError:(id)arg1;
+ (id)tsp_userInfoWithUserInfo:(id)arg1 additionalUserInfo:(id)arg2;
+ (id)tsp_recoverableErrorWithCode:(long long)arg1;
+ (id)tsp_errorWithCode:(long long)arg1 userInfo:(id)arg2 isRecoverable:(_Bool)arg3;
+ (id)tsp_errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)tsp_errorWithCode:(long long)arg1;
@property(readonly, nonatomic) _Bool tsp_isCorruptZipOfPackageError;
@property(readonly, nonatomic) _Bool tsp_isUnsupportedVersionError;
@property(readonly, nonatomic) _Bool tsp_isDocumentTooNewError;
@property(readonly, nonatomic) _Bool tsp_isRecoverable;
@property(readonly, nonatomic) _Bool tsp_isWriteError;
@property(readonly, nonatomic) _Bool tsp_isCorruptedError;
@property(readonly, nonatomic) _Bool tsp_isReadError;
@property(readonly, nonatomic) _Bool tsp_isTSPError;
@end

