//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CUIRenditionMetrics, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _CUILayerStackRendition
{
    CUIRenditionMetrics *_renditionMetrics;
    NSMutableArray *_layers;
}

- (id)metrics;
- (id)layerReferences;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (void)dealloc;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2;

@end
