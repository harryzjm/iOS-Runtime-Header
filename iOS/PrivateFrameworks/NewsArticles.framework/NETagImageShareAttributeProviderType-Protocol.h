//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImage;
@protocol FCSportsEventProviding, FCTagProviding;

@protocol NETagImageShareAttributeProviderType
- (void)createShareSportsEventImageFor:(id <FCSportsEventProviding>)arg1 size:(struct CGSize)arg2 logoWidth:(double)arg3 completion:(void (^)(UIImage *))arg4;
- (UIImage *)getShareTagImageFor:(id <FCTagProviding>)arg1;
@end

