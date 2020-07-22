//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/AVAssetResourceLoaderRequest-Protocol.h>

@class AVAssetResourceLoadingContentInformationRequest, AVAssetResourceLoadingDataRequest, AVAssetResourceLoadingRequestInternal, NSString, NSURLRequest, NSURLResponse;

@interface AVAssetResourceLoadingRequest : NSObject <AVAssetResourceLoaderRequest>
{
    AVAssetResourceLoadingRequestInternal *_loadingRequest;
}

+ (SEL)_selectorForInformingDelegateOfCancellationByFig;
- (id)persistentContentKeyFromKeyVendorResponse:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)generateStreamingContentKeyRequestDataAsynchronouslyForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)streamingContentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (struct OpaqueFigCustomURLHandler *)_contentKeySessionCustomURLHandler;
- (_Bool)_contentKeySessionIsAttached;
- (id)createKeyRequestDataUsingCryptorForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 performAsync:(_Bool)arg4 error:(id *)arg5;
- (void)finishLoadingWithResponse:(id)arg1 data:(id)arg2 redirect:(id)arg3;
- (void)finishLoadingWithError:(id)arg1;
- (void)finishLoading;
- (void)forwardRequestToContentKeySession;
- (void)_sendDataIncrementally:(id)arg1 data:(id)arg2;
- (void)_sendDictionaryForURLRequest:(id)arg1 context:(id)arg2;
- (void)_sendFinishLoadingToCustomURLHandler;
- (void)_sendFinishLoadingToCustomURLHandlerWithError:(id)arg1;
- (void)_sendDataToCustomURLHandler:(id)arg1;
- (void)_ensureResponseInfoSentToCustomURLHandler;
- (void)_sendResponseInfoToCustomURLHandler;
- (id)serializableRepresentation;
@property(copy, nonatomic) NSURLRequest *redirect;
- (void)_cacheContentInformation:(id)arg1;
- (void)_appendToCachedData:(id)arg1;
- (id)_getAndClearCachedData;
@property(copy, nonatomic) NSURLResponse *response;
@property(readonly, nonatomic) AVAssetResourceLoadingDataRequest *dataRequest;
- (void)_setDataRequest:(id)arg1;
@property(readonly, nonatomic) AVAssetResourceLoadingContentInformationRequest *contentInformationRequest;
- (void)_setContentInformationRequest:(id)arg1;
- (void)_performCancellationByClient;
- (_Bool)_shouldInformDelegateOfFigCancellation;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
- (_Bool)_tryToMarkAsCancelled;
- (_Bool)finished;
@property(readonly, nonatomic, getter=isFinished) _Bool finished;
- (unsigned long long)_requestID;
@property(readonly, nonatomic) NSURLRequest *request;
- (id)_requestDictionary;
- (struct __CFDictionary *)_requestInfo;
- (struct OpaqueFigCustomURLLoader *)_customURLLoader;
- (struct OpaqueFigCustomURLHandler *)_customURLHandler;
- (id)_resourceLoader;
- (id)_weakReference;
@property(readonly, copy) NSString *description;
- (void)finalize;
- (void)dealloc;
- (id)initWithResourceLoader:(id)arg1 URL:(id)arg2 httpRequestHeaders:(id)arg3 requestOffset:(id)arg4 requestLength:(id)arg5 figCryptor:(struct OpaqueFigCPECryptor *)arg6 figPlaybackItem:(struct OpaqueFigPlaybackItem *)arg7 figAssetImageGenerator:(struct OpaqueFigAssetImageGenerator *)arg8;
- (id)initWithResourceLoader:(id)arg1 requestDictionary:(id)arg2;
- (id)initWithResourceLoader:(id)arg1 requestInfo:(struct __CFDictionary *)arg2 requestID:(unsigned long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

