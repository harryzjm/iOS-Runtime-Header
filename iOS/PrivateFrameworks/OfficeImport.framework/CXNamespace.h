//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CXNamespace : NSObject
{
    const char *mUri;
    struct _xmlDoc *mDocument;
    struct _xmlNs *mDocumentNamespace;
    CXNamespace *mFallbackNamespace;
}

+ (void)clearRegisteredNamespaces;
+ (_Bool)isPrefixSupportedFromStream:(struct _xmlTextReader *)arg1 prefix:(const char *)arg2;
+ (_Bool)isPrefixSupportedFromNodeContext:(struct _xmlNode *)arg1 prefix:(const char *)arg2;
+ (_Bool)isNamespaceSupported:(const char *)arg1;
+ (void)registerNamespace:(id)arg1;
@property(retain, nonatomic) CXNamespace *fallbackNamespace; // @synthesize fallbackNamespace=mFallbackNamespace;
- (const char *)fallbackUri;
- (const char *)uri;
- (_Bool)containsAttribute:(struct _xmlAttr *)arg1;
- (_Bool)containsNode:(struct _xmlNode *)arg1;
- (id)initUnsupportedNsWithUri:(const char *)arg1;
- (void)dealloc;
- (id)initWithUri:(const char *)arg1 fallbackNamespace:(id)arg2;
- (id)initWithUri:(const char *)arg1;
- (id)init;

@end
