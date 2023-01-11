//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceDomain, BSServiceSpecification, BSZeroingWeakReference, NSMutableArray, NSMutableDictionary;

@interface BSService : NSObject
{
    BSServiceDomain *_domain;
    BSServiceSpecification *_specification;
    struct os_unfair_lock_s _lock;
    BSZeroingWeakReference *_lock_globalListener;
    NSMutableDictionary *_lock_instanceToListener;
    NSMutableArray *_lock_pendedConnections;
}

- (void).cxx_destruct;

@end
