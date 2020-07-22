//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameplayKit/NSCoding-Protocol.h>
#import <GameplayKit/NSCopying-Protocol.h>

@class NSArray, NSMutableDictionary;

@interface GKEntity : NSObject <NSCopying, NSCoding>
{
    NSMutableDictionary *_components;
}

+ (id)entity;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)componentForClass:(Class)arg1;
- (void)removeComponentForClass:(Class)arg1;
- (void)addComponent:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *components;
- (void)updateWithDeltaTime:(double)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)componentForKey:(id)arg1;
- (void)removeComponent:(id)arg1;

@end

