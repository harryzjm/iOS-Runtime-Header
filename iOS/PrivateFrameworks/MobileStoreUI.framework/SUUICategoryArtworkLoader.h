//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMapTable, NSString, SUUIImageDataConsumer, SUUIResourceLoader, UIImage;

__attribute__((visibility("hidden")))
@interface SUUICategoryArtworkLoader : NSObject
{
    NSMapTable *_artworkRequestIDs;
    SUUIImageDataConsumer *_imageDataConsumer;
    SUUIResourceLoader *_loader;
    NSHashTable *_observers;
    UIImage *_placeholderImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SUUIImageDataConsumer *imageDataConsumer; // @synthesize imageDataConsumer=_imageDataConsumer;
@property(readonly, nonatomic) SUUIResourceLoader *artworkLoader; // @synthesize artworkLoader=_loader;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)removeObserver:(id)arg1;
@property(readonly, nonatomic) struct CGSize imageSize;
@property(readonly, nonatomic) UIImage *placeholderImage;
- (void)loadImageForCategory:(id)arg1 reason:(long long)arg2;
- (id)cachedImageForCategory:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithArtworkLoader:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

