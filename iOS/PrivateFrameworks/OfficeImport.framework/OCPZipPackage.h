//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, OISFUZipArchive;

__attribute__((visibility("hidden")))
@interface OCPZipPackage
{
    OISFUZipArchive *mArchive;
    NSMutableDictionary *mParts;
}

- (void).cxx_destruct;
- (void)resetPartForLocation:(id)arg1;
- (id)partForLocation:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithArchive:(id)arg1;

@end
