//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface IBRenderingProcessingRequest
{
    _Bool _shouldRequestAsynchronously;
}

+ (struct CGColorSpace *)colorSpace;
@property(readonly, nonatomic) _Bool shouldRequestAsynchronously; // @synthesize shouldRequestAsynchronously=_shouldRequestAsynchronously;
- (_Bool)requiresSynchronousResultProcessing;
- (id)initWithResultPhase:(long long)arg1 shouldRequestAsynchronously:(_Bool)arg2 postProcessingBlock:(CDUnknownBlockType)arg3;
- (id)initWithResultPhase:(long long)arg1 postProcessingBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

