//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class _ICLLAutoPlaySource, _ICLLAvailability, _ICLLNoGenerationSource, _ICLLRadioSource;

__attribute__((visibility("hidden")))
@interface _ICLLPlaybackControlSettings : PBCodable
{
    _ICLLAutoPlaySource *_autoPlay;
    _ICLLAvailability *_availability;
    _ICLLNoGenerationSource *_noGeneration;
    _ICLLRadioSource *_radio;
    int _repeatMode;
    int _shuffleMode;
    int _trackGenerationSource;
    struct {
        unsigned int repeatMode:1;
        unsigned int shuffleMode:1;
        unsigned int trackGenerationSource:1;
    } _has;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;

@end

