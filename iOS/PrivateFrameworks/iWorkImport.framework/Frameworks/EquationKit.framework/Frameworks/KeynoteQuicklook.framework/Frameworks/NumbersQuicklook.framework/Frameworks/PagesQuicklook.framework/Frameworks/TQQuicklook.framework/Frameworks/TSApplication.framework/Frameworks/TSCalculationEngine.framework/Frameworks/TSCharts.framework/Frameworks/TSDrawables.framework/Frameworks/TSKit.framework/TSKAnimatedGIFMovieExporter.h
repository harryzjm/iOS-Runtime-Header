//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSPData;

@interface TSKAnimatedGIFMovieExporter : NSObject
{
    TSPData *_data;
}

+ (_Bool)canInitWithDataType:(id)arg1;
- (void).cxx_destruct;
- (void)p_finishWithSuccess:(_Bool)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (struct opaqueCMSampleBuffer *)p_createCMSampleBufferFromImageInCGImageSource:(struct CGImageSource *)arg1 atIndex:(unsigned long long)arg2 withPresentationTime:(CDStruct_1b6d18a9)arg3 nextPresentationTime:(out CDStruct_1b6d18a9 *)arg4;
- (void)exportToMovieFileURL:(id)arg1 fileType:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithData:(id)arg1;

@end

