//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PHMediaFormatConversionRequest;

@interface PHMediaFormatLivePhotoConversionRequest
{
    PHMediaFormatConversionRequest *_imageConversionRequest;
    PHMediaFormatConversionRequest *_videoConversionRequest;
}

+ (id)requestForImageConversionRequest:(id)arg1 videoConversionRequest:(id)arg2 error:(id *)arg3;
+ (id)requestForSource:(id)arg1 destinationCapabilities:(id)arg2 error:(id *)arg3;
@property(retain) PHMediaFormatConversionRequest *videoConversionRequest; // @synthesize videoConversionRequest=_videoConversionRequest;
@property(retain) PHMediaFormatConversionRequest *imageConversionRequest; // @synthesize imageConversionRequest=_imageConversionRequest;
- (void).cxx_destruct;
- (void)didPreflightSubrequest:(id)arg1;
- (void)enumerateSubrequests:(CDUnknownBlockType)arg1;
- (void)enqueueSubrequestsOnConversionManager:(id)arg1;

@end
