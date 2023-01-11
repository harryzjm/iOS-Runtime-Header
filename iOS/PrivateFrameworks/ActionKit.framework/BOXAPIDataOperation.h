//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActionKit/BOXURLSessionDownloadTaskDelegate-Protocol.h>
#import <ActionKit/NSStreamDelegate-Protocol.h>

@class NSMutableData, NSOutputStream, NSString;

@interface BOXAPIDataOperation <NSStreamDelegate, BOXURLSessionDownloadTaskDelegate>
{
    _Bool _outputStreamHasSpaceAvailable;
    _Bool _allowResume;
    _Bool _isSmallDownloadOperation;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
    CDUnknownBlockType _progressBlock;
    NSString *_modelID;
    NSOutputStream *_outputStream;
    NSMutableData *_receivedDataBuffer;
    unsigned long long _bytesReceived;
    NSString *_destinationPath;
}

@property(nonatomic) _Bool isSmallDownloadOperation; // @synthesize isSmallDownloadOperation=_isSmallDownloadOperation;
@property(nonatomic) _Bool allowResume; // @synthesize allowResume=_allowResume;
@property(retain, nonatomic) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
@property(nonatomic) unsigned long long bytesReceived; // @synthesize bytesReceived=_bytesReceived;
@property(nonatomic) _Bool outputStreamHasSpaceAvailable; // @synthesize outputStreamHasSpaceAvailable=_outputStreamHasSpaceAvailable;
@property(retain, nonatomic) NSMutableData *receivedDataBuffer; // @synthesize receivedDataBuffer=_receivedDataBuffer;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain, nonatomic) NSString *modelID; // @synthesize modelID=_modelID;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void).cxx_destruct;
- (_Bool)canBeReenqueued;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)reenqueDelay;
- (void)reenqueOperationDueTo202Response;
- (void)writeDataToOutputStream;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)downloadTask:(id)arg1 didWriteTotalBytes:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3;
- (void)sessionTask:(id)arg1 processIntermediateData:(id)arg2;
- (void)sessionTask:(id)arg1 processIntermediateResponse:(id)arg2;
- (id)destinationFilePath;
- (void)abortWithError:(id)arg1;
- (void)close;
- (long long)contentLength;
- (void)cancel;
- (void)dealloc;
- (void)finish;
- (void)performProgressCallback;
- (void)performCompletionCallback;
- (void)processResponseData:(id)arg1;
- (_Bool)shouldAllowResume;
- (id)createSessionTaskWithError:(id *)arg1;
- (id)encodeBody:(id)arg1;
- (void)prepareAPIRequest;
- (id)initWithURL:(id)arg1 HTTPMethod:(id)arg2 body:(id)arg3 queryParams:(id)arg4 session:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
