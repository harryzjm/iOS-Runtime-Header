//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCollectionLayoutEnvironment_Private-Protocol.h>

@class NSString, UITraitCollection;
@protocol NSCollectionLayoutContainer, _UIDataSourceSnapshot;

__attribute__((visibility("hidden")))
@interface NSCollectionLayoutEnvironment : NSObject <NSCollectionLayoutEnvironment_Private>
{
    id <_UIDataSourceSnapshot> __dataSourceSnapshot;
    id <NSCollectionLayoutContainer> _container;
    UITraitCollection *_traitCollection;
}

@property(retain, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(retain, nonatomic) id <NSCollectionLayoutContainer> container; // @synthesize container=_container;
@property(retain, nonatomic) id <_UIDataSourceSnapshot> _dataSourceSnapshot; // @synthesize _dataSourceSnapshot=__dataSourceSnapshot;
- (void).cxx_destruct;
- (id)initWithContainer:(id)arg1 traitCollection:(id)arg2 dataSourceSnapshot:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
