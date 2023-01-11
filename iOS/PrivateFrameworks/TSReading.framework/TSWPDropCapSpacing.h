//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>

@interface TSWPDropCapSpacing : NSObject <NSCopying>
{
    _Bool _allowSpanParagraphs;
    unsigned long long _lineCount;
    unsigned long long _elevatedLineCount;
    unsigned long long _followingLineCount;
    double _padding;
    unsigned long long _flags;
    double _maxWidthFactor;
}

+ (id)dropCapSpacingWithLineCount:(unsigned long long)arg1 elevatedLineCount:(unsigned long long)arg2;
@property(nonatomic) double maxWidthFactor; // @synthesize maxWidthFactor=_maxWidthFactor;
@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(nonatomic) _Bool allowSpanParagraphs; // @synthesize allowSpanParagraphs=_allowSpanParagraphs;
@property(nonatomic) double padding; // @synthesize padding=_padding;
@property(nonatomic) unsigned long long followingLineCount; // @synthesize followingLineCount=_followingLineCount;
@property(nonatomic) unsigned long long elevatedLineCount; // @synthesize elevatedLineCount=_elevatedLineCount;
@property(nonatomic) unsigned long long lineCount; // @synthesize lineCount=_lineCount;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)computedFlagsWithPropertyMap:(id)arg1;
- (void)dealloc;
- (id)init;

@end
