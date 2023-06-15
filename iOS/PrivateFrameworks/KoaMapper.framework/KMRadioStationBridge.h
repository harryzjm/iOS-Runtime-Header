//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KVItemBuilder, NSString;

__attribute__((visibility("hidden")))
@interface KMRadioStationBridge : NSObject
{
    KVItemBuilder *_builder;
}

+ (void)bootstrapListenerWithHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (id)originAppId;
- (long long)itemType;
- (_Bool)enumerateItemsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

