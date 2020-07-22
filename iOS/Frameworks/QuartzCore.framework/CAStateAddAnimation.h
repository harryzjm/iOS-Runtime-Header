//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAAnimation, NSString;

@interface CAStateAddAnimation
{
    NSString *_key;
    CAAnimation *_animation;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) CAAnimation *animation; // @synthesize animation=_animation;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)apply:(id)arg1;
- (_Bool)matches:(id)arg1;
- (id)keyPath;

@end

