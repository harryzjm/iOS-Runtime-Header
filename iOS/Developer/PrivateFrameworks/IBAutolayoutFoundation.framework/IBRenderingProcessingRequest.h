//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IOSurface;

@interface IBRenderingProcessingRequest
{
    IOSurface *_ioSurface;
    _Bool _shouldRequestAsynchronously;
    unsigned int _ioSurfaceID;
}

+ (struct CGColorSpace *)colorSpace;
- (void).cxx_destruct;
@property(readonly, nonatomic) IOSurface *ioSurface; // @synthesize ioSurface=_ioSurface;
@property(readonly, nonatomic) unsigned int ioSurfaceID; // @synthesize ioSurfaceID=_ioSurfaceID;
@property(readonly, nonatomic) _Bool shouldRequestAsynchronously; // @synthesize shouldRequestAsynchronously=_shouldRequestAsynchronously;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (_Bool)requiresSynchronousResultProcessing;
- (id)initWithResultPhase:(long long)arg1 shouldRequestAsynchronously:(_Bool)arg2 usingIOSurface:(id)arg3 postProcessingBlock:(CDUnknownBlockType)arg4;
- (id)initWithResultPhase:(long long)arg1 postProcessingBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

