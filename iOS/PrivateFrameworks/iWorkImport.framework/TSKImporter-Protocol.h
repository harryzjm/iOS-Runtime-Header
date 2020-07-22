//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSArray, NSString, NSURL, NSUUID, TSKDocumentRoot, TSUImage, TSUProgressContext;
@protocol TSDImportExportDelegate;

@protocol TSKImporter <NSObject>
- (void)setProgressContext:(TSUProgressContext *)arg1;
- (TSUProgressContext *)progressContext;
- (_Bool)stylesheetUpdatesRequired;
- (NSString *)initialTemplateName;
- (void)quit;
- (void)cancel;
- (_Bool)importToDocumentRoot:(TSKDocumentRoot *)arg1 delegate:(id <TSDImportExportDelegate>)arg2 error:(id *)arg3;
- (void)setURL:(NSURL *)arg1;
- (id)initWithURL:(NSURL *)arg1;

@optional
+ (_Bool)instancesRespondToSelector:(SEL)arg1;
- (NSUUID *)uuidOfImportedDocument;
- (TSUImage *)thumbnailImage;
- (NSArray *)buildVersionHistory;
- (_Bool)importStartsWithThemeOnly;
- (_Bool)postprocessRegularDocumentRoot:(TSKDocumentRoot *)arg1 delegate:(id <TSDImportExportDelegate>)arg2;
- (unsigned long long)initialVariantIndex;
@end

