//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSData, PLPhotoEditExportProperties, PLPhotoEditModel;

@protocol PLPhotoEditDataExporter <NSObject>
+ (NSData *)dataFromPhotoEditModel:(PLPhotoEditModel *)arg1 outFormatIdentifier:(id *)arg2 outFormatVersion:(id *)arg3 exportProperties:(PLPhotoEditExportProperties *)arg4;
@end

