//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError;

@interface VUIJSError
{
    VUIJSError *_jsUnderlyingError;
    NSError *_wrappedError;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSError *wrappedError; // @synthesize wrappedError=_wrappedError;
- (id)underlyingError;
- (id)userInfo;
- (id)recoverySuggestion;
- (id)failureReason;
- (id)description;
- (id)domain;
- (id)code;
- (id)initWithError:(id)arg1 appContext:(id)arg2;

@end
