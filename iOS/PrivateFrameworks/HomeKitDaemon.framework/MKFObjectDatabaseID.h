//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSManagedObjectID;

__attribute__((visibility("hidden")))
@interface MKFObjectDatabaseID : HMFObject
{
    NSManagedObjectID *_objectID;
}

- (void).cxx_destruct;
@property(readonly, copy) NSManagedObjectID *objectID; // @synthesize objectID=_objectID;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithMKFObject:(id)arg1;

@end

