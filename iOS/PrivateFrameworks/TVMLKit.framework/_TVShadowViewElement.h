//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, _TVShadowViewElementID;

__attribute__((visibility("hidden")))
@interface _TVShadowViewElement : NSObject
{
    _TVShadowViewElementID *_elementID;
    NSArray *_children;
    _TVShadowViewElement *_parent;
}

@property(nonatomic) __weak _TVShadowViewElement *parent; // @synthesize parent=_parent;
@property(copy, nonatomic) NSArray *children; // @synthesize children=_children;
@property(copy, nonatomic) _TVShadowViewElementID *elementID; // @synthesize elementID=_elementID;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
