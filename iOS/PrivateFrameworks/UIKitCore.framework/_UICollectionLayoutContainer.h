//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol _UIContentInsetsEnvironment;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutContainer : NSObject
{
    id <_UIContentInsetsEnvironment> _insetsEnvironment;
    struct CGSize _contentSize;
    struct NSDirectionalEdgeInsets _contentInsets;
}

- (void).cxx_destruct;
@property(nonatomic) struct NSDirectionalEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) id <_UIContentInsetsEnvironment> insetsEnvironment; // @synthesize insetsEnvironment=_insetsEnvironment;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) struct NSDirectionalEdgeInsets effectiveContentInsets;
@property(readonly, nonatomic) struct CGSize effectiveContentSize;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

