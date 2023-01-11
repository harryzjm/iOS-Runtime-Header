//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface VVDataMigrator : NSObject
{
    NSString *_serviceIdentifier;
    NSString *_searchHint;
    NSString *_isoCountryCode;
}

+ (id)homeDirectory;
+ (id)carrierServiceName;
@property(copy, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(copy, nonatomic) NSString *searchHint; // @synthesize searchHint=_searchHint;
@property(copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
- (void).cxx_destruct;
- (void)performIMAPFilePathMigration;
- (void)performMigrationIfNecessary;
- (void)createFoldersIfNecessary;
- (_Bool)shouldPerformMigration;

@end

