//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssetCatalogFoundation/NSObject-Protocol.h>

@class IBICCatalogCompilerOptions, IBICCatalogCompilerResult, NSString;

@protocol IBICCompilableSticker <NSObject>
- (NSString *)itemName;
- (_Bool)compileToPath:(NSString *)arg1 options:(IBICCatalogCompilerOptions *)arg2 results:(IBICCatalogCompilerResult *)arg3;
@end
