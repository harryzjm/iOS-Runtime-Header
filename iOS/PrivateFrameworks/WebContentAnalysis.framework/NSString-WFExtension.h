//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (WFExtension)
+ (id)WF_stringFromArray:(id)arg1;
+ (id)WF_ignorableCharacterSet;
- (id)WF_stringWithMostSignificatDomainPart;
- (_Bool)_isIPv4DomainAddress;
- (id)WF_stringByProperlyFixingPercentEscapesUsingEncoding:(unsigned long long)arg1;
- (long long)WF_numericCompare:(id)arg1;
- (id)WF_fuzzyStringWithWordLength:(int)arg1;
- (id)WF_stringByConvertingSpacesInHTMLSpaces;
- (id)WF_stringByReplacingString:(id)arg1 withString:(id)arg2;
- (id)WF_stringByEscapingPrintfArguments;
- (id)WF_stringByRemovingWord:(id)arg1;
- (struct _NSRange)WF_rangeOfWord:(id)arg1;
- (_Bool)WF_containsWord:(id)arg1;
- (_Bool)WF_containsString:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)WF_containsString:(id)arg1;
@end

