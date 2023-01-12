//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Photos/PHMemoryPropertySet-Protocol.h>

@class NSString, PHMemory;

@interface PHMemoryPropertySet : NSObject <PHMemoryPropertySet>
{
    PHMemory *_memory;
}

+ (id)propertiesToPrefetch;
+ (_Bool)isToMany;
+ (id)keyPathToPrimaryObject;
+ (id)keyPathFromPrimaryObject;
+ (id)entityName;
+ (id)propertiesToFetch;
+ (id)propertySetName;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak PHMemory *memory; // @synthesize memory=_memory;
- (id)initWithFetchDictionary:(id)arg1 memory:(id)arg2 prefetched:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
