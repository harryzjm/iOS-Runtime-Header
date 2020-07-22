//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class CADisplay, NSString;

@interface CADisplayMode : NSObject
{
    struct Mode _mode;
    CADisplay *_dpy;
    unsigned long long _width;
    unsigned long long _height;
}

+ (id)_displayModeWithMode:(struct Mode)arg1 display:(id)arg2;
- (id).cxx_construct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long preferredScale;
@property(readonly, nonatomic) unsigned long long internalRepresentation;
@property(readonly, copy, nonatomic) NSString *colorGamut;
@property(readonly, copy, nonatomic) NSString *hdrMode;
@property(readonly, copy, nonatomic) NSString *colorMode;
@property(readonly, nonatomic) _Bool isVirtual;
@property(readonly, nonatomic) double refreshRate;
@property(readonly, nonatomic) double pixelAspectRatio;
@property(readonly, nonatomic) unsigned long long height;
@property(readonly, nonatomic) unsigned long long width;
- (void)_setWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (struct Mode)_mode;
- (id)_display;
- (void)dealloc;
- (id)_initWithMode:(struct Mode)arg1 display:(id)arg2;

@end
