//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AUAudioUnitBus.h"

@class AUAudioUnitV2Bridge;

__attribute__((visibility("hidden")))
@interface AUV2BridgeBus : AUAudioUnitBus
{
    AUAudioUnitV2Bridge *_owner;
    struct OpaqueAudioComponentInstance *_audioUnit;
    unsigned int _scope;
    unsigned int _element;
}

- (void).cxx_destruct;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)setFormat:(id)arg1 error:(id *)arg2;
- (id)format;
- (id)initWithOwner:(id)arg1 au:(struct OpaqueAudioComponentInstance *)arg2 scope:(unsigned int)arg3 element:(unsigned int)arg4;

@end

