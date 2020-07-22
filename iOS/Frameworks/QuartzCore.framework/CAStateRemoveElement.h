//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CAStateRemoveElement
{
    NSString *_keyPath;
    id _object;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)apply:(id)arg1;
- (_Bool)matches:(id)arg1;

@end

