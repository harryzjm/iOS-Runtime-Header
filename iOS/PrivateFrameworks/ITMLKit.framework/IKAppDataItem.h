//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKAppPrototypeIdentifier, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface IKAppDataItem : NSObject
{
    NSString *_type;
    NSString *_identifier;
    IKAppPrototypeIdentifier *_prototypeIdentifier;
    NSDictionary *_dataDictionary;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *dataDictionary; // @synthesize dataDictionary=_dataDictionary;
@property(readonly, nonatomic) IKAppPrototypeIdentifier *prototypeIdentifier; // @synthesize prototypeIdentifier=_prototypeIdentifier;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (id)valueForPropertyPath:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithType:(id)arg1 identifier:(id)arg2 prototypeIdentifier:(id)arg3 dataDictionary:(id)arg4;

@end

