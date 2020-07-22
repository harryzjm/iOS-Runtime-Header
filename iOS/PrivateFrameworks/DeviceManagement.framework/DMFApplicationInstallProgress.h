//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DeviceManagement/NSCopying-Protocol.h>
#import <DeviceManagement/NSSecureCoding-Protocol.h>

@interface DMFApplicationInstallProgress : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _state;
    unsigned long long _phase;
    double _fractionCompleted;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) double fractionCompleted; // @synthesize fractionCompleted=_fractionCompleted;
@property(readonly, nonatomic) unsigned long long phase; // @synthesize phase=_phase;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(unsigned long long)arg1 phase:(unsigned long long)arg2 fractionCompleted:(double)arg3;

@end

