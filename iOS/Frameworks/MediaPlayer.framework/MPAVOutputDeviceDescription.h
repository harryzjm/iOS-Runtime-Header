//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface MPAVOutputDeviceDescription : NSObject
{
    long long _routeType;
    long long _routeSubtype;
    NSString *_uid;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(readonly, nonatomic) long long routeSubtype; // @synthesize routeSubtype=_routeSubtype;
@property(readonly, nonatomic) long long routeType; // @synthesize routeType=_routeType;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDeviceType:(long long)arg1 deviceSubtype:(long long)arg2 uid:(id)arg3;

@end
