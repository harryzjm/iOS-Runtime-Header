//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GQDRoot;

@interface GQDSStylesheet : NSObject
{
    GQDRoot *mRoot;
    GQDSStylesheet *mParent;
    struct __CFDictionary *mIdentifiedStyles;
    struct __CFArray *mStylesNeedingParentResolutionInParent;
    struct __CFArray *mStylesNeedingParentResolution;
}

- (struct __CFArray *)retainedArrayOfIdentifiedStyles;
- (void)resolveStyleParents;
- (void)addStyle:(id)arg1 needingParentResolution:(const char *)arg2 resolveInParent:(_Bool)arg3;
- (id)styleWithXmlUid:(const char *)arg1;
- (id)styleWithIdentifier:(const char *)arg1;
- (_Bool)addStyle:(id)arg1 withOwnedXmlUid:(char *)arg2;
- (void)addStyle:(id)arg1 withOwnedIdentifier:(char *)arg2;
- (id)parent;
- (void)dealloc;
- (id)initWithRoot:(id)arg1;

@end

