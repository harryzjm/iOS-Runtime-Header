//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (TSPersistence)
+ (id)tsp_recoverableErrorWithError:(id)arg1;
+ (id)tsp_recoverableErrorWithCode:(long long)arg1;
+ (id)tsp_errorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)tsp_errorWithCode:(long long)arg1;
- (_Bool)tsp_isRecoverable;
@end
