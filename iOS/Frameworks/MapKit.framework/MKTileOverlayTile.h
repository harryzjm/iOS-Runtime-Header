//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface MKTileOverlayTile : NSObject
{
    CDStruct_cbb88d5e _path;
    CDStruct_02837cd9 _frame;
    double _scale;
    NSData *_image;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *image; // @synthesize image=_image;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) CDStruct_02837cd9 frame; // @synthesize frame=_frame;
@property(nonatomic) CDStruct_cbb88d5e path; // @synthesize path=_path;
- (id)description;

@end

