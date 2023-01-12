//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface NWL2InterfaceQueueStats : NSObject
{
    unsigned char _slot;
    int _interfaceType;
    NSString *_interfaceName;
    unsigned long long _averageQueueDelay;
    unsigned long long _minimumQueueDelay;
    unsigned long long _maximumQueueDelay;
}

+ (id)interfaceQueueStatsSlotToString:(unsigned char)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long maximumQueueDelay; // @synthesize maximumQueueDelay=_maximumQueueDelay;
@property(nonatomic) unsigned long long minimumQueueDelay; // @synthesize minimumQueueDelay=_minimumQueueDelay;
@property(nonatomic) unsigned long long averageQueueDelay; // @synthesize averageQueueDelay=_averageQueueDelay;
@property(nonatomic) unsigned char slot; // @synthesize slot=_slot;
@property(retain, nonatomic) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
@property(nonatomic) int interfaceType; // @synthesize interfaceType=_interfaceType;
- (id)description;

@end
