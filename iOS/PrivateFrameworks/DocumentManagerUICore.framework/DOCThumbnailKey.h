//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DocumentManagerUICore/NSCopying-Protocol.h>

@protocol NSCopying;

@interface DOCThumbnailKey : NSObject <NSCopying>
{
    _Bool _isInteractive;
    NSObject<NSCopying> *_primaryKey;
    double _minimumSize;
    double _scale;
    unsigned long long _style;
    struct CGSize _size;
}

@property(readonly, nonatomic) _Bool isInteractive; // @synthesize isInteractive=_isInteractive;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) double minimumSize; // @synthesize minimumSize=_minimumSize;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) NSObject<NSCopying> *primaryKey; // @synthesize primaryKey=_primaryKey;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithPrimaryKey:(id)arg1 size:(struct CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 style:(unsigned long long)arg5 isInteractive:(_Bool)arg6;

@end

