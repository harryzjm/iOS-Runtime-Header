//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <KeynoteQuicklook/TSKExporter-Protocol.h>

@class NSURL;
@protocol TSDImportExportDelegate;

@protocol TSKRenderingExporter <TSKExporter>
@property(nonatomic) _Bool paginate;
@property(readonly, nonatomic) unsigned long long pageCount;
@property(readonly, nonatomic) double progressForCurrentPage;
@property(readonly, nonatomic) struct CGRect unscaledClipRect;
@property(readonly, nonatomic) struct CGRect boundsRect;
- (void)performBlockWithImager:(void (^)(TSDImager *))arg1;
- (_Bool)drawCurrentPageInContext:(struct CGContext *)arg1 viewScale:(double)arg2 unscaledClipRect:(struct CGRect)arg3 createPage:(_Bool)arg4;
- (_Bool)setInfosToCurrentPage;
- (_Bool)incrementPage;
- (_Bool)preparePage:(unsigned long long)arg1;
- (void)teardown;
- (void)setup;
- (_Bool)exportToURL:(NSURL *)arg1 pageNumber:(unsigned long long)arg2 delegate:(id <TSDImportExportDelegate>)arg3 error:(id *)arg4;
@end
