//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioFormat, PHASEEngine, PHASEMixer, PHASENumberMetaParameter;

@interface PHASEPushStreamNode : NSObject
{
    PHASEEngine *_engine;
    struct UniqueObjectId _actionTreeUniqueId;
    unsigned long long _nodeUID;
    _Bool _normalize;
    PHASENumberMetaParameter *_gainMetaParameter;
    PHASENumberMetaParameter *_rateMetaParameter;
    PHASEMixer *_mixer;
    AVAudioFormat *_format;
}

- (void).cxx_destruct;
@property(readonly) _Bool normalize; // @synthesize normalize=_normalize;
@property(nonatomic) __weak PHASEEngine *engine; // @synthesize engine=_engine;
@property(readonly, nonatomic) AVAudioFormat *format; // @synthesize format=_format;
@property(readonly, nonatomic) PHASEMixer *mixer; // @synthesize mixer=_mixer;
@property(readonly, nonatomic) PHASENumberMetaParameter *rateMetaParameter; // @synthesize rateMetaParameter=_rateMetaParameter;
@property(readonly, nonatomic) PHASENumberMetaParameter *gainMetaParameter; // @synthesize gainMetaParameter=_gainMetaParameter;
- (void)scheduleBuffer:(id)arg1 atTime:(id)arg2 options:(unsigned long long)arg3 completionCallbackType:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)scheduleBuffer:(id)arg1 atTime:(id)arg2 options:(unsigned long long)arg3;
- (void)scheduleBuffer:(id)arg1 completionCallbackType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)scheduleBuffer:(id)arg1;
- (id)initWithEngine:(id)arg1 actionTreeUniqueId:(struct UniqueObjectId)arg2 nodeStringHashId:(unsigned long long)arg3 mixer:(id)arg4 format:(id)arg5 normalize:(_Bool)arg6;

@end
