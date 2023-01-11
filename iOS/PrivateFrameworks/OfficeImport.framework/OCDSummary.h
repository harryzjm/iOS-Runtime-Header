//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OCDSummary : NSObject
{
    NSString *mTitle;
    NSString *mAuthor;
    NSString *mKeywords;
    NSString *mComments;
    NSString *mHyperlinkBase;
    NSString *_subject;
    NSString *_company;
}

- (void).cxx_destruct;
@property(retain) NSString *company; // @synthesize company=_company;
@property(retain) NSString *subject; // @synthesize subject=_subject;
- (void)setHyperlinkBase:(id)arg1;
- (id)hyperlinkBase;
- (void)setComments:(id)arg1;
- (id)comments;
- (void)setKeywords:(id)arg1;
- (id)keywords;
- (void)setAuthor:(id)arg1;
- (id)author;
- (void)setTitle:(id)arg1;
- (id)title;

@end
