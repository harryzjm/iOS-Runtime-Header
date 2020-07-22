//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuetContext/NSCopying-Protocol.h>
#import <CoreDuetContext/NSSecureCoding-Protocol.h>

@class NSDate, NSMutableDictionary;
@protocol NSCopying><NSSecureCoding;

@interface _CDContextValue : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_metadata;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSMutableDictionary *metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSDate *lastModifiedDate;
@property(retain, nonatomic) NSObject<NSCopying><NSSecureCoding> *value;
- (id)init;

@end

