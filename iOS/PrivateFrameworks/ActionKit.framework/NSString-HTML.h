//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (HTML)
- (id)stringByStrippingTags;
- (id)stringByLinkifyingURLs;
- (id)stringByRemovingNewLinesAndWhitespace;
- (id)stringWithNewLinesAsBRs;
- (id)stringByEncodingHTMLEntities:(_Bool)arg1;
- (id)stringByEncodingHTMLEntities;
- (id)stringByDecodingHTMLEntities;
- (id)stringByConvertingHTMLToPlainText;
- (id)en_scrubUsingRegex:(id)arg1 withMinLength:(unsigned short)arg2 maxLength:(unsigned short)arg3;
- (id)en_scrubUsingRegex:(id)arg1 withMinLength:(unsigned short)arg2 maxLength:(unsigned short)arg3 invalidCharacterReplacement:(id)arg4;
- (id)pcen;
- (id)stringByUnescapingCrititcalXMLEntities;
- (id)stringByEscapingCriticalXMLEntities;
- (id)en_stringByUrlDecoding;
- (id)en_stringByUrlEncoding;
- (id)ik_URLEncodedString;
- (_Bool)enIsEqualToStringWithEmptyEqualToNull:(id)arg1;
- (_Bool)enIsEqualToStringOrNil:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

