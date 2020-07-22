//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AASigningSession : NSObject
{
    NSString *_certURL;
    NSString *_sessionURL;
    int _error;
}

+ (id)_badURLError;
+ (id)establishedSessionWithCertURL:(id)arg1 sessionURL:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) int error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)dealloc;
- (id)signatureForData:(id)arg1;
- (void)establishSession;
- (id)initWithCertURL:(id)arg1 sessionURL:(id)arg2;

@end
