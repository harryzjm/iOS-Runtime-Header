//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/NSCopying-Protocol.h>

@class NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorMultiwayAudioStream <NSCopying>
{
    NSMutableSet *_supportedAudioPayloads;
}

@property(retain, nonatomic) NSSet *supportedAudioPayloads; // @synthesize supportedAudioPayloads=_supportedAudioPayloads;
- (_Bool)isEqual:(id)arg1;
- (void)addPayload:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end
