//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/NSTextAttachment.h>

@class MSCLTokenTextAttachmentView, NSString;

@interface MSCLTokenTextAttachment : NSTextAttachment
{
    id _representedObject;
    MSCLTokenTextAttachmentView *_tokenView;
}

@property(retain, nonatomic) MSCLTokenTextAttachmentView *tokenView; // @synthesize tokenView=_tokenView;
@property(retain, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
- (void).cxx_destruct;
- (id)imageForBounds:(struct CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
@property(readonly, copy, nonatomic) NSString *representedText;
- (id)attributedStringWithBaseAttributes:(id)arg1;

@end

