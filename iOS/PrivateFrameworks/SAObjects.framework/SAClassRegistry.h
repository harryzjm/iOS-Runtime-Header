//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SAClassRegistry : NSObject
{
}

+ (Class)classForAceClassName:(id)arg1 inGroupWithIdentifier:(id)arg2;
+ (void)registerClass:(Class)arg1 forAceClassName:(id)arg2 inGroupWithIdentifier:(id)arg3;
+ (void)registerAcronym:(id)arg1 forGroupWithIdentifier:(id)arg2;
+ (void)initialize;
+ (id)sharedClassRegistry;
- (Class)classForAceClassWithName:(id)arg1 inGroupWithIdentifier:(id)arg2;
- (void)registerClass:(Class)arg1 forAceClassWithName:(id)arg2 inGroupWithIdentifier:(id)arg3;

@end
