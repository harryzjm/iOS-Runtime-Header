//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Messages/MSStickerBrowserViewDataSource-Protocol.h>

@class NSMutableArray, NSString;

@interface _MSStickerPackCollectionViewDataSource : NSObject <MSStickerBrowserViewDataSource>
{
    long long _stickerSize;
    NSMutableArray *_stickers;
}

+ (long long)_stickerSizeFromString:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *stickers; // @synthesize stickers=_stickers;
@property(readonly, nonatomic) long long stickerSize; // @synthesize stickerSize=_stickerSize;
- (void).cxx_destruct;
- (id)stickerBrowserView:(id)arg1 stickerAtIndex:(long long)arg2;
- (long long)numberOfStickersInStickerBrowserView:(id)arg1;
- (void)_loadStickerPackWithURL:(id)arg1;
- (id)initWithStickerPackURL:(id)arg1;
- (id)_allStickers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
