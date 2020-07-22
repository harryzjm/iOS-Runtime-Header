//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoCore/NUJSRenderNodeExport-Protocol.h>

@class NUJSImageGeometry, NUJSImageProperties, NUJSVideoProperties, NURenderNode;

@interface NUJSRenderNode <NUJSRenderNodeExport>
{
}

@property(readonly) NUJSVideoProperties *videoProperties;
@property(readonly) NUJSImageProperties *imageProperties;
@property(readonly) NUJSImageGeometry *geometry;
@property(readonly) NURenderNode *node;
- (id)initWithNode:(id)arg1 context:(id)arg2;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;

@end

