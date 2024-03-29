//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@class NSString;

@interface NSError (MSVErrorAdditions)
+ (id)_msv_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 underlyingErrors:(id)arg4 userInfo:(id)arg5 debugDescriptionFormat:(id)arg6 arguments:(char *)arg7;
+ (id)msv_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingErrors:(id)arg3 userInfo:(id)arg4 debugDescription:(id)arg5;
+ (id)msv_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingErrors:(id)arg3 debugDescription:(id)arg4;
+ (id)msv_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 userInfo:(id)arg4 debugDescription:(id)arg5;
+ (id)msv_errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 debugDescription:(id)arg4;
+ (id)msv_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 debugDescription:(id)arg4;
+ (id)msv_errorWithDomain:(id)arg1 code:(long long)arg2 debugDescription:(id)arg3;
+ (id)MSVErrorWithMissingDependencies:(id)arg1;
+ (id)MSVErrorWithMissingDependency:(id)arg1;
@property(readonly, nonatomic) NSString *msv_signature;
- (id)msv_analyticSignature;
@property(readonly, nonatomic) NSError *msv_underlyingError;
- (id)msv_description;
- (id)msv_codeDescription;
- (id)msv_firstValueForUserInfoKey:(id)arg1;
- (id)msv_errorByUnwrappingDomain:(id)arg1 code:(long long)arg2;
- (id)msv_errorByUnwrappingDomain:(id)arg1;
- (id)msv_errorByWrappingWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 debugDescription:(id)arg4;
- (id)msv_errorByWrappingWithDomain:(id)arg1 code:(long long)arg2 debugDescription:(id)arg3;
- (id)msv_errorByRemovingUnsafeUserInfo;
@end

