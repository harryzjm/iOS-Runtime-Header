//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSTextAttachment.h>

@class _MFAtomLayoutView;

__attribute__((visibility("hidden")))
@interface _MFAtomAttachment : NSTextAttachment
{
    _MFAtomLayoutView *_atomView;
    id _representedObject;
}

+ (id)attachmentWithAtomLayoutView:(id)arg1 representedObject:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
@property(readonly, nonatomic) _MFAtomLayoutView *atomView; // @synthesize atomView=_atomView;
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (id)imageForBounds:(struct CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;
- (id)initWithAtomLayoutView:(id)arg1 representedObject:(id)arg2;

@end

