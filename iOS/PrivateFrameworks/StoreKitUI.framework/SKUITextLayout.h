//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUICachedLayout-Protocol.h>

@class NSString;

@interface SKUITextLayout : NSObject <SKUICachedLayout>
{
    struct __CTFramesetter *_framesetter;
    double _lineHeight;
    _Bool _requiresTruncation;
    struct CGSize _size;
    struct __CTFrame *_textFrame;
    struct CGSize _truncatedSize;
}

+ (struct __CFAttributedString *)_newAttributedStringWithRequest:(id)arg1;
+ (struct __CFAttributedString *)newAttributedStringWithText:(id)arg1;
@property(readonly, nonatomic) struct __CTFrame *textFrame; // @synthesize textFrame=_textFrame;
@property(readonly, nonatomic) struct CGSize truncatedSize; // @synthesize truncatedSize=_truncatedSize;
@property(readonly, nonatomic) struct CGSize textSize; // @synthesize textSize=_size;
@property(readonly, nonatomic) _Bool requiresTruncation; // @synthesize requiresTruncation=_requiresTruncation;
@property(readonly, nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
- (void)dealloc;
- (id)initWithLayoutRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

