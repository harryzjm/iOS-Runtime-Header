//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <SearchUICardKitProviderSupport/CRKCardSectionView-Protocol.h>

@class NSString;
@protocol CRKComposableView;

@interface UIView (CRKCardSectionView) <CRKCardSectionView>
+ (struct CGSize)sizeThatFitsCardSection:(id)arg1 boundingSize:(struct CGSize)arg2;
- (void)removeFromComposedSuperview;
@property(nonatomic) __weak UIView<CRKComposableView> *composedSuperview; // @dynamic composedSuperview;
@property(copy, nonatomic) NSString *cardSectionViewIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

