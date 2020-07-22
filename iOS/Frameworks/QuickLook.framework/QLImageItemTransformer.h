//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <QuickLook/QLItemTransformerProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface QLImageItemTransformer : NSObject <QLItemTransformerProtocol>
{
}

+ (id)animatableContentTypes;
+ (id)scaledImageFromImageSource:(struct CGImageSource *)arg1 toFitInSize:(double)arg2 scale:(double)arg3;
+ (id)scaledImageFromImageURL:(id)arg1 toFitInSize:(struct CGSize)arg2 scale:(double)arg3;
+ (id)allowedOutputClasses;
- (double)_maximumDimension;
- (id)_contentsFromCGImageSource:(struct CGImageSource *)arg1 context:(id)arg2 scale:(double)arg3;
- (id)transformedContentsFromData:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (id)transformedContentsFromURL:(id)arg1 context:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

