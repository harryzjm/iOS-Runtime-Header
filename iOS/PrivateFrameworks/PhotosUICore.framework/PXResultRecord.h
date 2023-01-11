//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@interface PXResultRecord : NSObject <NSCopying>
{
}

- (id)description;
- (id)inclusionPredicate;
- (id)filteredFetchResult;
- (_Bool)reverseSortOrder;
- (_Bool)isCurated;
- (_Bool)wantsCuration;
- (id)keyAssetsFetchResult;
- (id)curatedFetchResult;
- (id)fetchResult;
- (id)exposedFetchResult;
- (id)curatedOids;
- (id)excludedOids;
- (id)includedOids;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

