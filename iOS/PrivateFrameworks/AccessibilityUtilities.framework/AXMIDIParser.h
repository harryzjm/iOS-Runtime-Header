//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AXMIDIParser : NSObject
{
}

- (unsigned short)_channelForStatusByte:(unsigned char)arg1;
- (unsigned long long)_expectedPacketLengthForEventType:(long long)arg1;
- (long long)_eventTypeForStatusByte:(unsigned char)arg1;
- (id)parse:(const struct MIDIPacketList *)arg1 error:(id *)arg2;

@end

