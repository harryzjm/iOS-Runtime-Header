//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KVItemBuilder, NSString;

@interface KMMapper_SAAppInfo : NSObject
{
    KVItemBuilder *_builder;
}

+ (Class)externalObjectClass;
- (void).cxx_destruct;
- (id)itemsFromExternalObject:(id)arg1 additionalFields:(id)arg2 error:(id *)arg3;
- (long long)targetItemType;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

