//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _HKXMLTranslator : NSObject
{
    struct _xsltStylesheet *_stylesheet;
}

- (id)_localizeXSL:(id)arg1 localizationTableName:(id)arg2 localizationOverride:(id)arg3;
- (id)convertToHTMLFromXML:(id)arg1;
- (void)dealloc;
- (id)initWithXSL:(id)arg1 localizationTableName:(id)arg2 localizationOverride:(id)arg3;

@end
