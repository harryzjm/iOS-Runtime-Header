//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioPCMBuffer, AVAudioTime;

@interface AXSDTimedAudioBuffer : NSObject
{
    AVAudioPCMBuffer *_buffer;
    AVAudioTime *_time;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVAudioTime *time; // @synthesize time=_time;
@property(retain, nonatomic) AVAudioPCMBuffer *buffer; // @synthesize buffer=_buffer;
- (id)initWithBuffer:(id)arg1 atTime:(id)arg2;

@end
