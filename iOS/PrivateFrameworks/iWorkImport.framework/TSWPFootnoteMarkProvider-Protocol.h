//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSString, TSWPStorage;

@protocol TSWPFootnoteMarkProvider <NSObject>
- (NSString *)markStringForFootnoteReferenceStorage:(TSWPStorage *)arg1 ignoreDeletedFootnotes:(_Bool)arg2 forceDocumentEndnotes:(_Bool)arg3;
- (NSString *)markStringForFootnoteReferenceStorage:(TSWPStorage *)arg1;
@end

