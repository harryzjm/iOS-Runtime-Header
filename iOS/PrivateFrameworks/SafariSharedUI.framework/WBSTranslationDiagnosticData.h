//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariSharedUI/NSCopying-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface WBSTranslationDiagnosticData : NSObject <NSCopying>
{
    NSMutableArray *_extractedParagraphs;
    NSMutableArray *_translatedParagraphs;
    NSString *_URLString;
    NSString *_extractedParagraphsAsJSON;
    NSString *_translatedParagraphsAsJSON;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *translatedParagraphsAsJSON; // @synthesize translatedParagraphsAsJSON=_translatedParagraphsAsJSON;
@property(copy, nonatomic) NSString *extractedParagraphsAsJSON; // @synthesize extractedParagraphsAsJSON=_extractedParagraphsAsJSON;
@property(copy, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
- (id)_destinationDirectory;
- (id)_createFileForContents:(id)arg1 fileName:(id)arg2 inDirectory:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)saveDiagnosticDataAsTemporaryFiles;
- (void)addTranslatedParagraph:(id)arg1;
- (void)addExtractedParagraphs:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *translatedParagraphs;
@property(readonly, copy, nonatomic) NSArray *extractedParagraphs;
- (id)init;

@end
