//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/NSCopying-Protocol.h>
#import <Photos/NSObject-Protocol.h>

@class NSManagedObjectID, PHPhotoLibrary;

@protocol PHThumbnailAsset <NSCopying, NSObject>
@property(readonly, nonatomic) long long cloudPlaceholderKind;
@property(readonly, nonatomic) _Bool complete;
@property(readonly, nonatomic) unsigned long long thumbnailIndex;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@end
