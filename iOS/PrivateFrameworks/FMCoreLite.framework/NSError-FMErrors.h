//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (FMErrors)
+ (id)fm_genericError;
+ (id)fm_cancelledError;
+ (id)fm_timeoutError;
+ (id)fm_errorWithCode:(unsigned long long)arg1;
- (_Bool)fm_isCancelledError;
- (_Bool)fm_isTimeoutError;
@end

