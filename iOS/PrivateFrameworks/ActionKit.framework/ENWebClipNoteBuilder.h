//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL, UIWebView;

@interface ENWebClipNoteBuilder : NSObject
{
    UIWebView *_webView;
    NSURL *_url;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)createNoteFromContents:(id)arg1 title:(id)arg2 mimeType:(id)arg3 sourceURL:(id)arg4;
- (_Bool)clipContentsOfWebView:(id)arg1;
- (void)completeWithNote:(id)arg1;
- (void)buildNote:(CDUnknownBlockType)arg1;
- (id)initWithWebView:(id)arg1;
- (id)initWithUrl:(id)arg1;

@end
