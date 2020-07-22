//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class MRTransactionPacketizer, NSMutableArray;
@protocol MRTransactionSourceDelegate;

@interface MRTransactionSource : NSObject
{
    unsigned long long _name;
    MRTransactionPacketizer *_packetizer;
    NSMutableArray *_packets;
    void *_playerPath;
    id <MRTransactionSourceDelegate> _delegate;
}

@property(readonly, nonatomic) void *playerPath; // @synthesize playerPath=_playerPath;
@property(readonly, nonatomic) unsigned long long name; // @synthesize name=_name;
- (void)_processMessage:(id)arg1;
- (void)_begin;
- (void)dealloc;
- (id)initWithName:(unsigned long long)arg1 playerPath:(void *)arg2 packets:(id)arg3 delegate:(id)arg4;

@end

