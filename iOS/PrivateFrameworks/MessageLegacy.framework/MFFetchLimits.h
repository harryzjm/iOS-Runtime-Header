//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MFFetchLimits : NSObject
{
    unsigned long long _fetchMinBytes;
    unsigned long long _fetchMaxBytes;
    unsigned long long _minBytesLeft;
}

@property(nonatomic) unsigned long long minBytesLeft; // @synthesize minBytesLeft=_minBytesLeft;
@property(nonatomic) unsigned long long fetchMaxBytes; // @synthesize fetchMaxBytes=_fetchMaxBytes;
@property(nonatomic) unsigned long long fetchMinBytes; // @synthesize fetchMinBytes=_fetchMinBytes;
- (id)description;
- (id)init;

@end
