//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@class NSString;

@interface NSError (ClipServicesExtras)
+ (id)cps_errorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)cps_errorWithCode:(long long)arg1;
@property(readonly, nonatomic) _Bool cps_isUserCanceledError;
@property(readonly, copy, nonatomic) NSString *cps_privacyPreservingDescription;
@end
