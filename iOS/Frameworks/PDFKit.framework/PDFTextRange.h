//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextRange.h>

@class PDFTextPosition;

__attribute__((visibility("hidden")))
@interface PDFTextRange : UITextRange
{
    PDFTextPosition *_start;
    PDFTextPosition *_end;
}

- (void).cxx_destruct;
- (id)description;
- (id)initFromPos:(id)arg1 toPos:(id)arg2;
- (id)end;
- (id)start;
- (_Bool)isEmpty;

@end
