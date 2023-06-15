//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPWebLinkPresentationProperties;

__attribute__((visibility("hidden")))
@interface CKWalletItemBalloonView
{
    _Bool _pendingPropertyChange;
    _Bool _isIrisAsset;
    LPWebLinkPresentationProperties *_presentationProperties;
}

- (void).cxx_destruct;
@property(retain, nonatomic) LPWebLinkPresentationProperties *presentationProperties; // @synthesize presentationProperties=_presentationProperties;
- (void)setIsIrisAsset:(_Bool)arg1;
- (_Bool)isIrisAsset;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3 hasInvisibleInkEffect:(_Bool)arg4;

@end

