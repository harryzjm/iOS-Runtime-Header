//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKNetworkRequestRecord-Protocol.h>

@class NSData, NSDate, NSDictionary, NSString, NSURLRequest, NSURLResponse, _IKJSInspectorNetworkLoader;

@interface _IKJSInspectorSynchronousNetworkRequestRecord : NSObject <IKNetworkRequestRecord>
{
    NSDate *_redirectEndTime;
    _Bool _isRedirecting;
    NSDate *_startTime;
    NSString *_identifier;
    _IKJSInspectorNetworkLoader *_loader;
    long long _resourceType;
    long long _initiatorType;
    long long _state;
    NSDictionary *_timingData;
    NSURLRequest *_URLRequest;
    NSURLResponse *_URLResponse;
    NSData *_responseBodyData;
}

+ (long long)_protocolResourceTypeForType:(long long)arg1;
+ (long long)_responseSourceTypeForCacheType:(long long)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSData *responseBodyData; // @synthesize responseBodyData=_responseBodyData;
@property(copy, nonatomic, getter=urlResponse) NSURLResponse *URLResponse; // @synthesize URLResponse=_URLResponse;
@property(copy, nonatomic, getter=urlRequest) NSURLRequest *URLRequest; // @synthesize URLRequest=_URLRequest;
@property(copy, nonatomic) NSDictionary *timingData; // @synthesize timingData=_timingData;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) long long initiatorType; // @synthesize initiatorType=_initiatorType;
@property(readonly, nonatomic) long long resourceType; // @synthesize resourceType=_resourceType;
@property(nonatomic) __weak _IKJSInspectorNetworkLoader *loader; // @synthesize loader=_loader;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)didCompleteLoadingFromMemoryWithRequest:(id)arg1 response:(id)arg2 withResponseBodyBlock:(CDUnknownBlockType)arg3;
- (void)_didCompleteLoadingFromCache:(long long)arg1 mimeType:(id)arg2 withResponseBody:(id)arg3 timestamp:(double)arg4;
- (void)didCompleteLoadingFromCache:(long long)arg1 withResponseBodyBlock:(CDUnknownBlockType)arg2;
- (void)didCompleteLoadingFromCache:(long long)arg1 mimeType:(id)arg2 withResponseBody:(id)arg3;
- (void)didCompleteLoadingFromCache:(long long)arg1 withResponseBody:(id)arg2 mimeType:(id)arg3;
- (void)didCompleteLoadingWithResponseBody:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)didReceiveData:(id)arg1;
- (void)didReceiveResponse:(id)arg1 timingData:(id)arg2;
- (void)willSendRequest:(id)arg1 redirectResponse:(id)arg2;
- (void)willSendRequest:(id)arg1;
- (void)_dispatchEvent:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)_processEventType:(long long)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithIdentifier:(id)arg1 loader:(id)arg2 resourceType:(long long)arg3 initiatorType:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
