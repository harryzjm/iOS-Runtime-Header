//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, _TtC8MapsSync19MapsSyncDataSession;

@interface _TtC8MapsSync24MapsSyncCachedUserReview
{
    MISSING_TYPE *_muid;
    MISSING_TYPE *_numberPhotosUploaded;
    MISSING_TYPE *_rating;
}

- (id)initWithObject:(id)arg1;
- (void)addEditWithBlock:(CDUnknownBlockType)arg1;
- (Class)managedObjectClass;
- (Class)mutableObjectClass;
- (void)setPropertiesWithObject:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, readonly) _TtC8MapsSync19MapsSyncDataSession *session;
@property(nonatomic, readonly) short rating;
@property(nonatomic, readonly) int numberPhotosUploaded;
@property(nonatomic, readonly) unsigned long long muid;

@end
