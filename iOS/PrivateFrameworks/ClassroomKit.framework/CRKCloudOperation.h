//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CATOperation.h"

@class CKDatabase;

@interface CRKCloudOperation : CATOperation
{
    CKDatabase *_database;
}

+ (id)new;
@property(readonly, nonatomic) CKDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (_Bool)isAsynchronous;
- (id)initWithDatabase:(id)arg1;
- (id)init;

@end
