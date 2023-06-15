//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol HAP2EncodedRequest;

__attribute__((visibility("hidden")))
@interface HAP2AccessoryServerControllerTimedWriteOperation
{
    id <HAP2EncodedRequest> _executeRequest;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <HAP2EncodedRequest> executeRequest; // @synthesize executeRequest=_executeRequest;
- (void)_parseExecuteResponseData:(id)arg1;
- (void)_sendExecuteRequest;
- (void)_parsePrepareResponseData:(id)arg1;
- (void)_sendPrepareRequest;
- (void)_cleanUp;
- (void)_parseResponseData:(id)arg1;
- (void)_sendRequest;
- (id)initWithName:(id)arg1 controller:(id)arg2 encoding:(id)arg3 transport:(id)arg4 prepareRequest:(id)arg5 executeRequest:(id)arg6 endpoint:(id)arg7 mimeType:(id)arg8 timeout:(double)arg9 options:(unsigned long long)arg10;

@end

