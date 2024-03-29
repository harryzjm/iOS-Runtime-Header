//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GQHStreamedXML : NSObject
{
    struct _xmlOutputBuffer {
        void *_field1;
        CDUnknownFunctionPointerType _field2;
        CDUnknownFunctionPointerType _field3;
        struct _xmlCharEncodingHandler *_field4;
        struct _xmlBuf *_field5;
        struct _xmlBuf *_field6;
        int _field7;
        int _field8;
    } *mOutputBuffer;
    struct __CFData *mData;
    struct __CFArray *mElementNameStack;
    int mLastOp;
    _Bool mNeedNewlineBeforeNextElement;
    struct _xmlDoc *mXMLDoc;
}

- (struct __CFData *)createProgressiveHtml;
- (struct __CFData *)createHtml;
- (struct __CFData *)createHtmlWithCss:(struct __CFString *)arg1;
- (void)addCharRef:(const char *)arg1;
- (void)addXmlCharContent:(const char *)arg1;
- (void)setAttribute:(const char *)arg1 value:(const char *)arg2;
- (void)endElementWithExpectedName:(const char *)arg1;
- (void)endElement;
- (void)startElement:(const char *)arg1;
- (void)dealloc;
- (id)initWithHead;
- (id)initEmpty;
- (const char *)peekElementName;
- (char *)popElementName;
- (void)pushElementName:(const char *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

