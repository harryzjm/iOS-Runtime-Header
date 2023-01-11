//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface IPAAutoRegistry : NSObject
{
    NSObject<OS_dispatch_queue> *_serializer;
    NSMutableDictionary *_entries;
}

+ (id)sharedRegistry;
+ (void)setSharedRegistry:(id)arg1;
- (void).cxx_destruct;
- (_Bool)isPersistableAutoIdentifier:(id)arg1 forOperationIdentifier:(id)arg2;
- (Class)settingsClassForAutoIdentifier:(id)arg1 operationIdentifier:(id)arg2;
- (_Bool)hasMappingForAutoIdentifier:(id)arg1 operationIdentifier:(id)arg2;
- (id)_entryForAutoIdentifier:(id)arg1 operationIdentifier:(id)arg2;
- (void)registerAutoCalculatorSettingsClass:(Class)arg1 toAutoIdentifier:(id)arg2 operationIdentifier:(id)arg3 persistable:(_Bool)arg4;
- (void)registerAutoCalculatorSettingsClass:(Class)arg1 toAutoIdentifier:(id)arg2 operationIdentifier:(id)arg3;
- (id)init;

@end
