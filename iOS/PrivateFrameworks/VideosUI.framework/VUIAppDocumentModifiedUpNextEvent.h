//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSCopying-Protocol.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface VUIAppDocumentModifiedUpNextEvent <NSCopying>
{
    NSSet *_addedCanonicalIDs;
    NSSet *_removedCanonicalIDs;
}

@property(copy, nonatomic) NSSet *removedCanonicalIDs; // @synthesize removedCanonicalIDs=_removedCanonicalIDs;
@property(copy, nonatomic) NSSet *addedCanonicalIDs; // @synthesize addedCanonicalIDs=_addedCanonicalIDs;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)coalescedEvent:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithAction:(unsigned long long)arg1 canonicalID:(id)arg2;
- (id)initWithAddedCanonicalIDs:(id)arg1 removedCanonicalIDs:(id)arg2;
- (id)initWithDescriptor:(id)arg1;

@end
