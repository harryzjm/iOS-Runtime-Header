//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSString;

__attribute__((visibility("hidden")))
@interface SFFluidCollectionElementIdentifier : NSObject
{
    NSIndexPath *_indexPath;
    long long _elementCategory;
    NSString *_elementKind;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *elementKind; // @synthesize elementKind=_elementKind;
@property(readonly, nonatomic) long long elementCategory; // @synthesize elementCategory=_elementCategory;
@property(readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)elementIdentifierWithIndexPath:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIndexPath:(id)arg1 elementCategory:(long long)arg2 elementKind:(id)arg3;

@end

