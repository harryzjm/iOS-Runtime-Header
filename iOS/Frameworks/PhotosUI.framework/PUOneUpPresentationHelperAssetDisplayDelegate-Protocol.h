//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSSet, PUAssetReference, PUOneUpPresentationHelper, UIImage;

@protocol PUOneUpPresentationHelperAssetDisplayDelegate <NSObject>
- (struct CGRect)oneUpPresentationHelper:(PUOneUpPresentationHelper *)arg1 rectForAssetReference:(PUAssetReference *)arg2 cropInsets:(struct UIEdgeInsets *)arg3 contentsRect:(struct CGRect *)arg4;

@optional
- (void)oneUpPresentationHelper:(PUOneUpPresentationHelper *)arg1 shouldDisableScroll:(_Bool)arg2;
- (void)oneUpPresentationHelper:(PUOneUpPresentationHelper *)arg1 scrollAssetReferenceToVisible:(PUAssetReference *)arg2;
- (void)oneUpPresentationHelper:(PUOneUpPresentationHelper *)arg1 shouldHideAssetReferences:(NSSet *)arg2;
- (UIImage *)oneUpPresentationHelper:(PUOneUpPresentationHelper *)arg1 currentImageForAssetReference:(PUAssetReference *)arg2;
@end
