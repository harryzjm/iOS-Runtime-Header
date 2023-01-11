//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/_UICollectionLayoutAPIRespresenting-Protocol.h>

@class NSArray, NSString, _UICollectionLayoutEdgeSpacing, _UICollectionLayoutSize;

@interface _UICollectionLayoutItem : NSObject <NSCopying, _UICollectionLayoutAPIRespresenting>
{
    NSArray *_supplementaryItems;
    NSArray *_decorationItems;
    _UICollectionLayoutEdgeSpacing *_edgeSpacing;
    NSString *_name;
    _UICollectionLayoutSize *_size;
    struct NSDirectionalEdgeInsets _contentInsets;
}

+ (id)itemWithSize:(id)arg1 decorationItems:(id)arg2;
+ (id)itemWithSize:(id)arg1 supplementaryItems:(id)arg2;
+ (id)itemWithSize:(id)arg1;
+ (id)itemWithSize:(id)arg1 supplementaryItems:(id)arg2 decorationItems:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) _UICollectionLayoutSize *size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) _UICollectionLayoutEdgeSpacing *edgeSpacing; // @synthesize edgeSpacing=_edgeSpacing;
@property(nonatomic) struct NSDirectionalEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (id)_apiRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSize:(id)arg1 supplementaryItems:(id)arg2 decorationItems:(id)arg3 contentInsets:(struct NSDirectionalEdgeInsets)arg4 edgeSpacing:(id)arg5 name:(id)arg6;

@end
