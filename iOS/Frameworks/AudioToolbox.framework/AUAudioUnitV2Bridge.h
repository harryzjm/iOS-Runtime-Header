//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AUParameterTree, AUV2BridgeBusArray, NSObject;
@protocol OS_dispatch_queue;

@interface AUAudioUnitV2Bridge
{
    NSObject<OS_dispatch_queue> *_eventListenerQueue;
    struct AUListenerBase *_eventListener;
    struct AUListenerBase *_parameterListener;
    _Bool _removingObserverWithContext;
    struct OpaqueAudioComponentInstance *_audioUnit;
    _Bool _audioUnitIsOwned;
    AUV2BridgeBusArray *_inputBusses;
    AUV2BridgeBusArray *_outputBusses;
    AUParameterTree *_cachedParameterTree;
    struct unique_ptr<AUAudioUnitV2Bridge_Renderer, std::__1::default_delete<AUAudioUnitV2Bridge_Renderer>> _renderer;
    CDUnknownBlockType _MIDIOutputEventBlock;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (id)channelCapabilities;
- (id)parameterTree;
- (void)_createEventListenerQueue;
- (void)reset;
- (void)deallocateRenderResources;
- (_Bool)allocateRenderResourcesAndReturnError:(id *)arg1;
- (void)setMIDIOutputEventBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)MIDIOutputEventBlock;
- (CDUnknownBlockType)internalRenderBlock;
- (id)outputBusses;
- (id)inputBusses;
- (void)dealloc;
- (void)invalidateAudioUnit;
- (id)initWithAudioUnit:(struct OpaqueAudioComponentInstance *)arg1 description:(struct AudioComponentDescription)arg2;
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (void)init2;
- (void)_invalidateParameterTree;
- (void)_addOrRemoveParameterListeners:(_Bool)arg1;
- (int)enableBus:(unsigned int)arg1 scope:(unsigned int)arg2 enable:(_Bool)arg3;
- (void)_rebuildBusses:(unsigned int)arg1;
- (_Bool)_setElementCount:(unsigned int)arg1 count:(unsigned int)arg2 error:(id *)arg3;
- (_Bool)_elementCountWritable:(unsigned int)arg1;
- (unsigned int)_elementCount:(unsigned int)arg1;

@end

