//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

#import <ContentKit/WFJSONObject-Protocol.h>
#import <ContentKit/WFJavaScriptCoreBridgeableObject-Protocol.h>
#import <ContentKit/WFNaming-Protocol.h>
#import <ContentKit/WFPropertyListObject-Protocol.h>

@interface NSString (WFFilenameUtilities) <WFPropertyListObject, WFNaming, WFJavaScriptCoreBridgeableObject, WFJSONObject>
+ (id)wf_datedFilenameWithTypeString:(id)arg1 fileExtension:(id)arg2;
+ (id)wf_stringWithData:(id)arg1;
- (id)wf_filenameTruncatedToMaximumLength;
- (id)wf_filenameTruncatedToMaximumLengthWithSuffix:(id)arg1;
- (id)gtm_stringByUnescapingFromHTML;
- (id)gtm_stringByEscapingForAsciiHTML;
- (id)gtm_stringByEscapingForHTML;
- (id)gtm_stringByEscapingHTMLUsingTable:(CDStruct_6a59ab51 *)arg1 ofSize:(unsigned long long)arg2 escapingUnicode:(_Bool)arg3;
- (_Bool)wf_hasStrongRTLCharacter;
@property(readonly, copy, nonatomic) NSString *wfName;
- (id)wf_stringByTrimmingTrailingWhitespaceAndNewlineCharacters;
- (id)wf_stringByTrimmingLeadingWhitespaceAndNewlineCharacters;
- (id)wf_stringByTrimmingTrailingCharactersInSet:(id)arg1;
- (id)wf_stringByTrimmingLeadingCharactersInSet:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
