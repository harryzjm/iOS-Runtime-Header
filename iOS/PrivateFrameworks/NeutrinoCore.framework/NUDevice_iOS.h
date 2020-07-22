//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NURenderer;

@interface NUDevice_iOS
{
    NURenderer *_renderer;
}

- (void).cxx_destruct;
- (id)_newOpenGLRendererWithOptions:(id)arg1;
- (id)_newMetalRendererWithOptions:(id)arg1;
- (id)_newRendererWithOptions:(id)arg1;
- (id)_newLowPriorityRenderer;
- (id)_newRenderer;
- (long long)_defaultSampleMode;
- (long long)_openGLVirtualScreen;
- (_Bool)hasOpenGLSupport;
- (unsigned long long)family;
- (id)debugDescription;
- (id)initWithName:(id)arg1;

@end

