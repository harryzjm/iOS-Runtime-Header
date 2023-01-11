//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class NSString;

@interface HMIVideoAnnotator : HMFObject <HMFLogging>
{
    struct opaqueCMSampleBuffer *_sbuf;
    struct CGContext *_context;
    struct CGColorSpace *_colorSpace;
    struct __CTFont *_font;
    struct CGSize _size;
}

+ (id)logCategory;
- (void)drawPolygonWithNormalizedPoints:(id)arg1;
- (void)drawTextHeaderBar:(id)arg1;
- (void)draw:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (const struct __CTFont *)_createFontWithSize:(double)arg1;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
