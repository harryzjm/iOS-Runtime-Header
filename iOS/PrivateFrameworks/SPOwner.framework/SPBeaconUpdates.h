//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SPOwner/NSCopying-Protocol.h>
#import <SPOwner/NSSecureCoding-Protocol.h>

@class NSString;

@interface SPBeaconUpdates : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_name;
    long long _roleId;
    long long _timeShift;
    long long _clockDrift;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long clockDrift; // @synthesize clockDrift=_clockDrift;
@property(readonly, nonatomic) long long timeShift; // @synthesize timeShift=_timeShift;
@property(readonly, nonatomic) long long roleId; // @synthesize roleId=_roleId;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithTimeShift:(long long)arg1 clockDrift:(long long)arg2 name:(id)arg3 roleId:(long long)arg4;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 roleId:(long long)arg2;

@end
