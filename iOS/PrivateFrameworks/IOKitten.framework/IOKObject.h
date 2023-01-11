//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IOKObject : NSObject
{
    unsigned int _object;
}

+ (id)bundleIdentifierForClassName:(id)arg1;
+ (id)ioSuperClassNameForClassName:(id)arg1;
+ (Class)classForRegistryEntry:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int object; // @synthesize object=_object;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)conformsToIOClassName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *ioClassName;
- (id)initWithIOObject:(unsigned int)arg1;
- (id)init;

@end
