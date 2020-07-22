//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class TSDLayout, TSWPAttachment;

@interface TSWPTypesetterAttachmentMap : NSObject
{
    TSWPAttachment *_attachment;
    TSDLayout *_layout;
    struct __CTLine *_lineRef;
}

+ (id)mapWithAttachment:(id)arg1 layout:(id)arg2 pageNumber:(unsigned long long)arg3 pageCount:(unsigned long long)arg4 footnoteMarkProvider:(id)arg5 styleProvider:(id)arg6 colorOverride:(id)arg7;
@property(readonly, nonatomic) struct __CTLine *lineRef; // @synthesize lineRef=_lineRef;
@property(retain, nonatomic) TSDLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) TSWPAttachment *attachment; // @synthesize attachment=_attachment;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

