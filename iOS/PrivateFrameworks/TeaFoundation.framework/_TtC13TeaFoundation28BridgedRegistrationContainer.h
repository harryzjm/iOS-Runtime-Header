//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC13TeaFoundation28BridgedRegistrationContainer : NSObject
{
    MISSING_TYPE *registrationContainer;
}

- (void).cxx_destruct;
- (id)init;
- (id)registerUncheckedProtocol:(id)arg1 name:(id)arg2 factory:(CDUnknownBlockType)arg3;
- (id)registerUncheckedProtocol:(id)arg1 factory:(CDUnknownBlockType)arg2;
- (id)registerProtocol:(id)arg1 name:(id)arg2 factory:(CDUnknownBlockType)arg3;
- (id)registerProtocol:(id)arg1 factory:(CDUnknownBlockType)arg2;
- (id)registerClass:(Class)arg1 name:(id)arg2 factory:(CDUnknownBlockType)arg3;
- (id)registerClass:(Class)arg1 factory:(CDUnknownBlockType)arg2;

@end

