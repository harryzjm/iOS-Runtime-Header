//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UITextTiledLayerDelegate-Protocol.h>

@class NSArray, NSMutableSet, NSString;
@protocol _UITextFieldContentViewContextProvider;

__attribute__((visibility("hidden")))
@interface _UITextFieldContentView <_UITextTiledLayerDelegate>
{
    id <_UITextFieldContentViewContextProvider> _provider;
    NSMutableSet *_ghostedRanges;
    NSArray *_maskedRects;
}

+ (Class)layerClass;
- (void).cxx_destruct;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)_textTiledLayer:(id)arg1 maskedRectsInRect:(struct CGRect)arg2;
- (void)setNeedsLayout;
- (void)removeAllGhostedRanges;
- (void)addGhostedRange:(struct _NSRange)arg1;
- (id)initWithContentContextProvider:(id)arg1;
- (id)layer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

