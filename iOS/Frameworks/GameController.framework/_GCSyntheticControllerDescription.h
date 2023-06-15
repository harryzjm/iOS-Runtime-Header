//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NSCopying><NSObject><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface _GCSyntheticControllerDescription : NSObject
{
    id <NSCopying><NSObject><NSSecureCoding> _controllerIdentifier;
    NSString *_persistentIdentifier;
}

- (void).cxx_destruct;
@property(readonly) NSString *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
@property(readonly) id <NSCopying><NSObject><NSSecureCoding> controllerIdentifier; // @synthesize controllerIdentifier=_controllerIdentifier;
- (id)debugDescription;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDescription:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithControllerIdentifier:(id)arg1 persistentIdentifier:(id)arg2;

@end

