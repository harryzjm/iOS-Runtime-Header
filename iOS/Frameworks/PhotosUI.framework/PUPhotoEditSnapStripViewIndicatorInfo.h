//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface PUPhotoEditSnapStripViewIndicatorInfo : NSObject
{
    _Bool _disabled;
    UIColor *_color;
    double _offset;
}

@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(readonly, nonatomic) double offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqualToIndicatorInfo:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)init;
- (id)initWithOffset:(double)arg1 color:(id)arg2;

@end

