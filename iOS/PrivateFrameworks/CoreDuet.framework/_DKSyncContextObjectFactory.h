//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, _DKSyncContext;

@interface _DKSyncContextObjectFactory : NSObject
{
    NSMutableDictionary *_instances;
    _DKSyncContext *_context;
    Class _class;
}

+ (id)objectFactoryForClass:(Class)arg1 context:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) Class class; // @synthesize class=_class;
@property(readonly, nonatomic) _DKSyncContext *context; // @synthesize context=_context;
- (id)instance;
- (id)initWithContext:(id)arg1 fabricateClass:(Class)arg2;

@end
