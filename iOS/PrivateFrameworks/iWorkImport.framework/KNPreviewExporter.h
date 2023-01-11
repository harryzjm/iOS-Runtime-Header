//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/TSKImageExporter-Protocol.h>

@class NSString, TSUProgress;

__attribute__((visibility("hidden")))
@interface KNPreviewExporter <TSKImageExporter>
{
}

- (void)setup;
@property(nonatomic) _Bool scaleToFit;
@property(nonatomic) unsigned long long height;
@property(nonatomic) unsigned long long width;
- (id)p_renderingExporterDelegate;

// Remaining properties
@property(readonly, nonatomic) struct CGRect boundsRect;
@property(readonly, nonatomic) _Bool canExportInBackground;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *documentSpecificTypeUTI;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isCancelled;
@property(readonly, nonatomic) _Bool isExportSupported;
@property(readonly, nonatomic) _Bool needsSupplementalFiles;
@property(readonly, nonatomic) unsigned long long pageCount;
@property(nonatomic) _Bool paginate;
@property(readonly, nonatomic) TSUProgress *progress;
@property(readonly, nonatomic) double progressForCurrentPage;
@property(readonly, nonatomic) NSString *savePanelMessage;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *typeUTI;
@property(readonly, nonatomic) struct CGRect unscaledClipRect;

@end

