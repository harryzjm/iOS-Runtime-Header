//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSCHTSWPTextDelegate, TSWPText;

@interface TSCHTSWPTextWithDelegate : NSObject
{
    TSWPText *_text;
    TSCHTSWPTextDelegate *_textDelegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TSCHTSWPTextDelegate *textDelegate; // @synthesize textDelegate=_textDelegate;
@property(retain, nonatomic) TSWPText *text; // @synthesize text=_text;
- (id)initWithText:(id)arg1 textDelegate:(id)arg2;

@end

