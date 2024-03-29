//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKAttributionViewModelObject, NSArray, UICollectionViewLayoutAttributes;

__attribute__((visibility("hidden")))
@interface CKAttributionCollectionViewLayoutAttributesCollection : NSObject
{
    UICollectionViewLayoutAttributes *_containerAttributes;
    UICollectionViewLayoutAttributes *_countViewAttributes;
    UICollectionViewLayoutAttributes *_iconViewAttributes;
    NSArray *_avatarAttributesCollection;
    NSArray *_nameAttributesCollection;
    CKAttributionViewModelObject *_modelObject;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CKAttributionViewModelObject *modelObject; // @synthesize modelObject=_modelObject;
@property(retain, nonatomic) NSArray *nameAttributesCollection; // @synthesize nameAttributesCollection=_nameAttributesCollection;
@property(retain, nonatomic) NSArray *avatarAttributesCollection; // @synthesize avatarAttributesCollection=_avatarAttributesCollection;
@property(retain, nonatomic) UICollectionViewLayoutAttributes *iconViewAttributes; // @synthesize iconViewAttributes=_iconViewAttributes;
@property(retain, nonatomic) UICollectionViewLayoutAttributes *countViewAttributes; // @synthesize countViewAttributes=_countViewAttributes;
@property(retain, nonatomic) UICollectionViewLayoutAttributes *containerAttributes; // @synthesize containerAttributes=_containerAttributes;
- (void)applyAlphaToAllAttributesAlpha:(double)arg1;
- (void)setContainerAttributes:(id)arg1 layoutMode:(long long)arg2;
- (void)_setCollapsedAttributes:(id)arg1;
- (void)_setExpandedAttributes:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithModelObject:(id)arg1 section:(long long)arg2;

@end

