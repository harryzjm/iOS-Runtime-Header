//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ServerDocsProtocol/NSURLSessionDataDelegate-Protocol.h>

@class NSString;

@interface UnauthHTTPSSessionDelegate : NSObject <NSURLSessionDataDelegate>
{
    _Bool _pkiIsTrusted;
    unsigned int _pkiEvaluationResult;
}

@property _Bool pkiIsTrusted; // @synthesize pkiIsTrusted=_pkiIsTrusted;
@property unsigned int pkiEvaluationResult; // @synthesize pkiEvaluationResult=_pkiEvaluationResult;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

