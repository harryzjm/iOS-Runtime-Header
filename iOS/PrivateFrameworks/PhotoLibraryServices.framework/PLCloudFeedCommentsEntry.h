//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableOrderedSet, NSOrderedSet, NSString;

@interface PLCloudFeedCommentsEntry
{
}

+ (id)entityName;
- (_Bool)shouldBeRemovedFromPhotoLibrary:(id)arg1;
@property(readonly, nonatomic) NSMutableOrderedSet *mutableEntryComments;
@property(readonly, nonatomic) NSMutableOrderedSet *mutableEntryLikeComments;

// Remaining properties
@property(retain, nonatomic) NSString *entryCloudAssetGUID; // @dynamic entryCloudAssetGUID;
@property(retain, nonatomic) NSOrderedSet *entryComments; // @dynamic entryComments;
@property(retain, nonatomic) NSOrderedSet *entryLikeComments; // @dynamic entryLikeComments;

@end

