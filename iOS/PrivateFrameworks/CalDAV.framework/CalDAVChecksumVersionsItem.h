//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVChecksumVersionsItem : CoreDAVItem
{
    NSMutableSet *_versionStringsSupported;
}

- (void).cxx_destruct;
- (id)copyParseRules;
- (_Bool)supportsVersion:(id)arg1;
- (void)addVersionSupported:(id)arg1;
- (id)init;

@end
