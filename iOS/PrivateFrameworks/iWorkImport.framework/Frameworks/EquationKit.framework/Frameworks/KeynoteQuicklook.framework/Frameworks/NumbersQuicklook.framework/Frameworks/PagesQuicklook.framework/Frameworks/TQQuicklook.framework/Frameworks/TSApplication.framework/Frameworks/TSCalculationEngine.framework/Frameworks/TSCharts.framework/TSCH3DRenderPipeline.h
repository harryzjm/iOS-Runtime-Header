//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSCH3DContext, TSCH3DRenderProcessor, TSCH3DSession;

@interface TSCH3DRenderPipeline : NSObject
{
    TSCH3DRenderProcessor *_processor;
    TSCH3DSession *_session;
}

+ (id)pipelineWithProcessor:(id)arg1 session:(id)arg2;
+ (id)clipRectForTargetSize:(void *)arg1 intermediateSize:(void *)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) TSCH3DSession *session; // @synthesize session=_session;
@property(retain, nonatomic) TSCH3DRenderProcessor *processor; // @synthesize processor=_processor;
@property(readonly, nonatomic) TSCH3DContext *context;
- (id)initWithProcessor:(id)arg1 session:(id)arg2;

@end

