//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameplayKit/NSFastEnumeration-Protocol.h>

@class NSArray, NSMutableArray;

@interface GKComponentSystem : NSObject <NSFastEnumeration>
{
    NSMutableArray *_components;
    Class _componentClass;
}

@property(readonly, nonatomic) Class componentClass; // @synthesize componentClass=_componentClass;
- (void).cxx_destruct;
- (Class)classForGenericArgumentAtIndex:(unsigned long long)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (void)updateWithDeltaTime:(double)arg1;
- (void)removeComponent:(id)arg1;
- (void)removeComponentWithEntity:(id)arg1;
- (void)addComponentWithEntity:(id)arg1;
- (void)addComponent:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
@property(readonly, retain, nonatomic) NSArray *components;
- (id)initWithComponentClass:(Class)arg1;

@end
