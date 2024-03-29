//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MADVideoRemoveBackgroundResult, NSData, NSNumber, UTType, VKCRemoveBackgroundVideoRequest;

__attribute__((visibility("hidden")))
@interface VKCRemoveBackgroundVideoResult : NSObject
{
    NSNumber *_animatedStickerScore;
    MADVideoRemoveBackgroundResult *_madResult;
    VKCRemoveBackgroundVideoRequest *_request;
    struct CGSize _canvasSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VKCRemoveBackgroundVideoRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) MADVideoRemoveBackgroundResult *madResult; // @synthesize madResult=_madResult;
@property(retain, nonatomic) NSNumber *animatedStickerScore; // @synthesize animatedStickerScore=_animatedStickerScore;
@property(nonatomic) struct CGSize canvasSize; // @synthesize canvasSize=_canvasSize;
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) UTType *utType;
- (void)generateVideoSizeWithData:(id)arg1;
- (id)initWithMADVideoResult:(id)arg1 request:(id)arg2;

@end

