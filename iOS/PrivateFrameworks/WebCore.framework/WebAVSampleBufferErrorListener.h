//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebAVSampleBufferErrorListener : NSObject
{
    struct WeakPtr<WebCore::SourceBufferPrivateAVFObjC, WTF::EmptyCounter> _parent;
    struct Vector<WTF::RetainPtr<AVSampleBufferDisplayLayer>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> _layers;
    struct Vector<WTF::RetainPtr<AVSampleBufferAudioRenderer>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> _renderers;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)audioRendererWasAutomaticallyFlushed:(id)arg1;
- (void)layerFailedToDecode:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingRenderer:(id)arg1;
- (void)beginObservingRenderer:(id)arg1;
- (void)stopObservingLayer:(id)arg1;
- (void)beginObservingLayer:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithParent:(void *)arg1;

@end
