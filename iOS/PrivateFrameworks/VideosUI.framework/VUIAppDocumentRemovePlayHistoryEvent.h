//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VUIAppDocumentUpdateEvent.h"

@class NSSet;

__attribute__((visibility("hidden")))
@interface VUIAppDocumentRemovePlayHistoryEvent : VUIAppDocumentUpdateEvent
{
    NSSet *_removedCanonicalIDs;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *removedCanonicalIDs; // @synthesize removedCanonicalIDs=_removedCanonicalIDs;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)initWithRemovedCanonicalIDs:(id)arg1;
- (id)initWithDescriptor:(id)arg1;

@end

