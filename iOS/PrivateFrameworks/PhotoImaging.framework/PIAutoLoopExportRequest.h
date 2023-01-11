//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoCore/NUVideoExportRequest.h>

@class NSString, NSURL, NUColorSpace;

@interface PIAutoLoopExportRequest : NUVideoExportRequest
{
    NSString *_destinationUTI;
    NSURL *_destinationLongExposureURL;
    NSURL *_destinationMaskURL;
}

- (void).cxx_destruct;
@property(readonly) NSURL *destinationMaskURL; // @synthesize destinationMaskURL=_destinationMaskURL;
@property(readonly) NSURL *destinationLongExposureURL; // @synthesize destinationLongExposureURL=_destinationLongExposureURL;
@property(readonly) NSString *destinationUTI; // @synthesize destinationUTI=_destinationUTI;
- (void)submit:(CDUnknownBlockType)arg1;
@property(readonly) NUColorSpace *outputColorSpace;
- (long long)mediaComponentType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newRenderJob;
- (id)initWithComposition:(id)arg1 stabilizedVideoURL:(id)arg2 longExposureDestinationURL:(id)arg3 maskDestinationURL:(id)arg4 destinationUTI:(id)arg5;
- (id)initWithComposition:(id)arg1 destinationURL:(id)arg2;
- (id)initWithRequest:(id)arg1;

@end
