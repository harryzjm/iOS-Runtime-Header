//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SCNUIKitSource
{
    id _uiView;
    id _uiWindow;
}

@property(retain, nonatomic) id uiWindow; // @synthesize uiWindow=_uiWindow;
@property(retain, nonatomic) id uiView; // @synthesize uiView=_uiView;
- (void)dealloc;
- (_Bool)isOpaque;
- (id)textureSource;
- (id)prepareWindowIfNeeded;
- (id)init;

@end

