//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/JSExport-Protocol.h>

@class IKDOMDocument, NSArray, NSDictionary;

@protocol SKUIJSModalDocumentController <JSExport>
@property(readonly, retain, nonatomic) NSArray *documents;
- (void)replaceDocument:(IKDOMDocument *)arg1:(IKDOMDocument *)arg2:(NSDictionary *)arg3;
- (void)pushDocument:(IKDOMDocument *)arg1:(NSDictionary *)arg2;
- (void)popToDocument:(IKDOMDocument *)arg1;
- (void)popDocument;
@end

