//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface VSOpusDecoder : NSObject
{
    struct OpaqueAudioConverter *_decoder;
    struct AudioStreamBasicDescription _asbd;
}

+ (id)sharedInstance;
- (void)dealloc;
- (id)decodeChunk:(id)arg1 outError:(id *)arg2;
- (void)endChunkDecoding;
- (id)beginChunkDecoderForStreamDescription:(struct AudioStreamBasicDescription)arg1;
- (id)decodeChunks:(id)arg1 streamDescription:(struct AudioStreamBasicDescription)arg2 outError:(id *)arg3;
- (struct OpaqueAudioConverter *)_opusDecoder:(struct AudioStreamBasicDescription)arg1;

@end

