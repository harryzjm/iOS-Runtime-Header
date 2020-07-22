//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSString, TSKAddedToDocumentContext, TSKDocumentRoot, TSPObjectContext, TSWPStorage;
@protocol TSWPOverlappingField;

@protocol TSWPOverlappingField <NSObject>
- (id)copyWithContext:(TSPObjectContext *)arg1;
- (_Bool)isEquivalentToObject:(id <TSWPOverlappingField>)arg1;
- (NSString *)textAttributeUUIDString;
- (TSWPStorage *)parentStorage;
- (void)setParentStorage:(TSWPStorage *)arg1;
- (void)wasRemovedFromDocumentRoot:(TSKDocumentRoot *)arg1;
- (void)willBeRemovedFromDocumentRoot:(TSKDocumentRoot *)arg1;
- (void)wasAddedToDocumentRoot:(TSKDocumentRoot *)arg1 dolcContext:(TSKAddedToDocumentContext *)arg2;
- (void)willBeAddedToDocumentRoot:(TSKDocumentRoot *)arg1 dolcContext:(TSKAddedToDocumentContext *)arg2;
@end

