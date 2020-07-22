//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibrary/PLAlbumProtocol-Protocol.h>

@class NSArray, NSDictionary, NSIndexSet, NSMutableOrderedSet, NSString;

@protocol PLUserEditableAlbumProtocol <PLAlbumProtocol>
@property(readonly, retain, nonatomic) NSMutableOrderedSet *userEditableAssets;
- (void)insertInternalUserEditableAssets:(NSArray *)arg1 atIndexes:(NSIndexSet *)arg2 trimmedVideoPathInfo:(NSDictionary *)arg3 commentText:(NSString *)arg4;
@end

