//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFoundation/AVAudioSessionPortDescription.h>

@class NSArray, NSString;

@interface AXTestingOutputPort : AVAudioSessionPortDescription
{
    NSString *portType;
    NSString *portName;
    NSString *UID;
    NSArray *_ttsChannels;
}

@property(retain) NSArray *ttsChannels; // @synthesize ttsChannels=_ttsChannels;
@property(retain) NSString *UID; // @synthesize UID;
@property(retain) NSString *portName; // @synthesize portName;
@property(retain) NSString *portType; // @synthesize portType;
- (void).cxx_destruct;
- (id)channels;

@end
