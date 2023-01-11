//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSXMLParserDelegate-Protocol.h>

@class GEOFlyoverRegionVersions, NSError, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface GEOAltitudeManifestVersionParser : NSObject <NSXMLParserDelegate>
{
    struct GEOOnce_s _parsed;
    NSURL *_fileURL;
    GEOFlyoverRegionVersions *_versions;
    NSError *_parseError;
}

- (void).cxx_destruct;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (id)parse:(id *)arg1;
- (id)initWithFileURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

