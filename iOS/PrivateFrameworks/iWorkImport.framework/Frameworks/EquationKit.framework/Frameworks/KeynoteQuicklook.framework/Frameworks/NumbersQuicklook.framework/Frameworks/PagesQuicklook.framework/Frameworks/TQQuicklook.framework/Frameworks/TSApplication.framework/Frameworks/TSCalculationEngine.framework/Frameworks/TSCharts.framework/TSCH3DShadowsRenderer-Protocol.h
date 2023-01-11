//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSCH3DContext, TSCH3DFramebuffer, TSCH3DSceneRenderPipeline, TSCH3DSession;

@protocol TSCH3DShadowsRenderer
- (TSCH3DFramebuffer *)shadowsFBOForContext:(TSCH3DContext *)arg1;
- (float)blurSlackForQuality:(float)arg1;
- (void)invalidate;
- (void)unprotectShadowInSession:(TSCH3DSession *)arg1;
- (void)protectShadowForQuality:(float)arg1 pipeline:(TSCH3DSceneRenderPipeline *)arg2 renderBlock:(void (^)(TSCH3DFramebuffer *))arg3;
@end
