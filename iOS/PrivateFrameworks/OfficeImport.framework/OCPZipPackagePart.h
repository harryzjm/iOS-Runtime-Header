//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OISFUZipEntry;

__attribute__((visibility("hidden")))
@interface OCPZipPackagePart
{
    OISFUZipEntry *mEntry;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) OISFUZipEntry *zipEntry; // @synthesize zipEntry=mEntry;
- (struct _xmlTextReader *)xmlReader;
- (struct _xmlDoc *)xmlDocument;
- (void)copyToFile:(id)arg1;
- (id)data;
- (id)initWithArchive:(id)arg1 location:(id)arg2 package:(id)arg3;

@end

