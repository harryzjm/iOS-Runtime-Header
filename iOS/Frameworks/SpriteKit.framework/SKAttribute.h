//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpriteKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface SKAttribute : NSObject <NSSecureCoding>
{
    long long _type;
    NSString *_name;
    basic_string_90719d97 _nameString;
}

+ (id)attributeWithName:(id)arg1 type:(long long)arg2;
+ (_Bool)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long type;
@property(readonly, nonatomic) NSString *name;
- (const basic_string_90719d97 *)getNameString;
- (id)initWithName:(id)arg1 type:(long long)arg2;
- (_Bool)isEqualToAttribute:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
