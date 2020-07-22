//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSError;

@interface PKFieldProperties : NSObject <NSSecureCoding>
{
    unsigned long long _technology;
    long long _terminalType;
    long long _valueAddedServiceMode;
    NSArray *_merchantIdentifiers;
    NSError *_error;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSArray *merchantIdentifiers; // @synthesize merchantIdentifiers=_merchantIdentifiers;
@property(readonly, nonatomic) long long valueAddedServiceMode; // @synthesize valueAddedServiceMode=_valueAddedServiceMode;
@property(readonly, nonatomic) long long terminalType; // @synthesize terminalType=_terminalType;
@property(readonly, nonatomic) unsigned long long technology; // @synthesize technology=_technology;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithTechnology:(unsigned long long)arg1 terminalType:(long long)arg2 valueAddedServiceMode:(long long)arg3;

@end

