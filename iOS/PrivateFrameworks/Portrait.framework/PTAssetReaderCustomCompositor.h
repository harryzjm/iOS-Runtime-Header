//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Portrait/AVVideoCompositing-Protocol.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface PTAssetReaderCustomCompositor : NSObject <AVVideoCompositing>
{
}

- (void)startVideoCompositionRequest:(id)arg1;
- (void)renderContextChanged:(id)arg1;
@property(readonly, nonatomic) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property(readonly, nonatomic) NSDictionary *sourcePixelBufferAttributes;
@property(readonly, nonatomic) _Bool supportsHDRSourceFrames;
@property(readonly, nonatomic) _Bool canConformColorOfSourceFrames;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsWideColorSourceFrames;

@end
