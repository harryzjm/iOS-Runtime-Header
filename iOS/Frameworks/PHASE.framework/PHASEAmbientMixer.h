//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAudioChannelLayout, PHASEListener;

@interface PHASEAmbientMixer
{
    PHASEListener *_listener;
    AVAudioChannelLayout *_inputChannelLayout;
    CDStruct_0e8a9a91 _orientation;
}

+ (id)new;
- (void).cxx_destruct;
@property(readonly, nonatomic) AVAudioChannelLayout *inputChannelLayout; // @synthesize inputChannelLayout=_inputChannelLayout;
@property(readonly, nonatomic) struct orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) PHASEListener *listener; // @synthesize listener=_listener;
- (id)initWithIdentifier:(id)arg1 listener:(id)arg2;
- (id)init;

@end
