//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface MRTransactionPacketizer : NSObject
{
    NSMutableArray *_outgoingPackets;
    NSMutableDictionary *_incomingPackets;
}

- (void).cxx_destruct;
- (void)unpacketize:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)packetize:(id)arg1 packageSize:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isEmpty;

@end

