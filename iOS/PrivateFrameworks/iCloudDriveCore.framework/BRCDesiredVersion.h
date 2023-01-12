//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BRCVersion.h"

#import <iCloudDriveCore/PQLValuable-Protocol.h>

@class NSError, NSString;

__attribute__((visibility("hidden")))
@interface BRCDesiredVersion : BRCVersion <PQLValuable>
{
    union {
        unsigned int value;
        struct {
            unsigned int isFault:1;
            unsigned int startDownload:1;
            unsigned int wantsThumbnail:1;
            unsigned int userInitiated:1;
            unsigned int wantsContentForThumbnail:1;
        } ;
    } _flags;
    NSError *_downloadError;
    NSString *_serverName;
}

+ (id)newFromSqliteStatement:(struct sqlite3_stmt *)arg1 atIndex:(int)arg2;
+ (id)newFromSqliteValue:(struct sqlite3_value *)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *serverName; // @synthesize serverName=_serverName;
@property(retain, nonatomic) NSError *downloadError; // @synthesize downloadError=_downloadError;
- (_Bool)isStillValidForEtag:(id)arg1;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)descriptionWithContext:(id)arg1;
- (id)initWithServerVersion:(id)arg1 serverName:(id)arg2;
- (id)initWithDesiredVersion:(id)arg1;
- (void)markLiveAsFault;
@property(nonatomic) unsigned int options;
@property(readonly, nonatomic) _Bool wantsContentForThumbnail;
@property(readonly, nonatomic) _Bool userInitiated;
@property(readonly, nonatomic) _Bool wantsThumbnail;
@property(readonly, nonatomic) _Bool wantsContent;
@property(readonly, nonatomic) _Bool isFault;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

