//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/NSMutableCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSDExteriorTextWrap : NSObject <NSCopying, NSMutableCopying>
{
    _Bool _isHTMLWrap;
    int _type;
    int _direction;
    int _fitType;
    double _margin;
    double _alphaThreshold;
}

+ (id)exteriorTextWrapWithIsHTMLWrap:(_Bool)arg1 type:(int)arg2 direction:(int)arg3 fitType:(int)arg4 margin:(double)arg5 alphaThreshold:(double)arg6;
+ (id)exteriorTextWrap;
@property(readonly, nonatomic) double alphaThreshold; // @synthesize alphaThreshold=_alphaThreshold;
@property(readonly, nonatomic) double margin; // @synthesize margin=_margin;
@property(readonly, nonatomic) int fitType; // @synthesize fitType=_fitType;
@property(readonly, nonatomic) int direction; // @synthesize direction=_direction;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool isHTMLWrap; // @synthesize isHTMLWrap=_isHTMLWrap;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIsHTMLWrap:(_Bool)arg1 type:(int)arg2 direction:(int)arg3 fitType:(int)arg4 margin:(double)arg5 alphaThreshold:(double)arg6;
- (id)init;
- (void)saveToArchive:(struct ExteriorTextWrapArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct ExteriorTextWrapArchive *)arg1;

@end

