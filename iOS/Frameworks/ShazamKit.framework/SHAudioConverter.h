//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioConverter;

__attribute__((visibility("hidden")))
@interface SHAudioConverter : NSObject
{
    AVAudioConverter *_converter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVAudioConverter *converter; // @synthesize converter=_converter;
- (id)audioConverterWithInputFormat:(id)arg1 outputFormat:(id)arg2;
- (id)supportedPCMBufferFromBuffer:(id)arg1 error:(id *)arg2;

@end

