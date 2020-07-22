//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SoftwareUpdateServices/SUDescriptor.h>

@interface SUSUIFakeSUDescriptor : SUDescriptor
{
}

- (id)documentation;
- (_Bool)isDownloadableOverCellular;
- (_Bool)isDownloadable;
- (int)updateType;
- (unsigned long long)installationSize;
- (unsigned long long)preparationSize;
- (unsigned long long)downloadSize;
- (id)productBuildVersion;
- (id)productVersion;
- (id)productSystemName;
- (id)humanReadableUpdateName;
- (id)publisher;

@end

