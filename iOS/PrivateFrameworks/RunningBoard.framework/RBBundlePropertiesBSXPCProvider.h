//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface RBBundlePropertiesBSXPCProvider : NSObject
{
    NSMutableDictionary *_propertiesByIdentifier;
    struct os_unfair_lock_s _lock;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (void)removePropertiesForIdentifier:(id)arg1;
- (id)propertiesForIdentifier:(id)arg1;
- (id)init;

@end
