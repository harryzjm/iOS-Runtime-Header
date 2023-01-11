//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSUUID;
@protocol NSObject><NSCopying><NSSecureCoding;

@interface HMCollectionSettingItem : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_identifier;
    id <NSObject><NSCopying><NSSecureCoding> _value;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy) id <NSObject><NSCopying><NSSecureCoding> value; // @synthesize value=_value;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
