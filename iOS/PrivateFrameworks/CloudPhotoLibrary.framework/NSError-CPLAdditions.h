//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (CPLAdditions)
- (int)cplReturnCode;
- (id)cplReinflatedErrorForXPC;
- (id)_cplReinflatedUserInfoForXPCDidChange:(_Bool *)arg1;
- (id)cplSafeErrorForXPC;
- (id)_cplSafeUserInfoForXPCDidChange:(_Bool *)arg1;
- (id)cplShortDomainDescription;
- (id)cplUnderlyingError;
- (id)cplUnderlyingPOSIXError;
- (_Bool)isCPLOperationDeferredError;
- (_Bool)isCPLOperationCancelledError;
- (_Bool)isCPLError;
- (_Bool)isCPLErrorWithCode:(long long)arg1;
@end

