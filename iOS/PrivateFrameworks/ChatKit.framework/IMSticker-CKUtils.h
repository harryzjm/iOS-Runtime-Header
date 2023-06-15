//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMSharedUtilities/IMSticker.h>

@class UIImage;

@interface IMSticker (CKUtils)
- (id)stickerView;
- (double)calculateInitialScaleWithMaxSize:(struct CGSize)arg1;
- (double)calculateInitialScaleWithImage:(id)arg1 maxSize:(struct CGSize)arg2;
@property(readonly, copy, nonatomic) UIImage *image;
- (_Bool)prepareToSend;
@end

