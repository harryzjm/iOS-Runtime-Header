//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface PBBridgeIDSMessageInstance : NSObject
{
    unsigned short _typeID;
    NSNumber *_sentAbsoluteTime;
    long long _retryCount;
    double _retryInterval;
    CDUnknownBlockType _retryAction;
}

+ (id)newMessageInstanceOfType:(unsigned short)arg1 retryCount:(long long)arg2 retryInterval:(double)arg3 withAction:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) CDUnknownBlockType retryAction; // @synthesize retryAction=_retryAction;
@property(nonatomic) double retryInterval; // @synthesize retryInterval=_retryInterval;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) unsigned short typeID; // @synthesize typeID=_typeID;
@property(retain, nonatomic) NSNumber *sentAbsoluteTime; // @synthesize sentAbsoluteTime=_sentAbsoluteTime;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
