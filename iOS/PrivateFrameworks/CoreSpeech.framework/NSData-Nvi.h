//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (Nvi)
- (id)strRepForFloatData;
- (id)rawMicChannelsDataWithNumSamplesPerChannel:(unsigned long long)arg1;
- (void)splitAudioDataToReachSampleCount:(unsigned long long)arg1 currSampleCount:(unsigned long long)arg2 numBytesPerSample:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_cs_xpcObject;
- (id)_cs_initWithXPCObject:(id)arg1;
@end
