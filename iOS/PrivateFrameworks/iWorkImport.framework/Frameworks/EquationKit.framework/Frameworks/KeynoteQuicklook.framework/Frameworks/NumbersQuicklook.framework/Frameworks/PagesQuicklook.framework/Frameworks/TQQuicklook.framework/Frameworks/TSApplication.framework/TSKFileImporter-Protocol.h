//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSApplication/TSKImporter-Protocol.h>

@class NSString;
@protocol TSKImportExportDelegate;

@protocol TSKFileImporter <TSKImporter>
- (_Bool)importToPath:(NSString *)arg1 delegate:(id <TSKImportExportDelegate>)arg2 error:(id *)arg3;
- (_Bool)canCreateFile;
@end

