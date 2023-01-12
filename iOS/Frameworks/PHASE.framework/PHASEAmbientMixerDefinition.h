//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAudioChannelLayout;

@interface PHASEAmbientMixerDefinition
{
    AVAudioChannelLayout *_inputChannelLayout;
    CDStruct_0e8a9a91 _orientation;
}

+ (id)new;
- (void).cxx_destruct;
@property(readonly, nonatomic) AVAudioChannelLayout *inputChannelLayout; // @synthesize inputChannelLayout=_inputChannelLayout;
@property(readonly, nonatomic) struct orientation; // @synthesize orientation=_orientation;
- (id)initWithChannelLayout:(id)arg1 orientation:(struct)arg2;
- (id)initWithChannelLayout:(id)arg1 orientation:(struct)arg2 identifier:(id)arg3;
- (id)initWithChannelLayout:(id)arg1 orientation:(struct)arg2 uid:(id)arg3;
- (id)init;

@end
