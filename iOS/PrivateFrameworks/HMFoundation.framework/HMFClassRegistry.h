//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMFUnfairLock, NSMutableDictionary;

@interface HMFClassRegistry
{
    HMFUnfairLock *_lock;
    NSMutableDictionary *_classes;
    Class _defaultClass;
}

@property(readonly) Class defaultClass; // @synthesize defaultClass=_defaultClass;
- (void).cxx_destruct;
- (void)setClass:(Class)arg1 forKey:(id)arg2;
- (Class)classForKey:(id)arg1;
- (id)initWithDefaultClass:(Class)arg1;
- (id)init;

@end
