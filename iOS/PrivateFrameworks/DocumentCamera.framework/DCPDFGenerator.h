//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface DCPDFGenerator : NSObject
{
    struct CGContext *_pdfContext;
    NSURL *_fileURL;
    NSString *_title;
    NSMutableData *_data;
    struct CGRect _pageRect;
}

@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(nonatomic) struct CGRect pageRect; // @synthesize pageRect=_pageRect;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void).cxx_destruct;
- (void)finishGenerating;
- (void)addPageWithPageRect:(struct CGRect)arg1 renderBlock:(CDUnknownBlockType)arg2;
- (void)addPageWithRenderBlock:(CDUnknownBlockType)arg1;
- (_Bool)startGenerating;
@property(readonly, nonatomic) NSURL *url;
- (void)dealloc;
- (id)initWithMutableData:(id)arg1 pageRect:(struct CGRect)arg2 title:(id)arg3;
- (id)initWithURL:(id)arg1 pageRect:(struct CGRect)arg2 title:(id)arg3;
- (id)init;

@end

