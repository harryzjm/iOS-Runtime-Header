//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AMSFamilyAccountPair : NSObject
{
    unsigned long long _downloaderAccountID;
    unsigned long long _familyID;
    unsigned long long _purchaserAccountID;
}

@property(readonly, nonatomic) unsigned long long purchaserAccountID; // @synthesize purchaserAccountID=_purchaserAccountID;
@property(readonly, nonatomic) unsigned long long familyID; // @synthesize familyID=_familyID;
@property(readonly, nonatomic) unsigned long long downloaderAccountID; // @synthesize downloaderAccountID=_downloaderAccountID;
- (id)initWithDownloaderAccountID:(unsigned long long)arg1 purchaserAccountID:(unsigned long long)arg2 familyID:(unsigned long long)arg3;

@end
