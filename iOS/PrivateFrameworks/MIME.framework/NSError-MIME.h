//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (MIME)
+ (id)mf_decodeFailedErrorWithUserInfo:(id)arg1;
+ (id)mf_timeoutError;
+ (id)mf_cancelledError;
- (_Bool)mf_isTimeoutError;
- (_Bool)mf_isCancelledError;
@end

