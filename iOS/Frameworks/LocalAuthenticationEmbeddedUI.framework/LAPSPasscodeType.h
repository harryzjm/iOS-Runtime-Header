//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface LAPSPasscodeType : NSObject
{
    long long _identifier;
    unsigned long long _length;
}

+ (id)alphanumericType;
+ (id)numericCustomDigitsType;
+ (id)numericSixDigitsType;
+ (id)numericFourDigitsType;
+ (id)noneType;
+ (id)typeAllowingString:(id)arg1;
@property(readonly, nonatomic) unsigned long long length; // @synthesize length=_length;
@property(nonatomic) long long identifier; // @synthesize identifier=_identifier;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)allowsString:(id)arg1;
- (_Bool)allowsLength:(long long)arg1;
- (id)initWithIdentifier:(long long)arg1 length:(unsigned long long)arg2;

@end

