//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSException.h>

@interface NSException (TSUAdditions)
+ (_Bool)tsu_catchExceptionsInBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
+ (void)tsu_raiseWithError:(id)arg1;
+ (void)sfu_errnoRaise:(id)arg1 format:(id)arg2;
- (id)tsu_error;
- (int)sfu_localErrno;
@end
