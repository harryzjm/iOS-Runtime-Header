//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OISFUZipEntry;

__attribute__((visibility("hidden")))
@interface TCBundleResourcePackageEntry : NSObject
{
    OISFUZipEntry *mZipEntry;
    struct _xmlDoc *mXmlDocument;
}

- (struct _xmlDoc *)xmlDocument;
- (id)data;
- (void)dealloc;
- (id)initWithZipEntry:(id)arg1;

@end

