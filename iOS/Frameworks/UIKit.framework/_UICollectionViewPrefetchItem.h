//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class UICollectionReusableView, UICollectionViewLayoutAttributes;

__attribute__((visibility("hidden")))
@interface _UICollectionViewPrefetchItem : NSObject
{
    _Bool _hasPrefetchedData;
    UICollectionViewLayoutAttributes *_attributes;
    UICollectionReusableView *_view;
}

@property(retain, nonatomic) UICollectionReusableView *view; // @synthesize view=_view;
@property(nonatomic) _Bool hasPrefetchedData; // @synthesize hasPrefetchedData=_hasPrefetchedData;
@property(retain, nonatomic) UICollectionViewLayoutAttributes *attributes; // @synthesize attributes=_attributes;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAttributes:(id)arg1;

@end

