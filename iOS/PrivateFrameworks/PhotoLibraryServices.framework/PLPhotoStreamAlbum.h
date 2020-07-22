//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PLPhotoStreamAlbum
{
}

+ (id)keyPathsForValuesAffectingPersonID;
+ (id)entityName;
+ (id)photoStreamAlbumWithStreamID:(id)arg1 inPhotoLibrary:(id)arg2 createIfNeeded:(_Bool)arg3;
+ (id)entityInManagedObjectContext:(id)arg1;
- (void)addAssetOrderedByDataTaken:(id)arg1;
- (void)enforceImageLimitIfNecessary;
- (_Bool)shouldDeleteWhenEmpty;
@property(retain, nonatomic) NSString *personID;
- (void)awakeFromInsert;

@end

