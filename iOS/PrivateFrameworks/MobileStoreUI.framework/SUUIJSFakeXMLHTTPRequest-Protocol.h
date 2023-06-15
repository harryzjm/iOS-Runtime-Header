//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileStoreUI/JSExport-Protocol.h>

@class IKJSXMLDocument, NSDictionary, NSString;

@protocol SUUIJSFakeXMLHTTPRequest <JSExport>
@property(readonly, retain) NSString *statusText;
@property(readonly) unsigned int status;
@property(readonly) IKJSXMLDocument *responseXML;
@property(readonly) unsigned int responseType;
@property(readonly) NSString *responseText;
@property(readonly) id response;
@property(readonly) unsigned int readyState;
@property(readonly) NSDictionary *metrics;
- (NSString *)getResponseHeader:(NSString *)arg1;
- (NSString *)getAllResponseHeaders;
@end

