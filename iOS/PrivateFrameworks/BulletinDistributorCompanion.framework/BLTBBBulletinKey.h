//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/NSCopying-Protocol.h>

@class NSString;

@interface BLTBBBulletinKey : NSObject <NSCopying>
{
    NSString *_sectionID;
    NSString *_publisherMatchID;
}

+ (id)bulletinKeyWithSectionID:(id)arg1 publisherMatchID:(id)arg2;
@property(readonly, copy, nonatomic) NSString *publisherMatchID; // @synthesize publisherMatchID=_publisherMatchID;
@property(readonly, copy, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
- (void).cxx_destruct;
- (id)keyString;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSectionID:(id)arg1 publisherMatchID:(id)arg2;

@end
