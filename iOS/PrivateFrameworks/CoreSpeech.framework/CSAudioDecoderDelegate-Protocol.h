//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class CSAudioDecoder, NSData;

@protocol CSAudioDecoderDelegate <NSObject>
- (void)audioDecoderDidDecodePackets:(CSAudioDecoder *)arg1 buffer:(NSData *)arg2 timestamp:(unsigned long long)arg3;
@end
