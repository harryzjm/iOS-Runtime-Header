//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SXComponentDependencyDescriptor;

@interface SXComponentDependency : NSObject
{
    NSString *_fromComponentIdentifier;
    NSString *_toComponentIdentifier;
    long long _fromDependencyAttribute;
    long long _toDependencyAttribute;
    SXComponentDependencyDescriptor *_descriptor;
}

+ (id)componentDependencyFromComponentIdentifier:(id)arg1 toComponentIdentifier:(id)arg2 fromLayoutAttribute:(long long)arg3 toAttribute:(long long)arg4 withDescriptor:(id)arg5;
@property(retain, nonatomic) SXComponentDependencyDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(nonatomic) long long toDependencyAttribute; // @synthesize toDependencyAttribute=_toDependencyAttribute;
@property(nonatomic) long long fromDependencyAttribute; // @synthesize fromDependencyAttribute=_fromDependencyAttribute;
@property(retain, nonatomic) NSString *toComponentIdentifier; // @synthesize toComponentIdentifier=_toComponentIdentifier;
@property(retain, nonatomic) NSString *fromComponentIdentifier; // @synthesize fromComponentIdentifier=_fromComponentIdentifier;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithComponentDependencyFromComponentIdentifier:(id)arg1 toComponentIdentifier:(id)arg2 fromLayoutAttribute:(long long)arg3 toAttribute:(long long)arg4 withDescriptor:(id)arg5;

@end

