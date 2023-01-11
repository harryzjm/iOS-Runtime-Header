//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSData, NSNumber, NSString, NSUUID;

@interface HMSettingValue : NSObject <NSCopying, NSSecureCoding>
{
    long long _type;
    NSNumber *_numberValue;
    NSString *_stringValue;
    NSData *_dataValue;
    NSUUID *_selectionIdentifier;
    NSString *_selectionValue;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *selectionValue; // @synthesize selectionValue=_selectionValue;
@property(readonly, copy, nonatomic) NSUUID *selectionIdentifier; // @synthesize selectionIdentifier=_selectionIdentifier;
@property(readonly, copy, nonatomic) NSData *dataValue; // @synthesize dataValue=_dataValue;
@property(readonly, copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(readonly, copy, nonatomic) NSNumber *numberValue; // @synthesize numberValue=_numberValue;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initDataSettingWithValue:(id)arg1;
- (id)initNumberSettingWithValue:(id)arg1;
- (id)initStringSettingWithValue:(id)arg1;
- (id)initWithType:(long long)arg1 stringValue:(id)arg2 numberValue:(id)arg3 dataValue:(id)arg4 selectionIdentifier:(id)arg5 selectionValue:(id)arg6;

@end
