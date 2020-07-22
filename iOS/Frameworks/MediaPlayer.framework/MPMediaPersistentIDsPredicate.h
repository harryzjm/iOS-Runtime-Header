//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPPProtobufferCoding-Protocol.h>

@class NSString;

@interface MPMediaPersistentIDsPredicate <MPPProtobufferCoding>
{
    long long *_persistentIDs;
    _Bool _shouldContain;
    unsigned long long _count;
}

+ (id)predicateWithPersistentIDs:(const long long *)arg1 count:(unsigned long long)arg2 shouldContain:(_Bool)arg3;
@property(readonly, nonatomic) _Bool shouldContain; // @synthesize shouldContain=_shouldContain;
@property(readonly, nonatomic) const long long *persistentIDs; // @synthesize persistentIDs=_persistentIDs;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (id)protobufferEncodableObject;
- (id)initWithProtobufferDecodableObject:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)ML3PredicateForContainer;
- (id)ML3PredicateForTrack;
- (id)_ML3PredicateForEntityClass:(Class)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

