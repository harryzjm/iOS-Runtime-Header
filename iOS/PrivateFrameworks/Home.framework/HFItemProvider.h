//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/NSCopying-Protocol.h>

@class NSSet;

@interface HFItemProvider : NSObject <NSCopying>
{
    NSSet *_clientInvalidationReasons;
}

+ (_Bool)prefersNonBlockingReloads;
@property(retain, nonatomic) NSSet *clientInvalidationReasons; // @synthesize clientInvalidationReasons=_clientInvalidationReasons;
- (void).cxx_destruct;
- (id)invalidationReasons;
@property(readonly, nonatomic) NSSet *items;
- (id)reloadItems;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)reloadItemsWithHomeKitObjects:(id)arg1 filter:(CDUnknownBlockType)arg2 itemMap:(CDUnknownBlockType)arg3;
- (id)reloadItemsWithObjects:(id)arg1 keyAdaptor:(CDUnknownBlockType)arg2 itemAdaptor:(CDUnknownBlockType)arg3 filter:(CDUnknownBlockType)arg4 itemMap:(CDUnknownBlockType)arg5;

@end

