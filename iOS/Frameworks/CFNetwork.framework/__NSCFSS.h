//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface __NSCFSS : NSObject
{
    CDUnknownBlockType _capturedStreams;
    CDUnknownFunctionPointerType _trustEval;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)connectionEstablished:(id)arg1 outputStream:(id)arg2;
- (void)completeWithError:(id)arg1;
- (_Bool)shouldTrust:(struct __SecTrust *)arg1;
- (void)dealloc;
- (id)initWithTrustChallenge:(CDUnknownFunctionPointerType)arg1 capture:(CDUnknownBlockType)arg2;

@end
