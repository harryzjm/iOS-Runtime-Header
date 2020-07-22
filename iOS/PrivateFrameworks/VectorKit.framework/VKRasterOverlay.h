//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VKRasterOverlayTileSource;
@protocol VKRasterOverlayDelegate;

@interface VKRasterOverlay : NSObject
{
    id <VKRasterOverlayDelegate> _delegate;
    struct {
        CDStruct_34734122 origin;
        struct {
            double width;
            double height;
        } size;
    } _replaceMapContentInRect;
    unsigned long long _level;
    VKRasterOverlayTileSource *_mapModel;
    weak_ptr_96fca551 _flyoverContainer;
    VKRasterOverlayTileSource *_tileSource;
}

@property(nonatomic) VKRasterOverlayTileSource *tileSource; // @synthesize tileSource=_tileSource;
@property(nonatomic) unsigned long long level; // @synthesize level=_level;
@property(nonatomic) CDStruct_90e2a262 replaceMapContentInRect; // @synthesize replaceMapContentInRect=_replaceMapContentInRect;
@property id <VKRasterOverlayDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setFlyoverContainer:(weak_ptr_96fca551)arg1;
- (weak_ptr_96fca551)flyoverContainer;
- (void)setNeedsDisplay;
- (void)drawKey:(const CDStruct_7523a67d *)arg1 inContext:(struct CGContext *)arg2;
- (_Bool)canDrawKey:(const CDStruct_7523a67d *)arg1;
- (void)setNeedsDisplayInRect:(const CDStruct_90e2a262 *)arg1 level:(long long)arg2;
- (id)init;

@end

